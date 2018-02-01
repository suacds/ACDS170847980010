#include<iostream.h>
#include<conio.h>
int addition(int a,int b)
{
   return(a+b);

}
    int subtraction(int a,int b)
{
   return(a-b);

}
int multiplication(int a,int b)
{
   return(a*b);

}
int division(int a,int b)
{
   return(a/b);

}

int main()
{
  clrscr();
  cout<<"*********This is program for simple mathematical operations*************";
  int a,b;
  cout<<"\nEnter two values:" ;
  cin>>a>>b;
  cout<<"\nAdditiion is:"<<addition(a,b);
  cout<<"\nSubraction is:"<<subtraction(a,b);
  cout<<"\nMultiplication is:"<<multiplication(a,b);
  cout<<"\nDivision is:"<<division(a,b);
getch();
return 0;
}
