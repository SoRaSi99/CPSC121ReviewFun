#include "vecfuncs.h" //"" a file you wrote in your project

int main() {
  int min, max;
  vector<int> userNums;

  fillVector(userNums);
  cout << "size: " << userNums.size() << endl;

//task 1 define and call function to find and return smallest and largest numbers in the vector
  findExtremes(userNums, min, max);

//task 2 convert to 3 file format
  cout << "min: " << min << " max: " << max << endl;
}
