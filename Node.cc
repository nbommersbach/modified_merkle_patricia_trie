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

void Node::append_Node(Node* node)
{
    m_nodes.push_back(node);
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