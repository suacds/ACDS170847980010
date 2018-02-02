
#include<iostream>
#include<conio.h>
using namespace std;
void read_mat(int a[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<"\n Enter elements ::\n";
			cin>>a[i][j];
		}
	}
}
void display(int a[10][10],int r,int c)
{
	int i,j;
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			cout<<a[i][j];
		}
		cout<<"\n";
	}

}
int main()
{
	clrscr();
	int a[10][10],r,c,ch;
	cout<<"\n Enter number of rows \n";
	cin>>r;
	cout<<"\n Enter number of columns \n";
	cin>>c;
	do
	{
		cout<<"\n 1.readmatrix\n 2.display\n 3.exit";
		cout<<"\n Enter your choice \n";
		cin>>ch;
		switch(ch)
		{
			case 1: read_mat(a,r,c);
			break;
			case 2:   display(a,r,c);
			break;

		}


	}while(ch<2);

       //	read_mat()


	getch();
	return 0;
}