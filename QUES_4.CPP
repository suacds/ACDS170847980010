#include<iostream.h>
#include<conio.h>
int main()
{
 clrscr();
 float a,rate,gst,b;

 cout<<"************This is the program for displaying GST*************";

 cout<<"\n\nEnter the good's amount in which GST is included ";
 cin>>a;

 cout<<"\nEnter the Rate\n";
 cin>>rate;

 cout<<".......Calculation of GST........";
 gst=(a*rate)/100;
 cout<<"\nGOODS AND SERVICE TAX ="<<gst;

 getch();
 return 0;
 }

