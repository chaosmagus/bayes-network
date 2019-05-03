

#ifndef BNODE_H
#define BNODE_H

#include <iostream>
#include <string>
#include <string.h>
#include <vector>

class b_node {
public:
    //constructors
    b_node();
    b_node(std::string n, std::vector<double> p_vals, std::vector<b_node*> parent, std::vector<b_node*> child);
    
    //member functions
    void setTruth(bool v);
    std::vector<double> get_p_values();
    std::vector<b_node*> getChildren();
    std::vector<b_node*> getParents();
    bool getTruth(); 

private:
    //member variables
    std::string name;
    bool truth_value;
    std::vector<b_node*> children;
    std::vector<b_node*> parents;
    std::vector<double> p_values;
};




#endif 

