#include <iostream>
#include <vector>
#include "Node.h"


int main()
{
    Node *n = new Node("Sebastian");
    Branch_Node *bn = new Branch_Node("Chef", std::vector<uint32_t>{0x44, 0xf5});
    Leaf_Node *lf = new Leaf_Node("leaf", 0xa2);
    Extension_Node *en = new Extension_Node("exti", 0x75fa);

    n->append_node(bn);
    n->append_node(lf);
    n->append_node(en);

    delete n;
    delete bn;
    delete lf;
    delete en;
    

    return 0;
}