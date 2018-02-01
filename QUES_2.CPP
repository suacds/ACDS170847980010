#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	cout<<"\nProgram for flow control statements";
	int ch;
	do
	{
	cout<<"\n 1.if-else program\n 2.for loop program\n 3.while program\n 4.switch program\n 5.exit";
	cout<<"\nEnter your choice";
	cin>>ch;
	switch(ch)
	{
	 case 1:
		  cout<<".....Executing example of if-else statement..... ";
		  int per;
		  cout<<"\nEnter the percentage:";
		  cin>>per;
		  if(per>40)
		  {cout<<"\nPASS";}
		  else
		  {cout<<"\nFail";}
		  break;
	 case 2:
		  cout<<".....Executing example of while loop.....";
		  int num=10;
		  cout<<"This will print the sequence";
		  while(num<20)
		  {
		  cout<<"\t"<<num;
		  num++;
		  }
		  break;
	 case 3:
		cout<<".....Executing example of for loop.....";
		 int a,o;
		 cout<<"\nEnter any number:";
		 cin>>a;
		 cout<<"\nThis program will print the sequence upto the entered number";
		 for(o=0;o<=a;o++)
		 {
		  cout<<a<<"\t";
		 }
		 break;
	 case 4:
		 cout<<".....Executing program for switch case.....";
		 char sw;
		 cout<<"\na.one\nb.Two\nc.exit";
		 cout<<"\n Enter your choice:";
		 cin>>sw;
		 switch(sw)
		 {
		 case 'a':
			  cout<<"\nYou Entered character a ";
			  break;
		 case 'b':
			cout<<"\nYou Entered character b";
			break;
		 default:
			    cout<<"\nunknown choice";
			    break;
		 }

		 }
}while(ch<5);
	 getch();
	 return 0;
}