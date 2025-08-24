#include<iostream>
using namespace std;
int main()
{
  int x;
  std::cout<<"Enter a number:";
  std::cin>>x;
  if(x>0)
  std::cout<<x<<"is a positive number.";
  else if(x<0)
  std::cout<<x<<"is a negative number.";
  else
  std::cout<<x<<"is zero";
  return 0;
  }
  
