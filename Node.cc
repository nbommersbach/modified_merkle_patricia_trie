#include <iostream>
#include <string>
#include <vector>

#include "Node.h"

Node::Node(const std::string name)
    : m_name(name)
{

}

Node::~Node()
{
    
}

std::string Node::get_name() const
{
    return m_name;
}

std::string Node::get_type() const
{
    return m_type;
}

void Node::print_nodes() const
{
    std::vector<std::string> str = generate_node_list();
    
    for(const auto &val : str)
    {
        std::cout << val << std::endl;
    }
}

bool Node::child_nodes() const
{
    if(m_nodes.size() == 0)
    {
        return false;
    }
    else return true;
}

void Node::append_node(Node* node)
{
    m_nodes.push_back(node);
}

std::vector<Node*> Node::get_nodes() const
{
    return m_nodes;
}

void Node::remove_node(const int index)
{
    m_nodes.erase(m_nodes.begin() + index);
}

Node* Node::return_node(const int index) const
{
    if(m_nodes.size() != 0)
    {
        return m_nodes[index];
    }
    else return new Node("TREE TERMINATED HERE");
}

std::vector<std::string> Node::generate_node_list() const
{
    std::vector<std::string> res;
    for(const auto &val : m_nodes)
    {
        std::string str;
        str.append(val->get_type());
        str.append("-node: ");
        str.append(val->get_name());
        res.push_back(str);
    }
    return res;
}




//Branch_Node

Branch_Node::Branch_Node(const std::string name) : Node(name) 
{
    m_type = "branch";
}

Branch_Node::Branch_Node(const std::string name, std::vector<uint32_t> keys) : Node(name)
{
    m_type = "branch";
    m_keys = keys;
}

Branch_Node::~Branch_Node()
{
}

std::vector<uint32_t> Branch_Node::get_keys() const
{
    return m_keys;
}




//Leaf_Node

Leaf_Node::Leaf_Node(const std::string name) : Node(name)
{
    m_type = "leaf";
}

Leaf_Node::Leaf_Node(const std::string name, const uint32_t key) : Node(name)
{
    m_type = "leaf";
    m_key = key;
}

Leaf_Node::~Leaf_Node()
{
}

uint32_t Leaf_Node::get_key() const
{
    return m_key;
}


//Extension Node

Extension_Node::Extension_Node(const std::string name) : Node(name)
{
    m_type = "extension";
}

Extension_Node::Extension_Node(const std::string name, const uint32_t key) : Node(name)
{
    m_type = "extension";
    m_key = key;
}

Extension_Node::~Extension_Node()
{

}

uint32_t Extension_Node::get_key() const
{
    return m_key;
}