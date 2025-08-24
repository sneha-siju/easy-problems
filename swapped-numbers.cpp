#include<iostream>
using namespace std;
int main()
{
  int x,y,temp;
  std::cout<<"Enter 1st number";
  std::cin>>x;
  std::cout<<"Enter 2nd number";
  std::cin>>y;
  temp=x;                                       //swapping the digits by introducing a temporary variable
  x=y;
  y=temp;
  std::cout<<"The current 1st number is "<<x;
  std::cout<<"\n";
  std::cout<<"The current 2nd number is "<<y;
  return 0;
  }
  
