
#include "BayesNetwork.h"

using namespace std;

void BayesNetwork::add_node(b_node* node){
    vector<b_node*> nodes;
    nodes.push_back(node);
    for(auto n : node->getChildren()) nodes.push_back(n);
    adjList.push_back(nodes); 
};
