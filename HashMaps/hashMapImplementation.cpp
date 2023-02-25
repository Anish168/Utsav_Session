#include <iostream>
using namespace std;

class node
{
public:
    string key;
    int val;
    node *next;

    // constructor
    node(string k, int v)
    {
        key = k;
        val = v;
        next = NULL;
    }
};

class hashmap
{
    int totalSize;
    int currentSize;
    node **arr;

public:
    // constructor
    hashmap(int size = 7)
    {
        totalSize = size;
        currentSize = 0;
        arr = new node *[size];
        // int *arr = new int[size];
        for (int i = 0; i < totalSize; i++)
        {
            arr[i] = NULL;
        }
    }

    // insert
    void insert(string key, int value)
    {
        int index = hashfunction(key); // 2
        node *n = new node(key, value);
        n->next = arr[index];
        arr[index] = n;
        currentSize++;
        if (currentSize / (totalSize * 1.0) > 0.6)
        {
            rehashing();
        }
    }

    // search
    bool search(string key)
    {
        int indx = hashfunction(key);
        node *head;
        while (head != NULL)
        {
            if (head->key == key)
            {
                return true;
            }
            head = head->next;
        }
        return false;
    }

    // print
    void print()
    {
        for (int i = 0; i < totalSize; i++)
        {
            cout << i << " : ";
            node *head = arr[i];
            while (head != NULL)
            {
                cout << head->key << " --> ";
                head = head->next;
            }
            cout << "NULL" << endl;
        }
    }
};

int main()
{

    return 0;
}