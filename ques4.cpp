#include<iostream>
#include<conio.h>
using namespace std;
struct student
{
   int roll;
   char name[50];
   float sm1,sm2,sm3;
};

typedef student s;

int main()
{
  s stu[10];
  clrscr();
  for(int i=0;i<10;i++)
    {
      cout<<"\n\t Enter Roll Number:";
      cin>>stu[i].roll;
      cout<<"\n\t Enter name:";
      cin>>stu[i].name;
      cout<<"\t Enter marks of three subjects:";
      cin>>stu[i].sm1>>stu[i].sm2>>stu[i].sm3;
     }
    cout<<"\n\t Students failed in more than 1 subject:";
    for(int i=0;i<10;i++)
    {
     if((stu[i].sm1<40 && stu[i].sm2<40) || (stu[i].sm2<40 && stu[i].sm3<40) ||(stu[i].sm1<40 && stu[i].sm3<40))
     cout<<stu[i].roll<<"\t" <<stu[i].name<<"\n";
     }
  getch();
return 0;
    
}



