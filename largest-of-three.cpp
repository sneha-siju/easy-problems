#include<iostream>
using namespace std;
int main()
{
  int x,y,z;
  cout<<"Enter 3 numbers: ";
  cin>>x>>y>>z;
  
  if(x>y && x>z)
  cout<<x<<" is the largest amongst three. ";
  else if(y>x && y>z)
  cout<<y<<" is the largest amongst three. ";
  else
  cout<<z<<" is the largest amongst three. ";
  return 0;
  }
  
