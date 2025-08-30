#include<iostream>
#include<ctype.h> //library containing is digit()
using namespace std;
int main()
{
  char ch;
  cout<<"Enter a character: ";
  cin>>ch;
  if(isdigit(ch))  //fn to check if char is alphabet 
  cout<<"The given character is a digit.";
  else
  cout<<"Given character is not an digit.";
  return 0;
  }
