#include<iostream>
using namespace std;
int main()
{
  int p,r,t,SI;
  std::cout<<"Enter principle:";
  std::cin>>p;
  std::cout<<"Enter rate:";
  std::cin>>r;
  std::cout<<"Enter time:";
  std::cin>>t;
  SI=(p*r*t)/100;                // eqn to find SI
  std::cout<<"The calculated SI is"<<SI;
  return 0;
  }
