
#include "b_node.h"

b_node::b_node(std::string n, std::vector<double> p_vals, std::vector<b_node*> parent, std::vector<b_node*> child){
    name = n;
    p_values = p_vals;
    truth_value = false;
    parents = parent;
    children = child;
}
    
void b_node::setTruth(bool v){
    truth_value = v;
};

bool b_node::getTruth(){
    return truth_value;
};

std::vector<double> b_node::get_p_values(){
    return p_values;
};

std::vector<b_node*> b_node::getParents(){
    return parents;
};

std::vector<b_node*> b_node::getChildren(){
    return children;
};

