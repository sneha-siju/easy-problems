#include<iostream>
#include<ctype.h> //library containing is alpha()
using namespace std;
int main()
{
  char ch;
  cout<<"Enter a character: ";
  cin>>ch;
  if(isalpha(ch))  //fn to check if char is alphabet 
  cout<<"The given character is an alphabet";
  else
  cout<<"Given character is not an alphabet";
  return 0;
  }
  
