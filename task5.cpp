#include<iostream>
using namespace std;


main()
{
  int hr,min,hrs,mins,a,m;
  cout<<"Enter hours in 24-hour format: ";
  cin>>hr;
  cout<<"Enter minutes: ";
  cin>>min;
  a = (hr * 60)+min;
  m = a + 15;
  mins = m % 60;
  hrs = m / 60;
  cout<<hrs<<":"<<mins;
}