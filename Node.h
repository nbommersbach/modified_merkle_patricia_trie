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
        std::string get_name() const;
        std::string get_type() const;
        void append_node(Node* node);
        void remove_node(const int index);
        std::vector<std::string> generate_node_list() const;
        std::vector<Node*> get_nodes() const;
        
    
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
        Branch_Node(const std::string name, std::vector<uint32_t> keys);
        ~Branch_Node();
        std::vector<uint32_t> get_keys() const;

    private:
        std::vector<uint32_t> m_keys;
};

#endif


#ifndef LEAF_NODE_h
#define LEAF_NODE_h

class Leaf_Node : public Node
{
    public:
        Leaf_Node(const std::string name, const u_int32_t key);
        ~Leaf_Node();
        u_int32_t get_key() const;

    private:
        uint32_t m_key;
};

#endif


#ifndef EXTENSION_NODE_h
#define EXTENSION_NODE_h

class Extension_Node : public Node
{
    public:
        Extension_Node(const std::string name, const uint32_t key);
        ~Extension_Node();
        u_int32_t get_key() const;

    private:
        uint32_t m_key;

};

#endif