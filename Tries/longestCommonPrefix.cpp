class TrieNode
{
public:
    char data;
    TrieNode **children;
    bool isTerminal;
    int childCount;

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
        childCount = 0;
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
            root->childCount++;
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

    void lcp(string &ans, string s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            char ch = s[i];
            if(root->childCount == 1)
            {
                ans.push_back(ch);
                int index = ch - 'a';
                root = root->children[index];
            }
            else
            {
                break;
            }

            if(root->isTerminal)
            {
                break;
            }
        }
    }
};

string longestCommonPrefix(vector<string> &arr, int n)
{
    // Write your code here
    Trie t;
    for(int i = 0; i < n; i++)
    {
        t.insertWord(arr[i]);
    }

    string firstWord = arr[0];
    string ans ="";
    t.lcp(ans, firstWord);
    return ans;

}


