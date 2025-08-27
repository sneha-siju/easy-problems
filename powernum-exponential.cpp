//power of number using exponential
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  float x,y,power;
  cout<<"Enter a number: ";
  cin>>x;
  cout<<"Enter the number to which "<<x<<" is raised to:";
  cin>>y;
  power=pow(x,y);
  cout<<"power of "<<x<<" raised to "<<y<<" is "<<power;
  return 0;
  }
