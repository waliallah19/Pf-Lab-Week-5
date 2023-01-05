#include <iostream>
#include<cmath>
using namespace std;
 
float h(float a,float b);
main()
{
  float base,angle;
  float height,ang;
  cout<<"Enter base length: ";
  cin>>base;
  cout<<"Enter angle in degree: ";
  cin>>angle;
  ang= angle*(3.14/180);
  height = h(ang,base); 
  cout<<"The height is "<<height;
}
float h(float a, float b)
{
  float h;
  h = tan(a)*b;
  return h;
}