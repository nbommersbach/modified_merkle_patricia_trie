#include "Trie.h"

Trie::Trie(const Node_Type node_type, const std::string genesis_node_name)
{
    switch (node_type)
    {
        case Node_Type::BRANCH:
            m_genesis_node = new Branch_Node(genesis_node_name);
            break;

        case Node_Type::LEAF:
            m_genesis_node = new Leaf_Node(genesis_node_name);
            break;

        case Node_Type::EXTENSION:
            m_genesis_node = new Extension_Node(genesis_node_name);
        
        default:
            m_genesis_node = new Node(genesis_node_name);
            break;
    }
}

Trie::~Trie()
{
    delete m_genesis_node;
}

Node* Trie::get_genesis_node() const
{
    return m_genesis_node;
}