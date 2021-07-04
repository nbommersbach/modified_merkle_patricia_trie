#include <iostream>
#include <vector>
#include "Node.h"


int main()
{
    Node *n = new Node("Sebastian");
    Branch_Node *bn = new Branch_Node("Chef");
    Leaf_Node *lf = new Leaf_Node("leaf");
    Extension_Node *en = new Extension_Node("exti");

    n->append_node(bn);
    n->append_node(lf);
    n->append_node(en);

    
    

    return 0;
}