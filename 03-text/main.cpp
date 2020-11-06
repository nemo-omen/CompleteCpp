#include<iostream>
#include<string>

using namespace std;

int main(){
  char singleChar = 'a'; //can only hold single character inside single quotation marks => called  'character literal'
  string myName = "Jeff"; //strings in double quotes

  cout << singleChar << endl;
  cout << "Hello, " << myName << "!" << endl; //concatenation is achieved with the 'string insertion operator <<


  return 0;
}