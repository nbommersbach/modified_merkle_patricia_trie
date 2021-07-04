#include <iostream>
#include "Node.h"

enum Node_Type : unsigned short
{
    BRANCH = 1,
    LEAF = 2,
    EXTENSION = 3
};

#ifndef TRIE_h
#define TRIE_H

class Trie
{
    public:
        Trie(const Node_Type node_type, const std::string genesis_node_name);
        ~Trie();
        Node* get_genesis_node() const;

    private:
        Node* m_genesis_node;
}; 

#endif