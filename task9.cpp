#include <iostream> 
#include<cmath>
using namespace std;

float xvalue(float a, float b, float c);
float xnvalue(float a, float b, float c);
main()
{
  float a,b,c,x,xn;
  cout<<"Enter coefficient in x^2 of ax^2 + bx + c: ";
  cin>>a;
  cout<<"Enter coefficient of x in ax^2 + bx + c: ";
  cin>>b;
  cout<<"Enter constant in ax^2 + bx + c: ";
  cin>>c;
  x = xvalue(a,b,c);
  xn = xnvalue(a,b,c);
  cout<<endl<<"x = "<<x;
  cout<<" or x = "<<xnvalue<<endl;
}
 float xvalue(float a, float b, float c)
{
  float x,d,p;
  d=(b*b)-4*(a*c);
  p=sqrt(d);
  x=(-b+p)/(2*a);
  return x;
}
 float xnvalue(float a, float b, float c)
{
  float xn,d,p;
  d=(b*b)-4*(a*c);
  p=sqrt(d);
  xn=(-b-p)/(2*a);
  return xn;
}
