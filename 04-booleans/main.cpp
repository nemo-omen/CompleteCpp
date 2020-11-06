#include<iostream>


using namespace std;

int main()
{
  bool isRaining = false;
  bool isSunny = true;
  bool isWarm = true;

  cout << isRaining << endl; // false? no! false = 0 & true = 1
  cout << boolalpha << isRaining << endl; // to get true or false we need to use 'boolalpha'
  cout << boolalpha << isSunny << endl;
  cout << isWarm << endl;
  return 0;
}