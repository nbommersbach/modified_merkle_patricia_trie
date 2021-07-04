#include "Node.h"

Node::Node(const std::string name)
    : m_name(name)
{
    std::cout << "Node Constructor called" << std::endl;
}

Node::~Node()
{
    std::cout << "Node Destructor called" << std::endl;
}

std::string Node::get_name() const
{
    return m_name;
}

std::string Node::get_type() const
{
    return m_type;
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

std::vector<std::string> Node::generate_node_list() const
{
    std::vector<std::string> res;
    for(const auto &val : m_nodes)
    {
        std::string str;
        str.append(val->get_type());
        str.append("-node: ");
        str.append(val->get_name());
        str.append(" | data: ");
        res.push_back(str);
    }
    return res;
}




//Branch_Node

Branch_Node::Branch_Node(const std::string name, std::vector<uint32_t> keys) : Node(name)
{
    m_type = "branch";
    m_keys = keys;
    std::cout << "Branch Node Constructor called" << std::endl;
}

Branch_Node::~Branch_Node()
{
    std::cout << "Branch Node Destructor called" << std::endl;
}

std::vector<uint32_t> Branch_Node::get_keys() const
{
    return m_keys;
}

//Leaf_Node

Leaf_Node::Leaf_Node(const std::string name, const uint32_t key) : Node(name)
{
    m_type = "leaf";
    m_key = key;
    std::cout << "Leaf Node Constructor called" << std::endl;
}

Leaf_Node::~Leaf_Node()
{
    std::cout << "Leaf Node Destructor called" << std::endl;
}

uint32_t Leaf_Node::get_key() const
{
    return m_key;
}


//Extension Node

Extension_Node::Extension_Node(const std::string name, const uint32_t key) : Node(name)
{
    m_type = "extension";
    m_key = key;
    std::cout << "Extension Node Constructor called" << std::endl;
}

Extension_Node::~Extension_Node()
{
    std::cout << "Extension Node Destructor called" << std::endl;
}

uint32_t Extension_Node::get_key() const
{
    return m_key;
}