#include<iostream.h>
#include<fstream.h>
#include<conio.h>
int main()
{
 clrscr();
 char text[200]="Desire to Learn should be Stronger than desire to live";
 fstream file;
 file.open("OUT.txt",ios::out/ios::in);
 file<<text;
 file>>text;
 cout<<text;
 file.close();
 getch();
 return 0;
}