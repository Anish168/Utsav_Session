#include <iostream>
#include<string.h>
using namespace std;
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

    // for remove
    void removeWord(TrieNode *root, string word)
    {
        // base case
        if (word.size() == 0)
        {
            root->isTerminal = false;
            return;
        }

        // small case
        TrieNode *child;
        int indx = word[0] - 'a';
        if (root->children[indx] != NULL)
        {
            child = root->children[indx];
        }
        else
        {
            // word not found
            return;
        }

        // recursive case   //mai ish line pr tbhi aunga jab word exit kr rha hoga
        removeWord(child, word.substr(1));

        // remove child node if it is useless
        // ush node pr end nhi hona chahiye
        if (child->isTerminal == false)
        {
            // ush node k niche koi character nhi hona
            for (int i = 0; i < 26; i++)
            {
                if (child->children[i] != NULL)
                {
                    // ishme tb ayega jb ush node k niche koi child h toh bina kuch kiye hum return kr jayenge
                    return;
                }
            }
            // yha mai tb pahuchunga jb kbhi bhi line 101 statisfies nhi kregi
            // agar dono condition true hogi means end nhi ho wo node or koi bche na ho ushke niche then we can delete
            delete child;
            root->children[indx] = NULL;
        }
    }

    // for user
    void removeWord(string word)
    {
        removeWord(root, word);
        return;
    }

    // search a word
    bool search(TrieNode *root, string word)
    {
        if (word.size() == 0)
        {
            return root->isTerminal;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }

        // Recursive call
        return search(child, word.substr(1));
    }

    bool search(string word)
    {
        return search(root, word);
    }
};

int main()
{
	Trie t;
	t.insertWord("and");
	t.insertWord("are");
	t.insertWord("dot");

	cout << t.search("and") << endl;

	t.removeWord("and");
	cout << t.search("and") << endl;

    return 0;
}