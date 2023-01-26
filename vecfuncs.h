//header file guard code prevents the problem of
//double inclusion of a header file
//see video in 121 playlist for more info

#ifndef VECFUNCS_H //if not defined
#define VECFUNCS_H

#include <iostream>
#include <vector>

using namespace std;

//prototypes
void fillVector(vector<int>&); //& is pass by reference
void findExtremes(vector<int>&, int&, int&);

#endif //add if you add the header guard code