class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;

    // constructor
    TrieNode(char data)
    {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie
{
    TrieNode *root;

public:
    // constructor
    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertWord(TrieNode *root, string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isTerminal = true;
            return;
        }

        // small calculation
        int indx = word[0] - 'a';
        TrieNode *child;
        if (root->children[indx] != NULL)
        {
            child = root->children[indx];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[indx] = child;
        }

        // recursive case
        insertWord(child, word.substr(1));
    }

    // for user
    void insertWord(string word)
    {
        insertWord(root, word);
        return;
    }

    void printSugestion(TrieNode *curr, vector<string> &temp, string prefix)
    {
        if (curr->isTerminal)
        {
            temp.push_back(prefix);
        }

        for (char ch = 'a'; ch <= 'z'; ch++)
        {
            TrieNode *next = curr->children[ch - 'a'];
            if (next != NULL)
            {
                prefix.push_back(ch);
                printSugestion(next, temp, prefix);
                prefix.pop_back();
            }
        }
    }

    vector<vector<string>> suggestion(string s)
    {
        TrieNode *prev = root;
        vector<vector<string>> output;
        string prefix = "";

        for (int i = 0; i < s.length(); i++)
        {
            char lastCh = s[i];
            prefix.push_back(lastCh);

            TrieNode *curr = prev->children[lastCh - 'a'];
            if (curr == NULL)
                break;

            vector<string> temp;
            printSugestion(curr, temp, prefix);

            output.push_back(temp);
            temp.clear();
            prev = curr;
        }
        return output;
    }
};

vector<vector<string>> phoneDirectory(vector<string> &contactList, string &queryStr)
{
    //    Write your code here.

    Trie t;
    for (int i = 0; i < contactList.size(); i++)
    {
        t.insertWord(contactList[i]);
    }

    return t.suggestion(queryStr);
}