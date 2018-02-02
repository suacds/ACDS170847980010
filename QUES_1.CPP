
#include<iostream.h>
#include<conio.h>
int main()
{ clrscr();
  int i,a,b,c,d;
  cout<<"Enter any value";
  cin>>i;
  a=i;
      cout<<"\nPre-incremented value="<<++a;
  b=i;
      cout<<"\nPost-incremented value="<<b++;
  c=i;
      cout<<"\nPre-decremented value="<<--c;
  d=i;
      cout<<"\nPost-decremented value="<<d--;
  getch();
  return 0;
  }

