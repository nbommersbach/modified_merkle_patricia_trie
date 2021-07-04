#include <iostream>
#include <string>
#include <vector>

#ifndef NODE_h
#define NODE_h

class Node
{
    public:

        /**
         * @brief Construct a new Node object
         * 
         * @param name Name of the new Node
         */
        Node(const std::string name);

        /**
         * @brief Destroy the Node object
         * 
         */
        ~Node();

        /**
         * @brief Get the name of Node
         * 
         * @return  Name of Node
         */
        std::string get_name() const;

        /**
         * @brief Get the type of Node
         * 
         * @return  Type of Node
         */
        std::string get_type() const;

        /**
         * @brief Prints Child Nodes on the Console
         * 
         */
        void print_nodes() const;

        /**
         * @brief Checks if there are Child Nodes
         * 
         * @return  Boolean value
         */
        bool child_nodes() const;

        /**
         * @brief Appends a Child Node
         * 
         * @param node Child Node to append to this Node
         */
        void append_node(Node* node);

        /**
         * @brief Returns one of the Child Nodes
         * 
         * @param index Index of the Child Node to return
         * @return Node pointer of the Child Node
         */
        Node* return_node(const int index) const;

        /**
         * @brief Removes Child Node from the list of Child Nodes
         * 
         * @param index Index of the Child Node to remove
         */
        void remove_node(const int index);

        /**
         * @brief Generates a list (std::vector<std::string>)of Child Nodes
         * 
         * @return Vector of Child Node information string
         */
        std::vector<std::string> generate_node_list() const;

        /**
         * @brief Get the Child Nodes Objects
         * 
         * @return Pointers (std::vector<Node*>) of all Child Nodes
         */
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
        Branch_Node(const std::string name);
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
        Leaf_Node(const std::string name);
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
        Extension_Node(const std::string name);
        Extension_Node(const std::string name, const uint32_t key);
        ~Extension_Node();
        u_int32_t get_key() const;

    private:
        uint32_t m_key;

};

#endif