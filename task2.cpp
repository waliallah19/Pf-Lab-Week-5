#include<iostream>
using namespace std;

string test(char);
main()
{
  char c;
  cout<<"Enter a or A: ";
  cin>>c;
  string b = test(c);
  cout<<b;
}
string test(char ch)
{
 if(ch=='A'){
  return "Entered letter is capital.";
  }
 if(ch=='a'){
  return "Entered letter is small.";
  }
  
}