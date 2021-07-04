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

std::string Node::get_name()
{
    return m_name;
}

std::string Node::get_type()
{
    return m_type;
}

void Node::append_node(Node* node)
{
    m_nodes.push_back(node);
}

std::vector<Node*> Node::get_nodes()
{
    return m_nodes;
}

void Node::remove_node(const int index)
{
    m_nodes.erase(m_nodes.begin() + index);
}

std::vector<std::string> Node::generate_node_list()
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
    std::cout << "Branch Node Constructor called" << std::endl;
}

Branch_Node::~Branch_Node()
{
    std::cout << "Branch Node Destructor called" << std::endl;
}

//Leaf_Node

Leaf_Node::Leaf_Node(const std::string name) : Node(name)
{
    m_type = "leaf";
    std::cout << "Leaf Node Constructor called" << std::endl;
}

Leaf_Node::~Leaf_Node()
{
    std::cout << "Leaf Node Destructor called" << std::endl;
}


//Extension Node

Extension_Node::Extension_Node(const std::string name) : Node(name)
{
    m_type = "extension";
    std::cout << "Extension Node Constructor called" << std::endl;
}

Extension_Node::~Extension_Node()
{
    std::cout << "Extension Node Destructor called" << std::endl;
}