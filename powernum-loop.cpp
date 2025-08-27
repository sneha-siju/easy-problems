//power of number using loop
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
  int x,y,power=1;
  cout<<"Enter a number: ";
  cin>>x;
  cout<<"Enter exponent: ";
  cin>>y;
  if(y>=0){
    for(int i=0;i<y;++i){
      power*=x;
      }
     }
    else{
      for(int i=0;i<-y;++i){
        power*=x;
        }
        power=1/power;
        }
  cout<<x<<" raised to "<<y<<" is "<<power;
  return 0;
  }
  
  
