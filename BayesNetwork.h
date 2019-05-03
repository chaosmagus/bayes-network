

#ifndef BAYES_NETWORK_H
#define BAYES_NETWORK_H

#include <iostream>
#include <string>
#include <string.h>
#include <vector>
#include "b_node.h"

class BayesNetwork {
public:
    BayesNetwork(){}
    
    void add_node(b_node* node);
    
private:
    std::vector<std::vector<b_node*>> adjList;

};




#endif 
