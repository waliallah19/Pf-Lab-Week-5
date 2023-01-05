#include <iostream>
using namespace std;
int testing(int);
main()
{
 int num,test;
 cout<<"Enter a five digit number: ";
 cin>>num;
 test = testing(num);
 if(test%2 == 0)
 {
  cout<<num<<" is evenish.";
 }
 if(test%2!=0) 
{
 cout<<num<<" is oddish.";
}
}
int testing(int a)
{
 int add,num;
add = a % 10 + (a / 100) % 10 +(a / 1000) % 10 + (a / 10000) %  10;
return add;
}