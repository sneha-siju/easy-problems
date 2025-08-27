#include<iostream>
using namespace std;
int main()
{
  int i,n,sum=0;;
  cout<<"Enter a number:";
  cin>>n;
   cout<<"The sum of first "<<n<<"  natural numbers: ";
  for ( i=1;i<n+1;i++)
  sum=sum+i;
  cout<< sum <<"\n";
  return 0;
  }
