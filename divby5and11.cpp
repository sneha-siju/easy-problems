#include<iostream>
using namespace std;
int main()
{
  int x;
  cout<<"Enter a number: ";
  cin>>x;
  if(x%5==0 && x%11==0)
  cout<<x<<" is divisible by both 5 and 11.";
  else
  cout<<x<<" is not divisible by both 5 and 11.";
  return 0;
  }
