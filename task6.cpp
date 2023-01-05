#include<iostream>
using namespace std;

void checkg(int f,int l);
string check(int a);
main()
{
   int num,f,l;
   cout<<"Enter a number: ";
   cin>>num;
   l = num%10;
   f = num/10;
   if(num<11)
   {
   string n = check(num); 
   cout<<n;
   }
   if(num>19)
   {
    checkg(f,l);
   }
 
}

string check(int a)
{
 if(a==1)
  {
   return "One";
  }
 if(a==2)
  {
   return "Two";
  }
 if(a==3)
  {
   return "Three";
  }
 if(a==4)
  {
   return "Four";
  }
 if(a==5)
  {
   return "Five";
  }
 if(a==6)
  {
   return "Six";
  }
 if(a==7)
  {
   return "Seven";
  }
 if(a==8)
  {
   return "Eight";
  }
 if(a==9)
  {
   return "Nine";
  }
 if(a==10)
  {
   return "Ten";
  }
}
void checkg(int f,int l)
{
  if(f==2)
  {
   cout<<"Twenty";
  }
  if(f==3)
  {
   cout<<"Thirty";
  }
  if(f==4)
  {
   cout<<"Forty";
  }
  if(f==5)
  {
   cout<<"Fifty";
  }
  if(f==6)
  {
   cout<<"Sixty";
  }
  if(f==7)
  {
   cout<<"Seventy";
  }
  if(f==8)
  {
   cout<<"Eighty";
  }
  if(f==9)
  {
   cout<<"Ninety";
  }
if(l==1)
  {
   cout<<" One";
  }

if(l==2)
  {
   cout<<" Two";
  }

if(l==3)
  {
   cout<<" Three";
  }
if(l==4)
  {
   cout<<" Four";
  }
if(l==5)
  {
   cout<<" Five";
  }
if(l==6)
  {
   cout<<" Six";
  }
if(l==7)
  {
   cout<<" Seven";
  }
if(l==8)
  {
   cout<<" Eight";
  }
if(l==9)
  {
   cout<<" Nine";
  }
     
}
