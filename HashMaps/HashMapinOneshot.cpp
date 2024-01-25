// Implementation of hashMap
// #include <iostream>
// using namespace std;
// class node
// {
// public:
//     string key;
//     int value;
//     node *next;

//     node(string k, int v)
//     {
//         key = k;
//         value = v;
//         next = NULL;
//     }
// };

// class hashmap
// {
//     int totalSize;
//     int currentSize;
//     node **arr;

// public:
//     hashmap(int size = 9)
//     {
//         int totalSize = size;
//         int currentSize = 0;
//         arr = new node *[size]; // hashmap bna 9 size ka
//         for (int i = 0; i < totalSize; i++)
//         {
//             arr[i] = NULL;
//         }
//     }

//     int hashFunction(string key)
//     {
//         int ans = 0;
//         int mul = 1;
//         for (int i = 0; i < totalSize; i++)
//         {
//             // ans = ans + (key[i] * mul) % totalSize;
//             ans = ans + (key[i] % totalSize * mul % totalSize) % totalSize;
//             mul = (mul * 27) % totalSize;
//         }
//         ans = ans % totalSize;
//         return ans;
//     }

//     void rehashing()
//     {
//         node **oldarr = arr;
//         int oldtotalsize = totalSize;
//         arr = new node *[2 * totalSize];
//         totalSize = 2 * totalSize;
//         currentSize = 0;
//         for (int i = 0; i < totalSize; i++)
//         {
//             arr[i] = NULL;
//         }

//         for (int i = 0; i < oldtotalsize; i++)
//         {
//             node *head = oldarr[i];
//             while (head != NULL)
//             {
//                 insert(head->key, head->value);
//                 head = head->next;
//             }
//         }
//         delete[] oldarr;
//     }

//     void insert(string key, int value)
//     {
//         cout << "In inserting" << endl;
//         int index = hashFunction(key);
//         node *n = new node(key, value);
//         n->next = arr[index];
//         arr[index] = n;
//         currentSize++;
//         if (currentSize / (totalSize * 1.0) > 0.6)
//         {
//             rehashing();
//         }
//     }

//     // bool search(string key)
//     // {
//     //     int index = hashFunction(key);
//     //     node *head = arr[index];
//     //     while (head != NULL)
//     //     {
//     //         if (head->key == key)
//     //         {
//     //             return true;
//     //         }
//     //         head = head->next;
//     //     }
//     //     return false;
//     // }

//     node *search(string key)
//     {
//         int index = hashFunction(key);
//         node *head = arr[index];
//         while (head != NULL)
//         {
//             if (head->key == key)
//             {
//                 return head;
//             }
//             head = head->next;
//         }
//         return NULL;
//     }

//     void print()
//     {
//         for (int i = 0; i < totalSize; i++)
//         {
//             cout << i << " : ";
//             node *head = arr[i];
//             while (head != NULL)
//             {
//                 cout << head->key << " --> ";
//                 head = head->next;
//             }
//             cout << "NULL" << endl;
//         }
//     }

//     int &operator[](string key)
//     {
//         node *ans = search(key);

//         if (ans == NULL)
//         {
//             int g;
//             insert(key, g);
//             ans = search(key);
//             return ans->value;
//         }
//         else
//         {
//             return ans->value;
//         }
//     }
// };

// int main()
// {
//     hashmap h;
//     // h.insert("kiwi", 200);
//     // h.insert("Banana", 300);
//     // h.insert("Apple", 500);
//     // h.print();

//     h["kiwi"] = 200;
//     h.print();
//     return 0;
// }

#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string, int> umap;
    umap["kiwi"] = 100;
    umap["nano"] = 2000;

    for (auto fruits : umap)
    {
        cout << fruits.first << " " << fruits.second << endl;
    }
    return 0;
}
