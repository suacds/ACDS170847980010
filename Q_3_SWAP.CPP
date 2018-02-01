#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 int *a,*b,*temp;
 cout<<"*****This is the program for swapping*****\n";
 cout<<"\nEnter the values for a and b:\n";
 cin>>*a>>*b;
 cout<<"\nValues before Swapping\n"<<"a="<<*a<<"\tb="<<*b;
 temp=a;
 a=b;
 b=temp;
 cout<<"\nValues after Swapping\n"<<"a="<<*a<<"\tb="<<*b;
 getch();
 return 0;
}