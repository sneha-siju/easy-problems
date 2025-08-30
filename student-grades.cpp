//determine student grades based on marks
#include<iostream>
using namespace std;
int main()
{
  int mark;
  cout<<"Enter the  mark of the student ";
  cin>>mark;
  if(mark>=90)
  cout<<"Grade A+ ";
  else if(mark>=80 and mark<90)
  cout<<"Grade A ";
  else if(mark>=70 and mark<80)
  cout<<"Grade B ";
  else if(mark>=50 and mark<70)
  cout<<"Grade C ";
  else if(mark>=38 and mark<50)
  cout<<" Grade D";
  else
  cout<<"Fail";
  return 0;
  }
