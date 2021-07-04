#include <iostream>
#include <string>
#include <memory>
#include <vector>

#ifndef NODE_h
#define NODE_h

class Node
{
    public:
        Node(const std::string name);
        ~Node();
        std::string get_name();
        std::string get_type();
        void append_node(Node* node);
        void remove_node(const int index);
        std::vector<std::string> generate_node_list();
        std::vector<Node*> get_nodes();
        
    
    protected:
        std::string m_name;
        std::string m_type;

    private:
        std::vector<Node*> m_nodes;
};
#endif


#ifndef BRANCH_NODE_h
#define BRANCH_NODE_h

class Branch_Node : public Node
{
    public:
        Branch_Node(const std::string name);
        ~Branch_Node();
};

#endif


#ifndef LEAF_NODE_h
#define LEAF_NODE_h

class Leaf_Node : public Node
{
    public:
        Leaf_Node(const std::string name);
        ~Leaf_Node();
};

#endif


#ifndef EXTENSION_NODE_h
#define EXTENSION_NODE_h

class Extension_Node : public Node
{
    public:
        Extension_Node(const std::string name);
        ~Extension_Node();
};

#endif