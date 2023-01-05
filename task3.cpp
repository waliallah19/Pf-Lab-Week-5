#include <iostream>
using namespace std;

bool istrue(int);
main()
{
  int num;
  bool b;
  cout<<"Enter a three digit number: ";
  cin>>num;
  b = istrue(num);
 if( b == true)
  {
   cout<<num<<" is symmetrical.";
  }
 if( b == false)
  {
   cout<<num<<" is not symmetrical.";
  }
}
bool istrue(int n)
{
 int f,l;
 f=n/100;
 l=n%10;
 if( f == l)
  {
   return true;
  }
 if( f != l)
  {
   return false;
  }
}
