#include "vecfuncs.h"
//never include .cpp because we compile it

void fillVector(vector<int>& vec) {
  int i;
  int num;

  for (i = 0; i < 5; i++){
    cout << "Enter an int: ";
    cin >> num;
    vec.push_back(num); //push number to end of vector
  }
}

void findExtremes(vector<int>& vec, int& min, int& max){
  //assumes there is atleast 1 value in the vector
  min = max = vec[0];
  for(int i = 0; i < vec.size(); i++){
    if (vec[i] < min){
      //new min
      min = vec[i];
    }
    if (vec[i] > max){
      //new max
      max = vec[i];
    }
  }
}