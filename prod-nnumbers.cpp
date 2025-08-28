#include<iostream>
using namespace std;
int main()
{
  int i,n,prod=1;
  cout<<"Enter a number:";
  cin>>n;
   cout<<"The product of first "<<n<<"  natural numbers: ";
  for ( i=1;i<n+1;i++)
  prod=prod*i;
  cout<< prod <<"\n";
  return 0;
  }
