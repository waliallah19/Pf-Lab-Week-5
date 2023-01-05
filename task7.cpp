#include<iostream>
using namespace std;
 
float fpipe(float , float);
float lpipe(float , float);
float overflow(float , float);
float volume(int , float);
main()
{
  int v,p1,p2;
  float over,h,r,full,pipe,pipe1,pipe2,fp,lp,l;
  cout<<"Enter the volume of pool in liters:  ";
  cin>>v;
  cout<<"Enter the flow rate of first pipe per hour:  ";
  cin>>p1;
  cout<<"Enter the flow rate of second pipe per hour:  ";
  cin>>p2;
  cout<<"Enter the number of hours that the worker is absent:  ";
  cin>>h;
  r = p1 + p2;
  fp = (p1 * h);
  lp = (p2 * h);
  pipe = fp + lp;
  full = volume(v,pipe);
  pipe1 = fpipe(fp,pipe); 
  pipe2 = lpipe(lp,pipe);
  if(pipe<v)
  {
   cout<<"The pool is "<<full<<" % full. Pipe 1: "<<pipe1<<" %  pipe 2: "<<pipe2<<" %.";
  }
  if(pipe>v)
  {
   l = pipe - v;
   over = overflow(l , r );
   cout<<"For "<<over<<" hours the pool overflows with "<<l<<" liters.";
  }
}

float volume(int v,float pipe)
{
  float p;
  p = (pipe/v)*100;
  return p;
}

float fpipe(float fp , float pipe)
{
  float p;
  p = (fp/pipe)*100;
  return p;
}
float lpipe(float  lp , float pipe)
{
  float p;
  p = (lp/pipe)*100;
  return p;
}
float overflow(float l , float r)
{
  float p;
  p = l/r;
  return p;
}