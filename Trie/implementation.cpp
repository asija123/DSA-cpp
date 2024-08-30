#include <bits/stdc++.h>
using namespace std;

class TrieNode
{

public:
    char data;
    TrieNode *childern[26];
    bool isterminal;

    TrieNode(char ch)
    {
        data = ch;
        for (int i = 0; i < 26; i++)
        {
            childern[i] = NULL;
        }
        isterminal = false;
    }
};

class Trie
{
public:
    TrieNode *root;

    Trie()
    {
        root = new TrieNode('\0');
    }

    void insertutil(TrieNode *root, string word)
    {
        // base case
        if (word.length() == 0)
        {
            root->isterminal = true;
            return;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->childern[index] != NULL)
        {
            child = root->childern[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->childern[index] = child;
        }

        // recursion
        insertutil(child, word.substr(1));
    }

    void insertword(string word)
    {
        insertutil(root, word);
    }

    bool searchutil(TrieNode *root, string word)
    {
        // base case

        if (word.length() == 0)
        {
            return root->isterminal;
        }

        int index = word[0] - 'A';
        TrieNode *child;

        // present
        if (root->childern[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            // absent
            return false;
        }
        // recursion
        return searchutil(child, word.substr(1));
    }

    bool searchword(stirn word)
    {
        return searchutil(root, word);
    }
};

int main()
{
}