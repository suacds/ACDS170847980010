#include<iostream.h>
# include<conio.h>
#include<math.h>

float x,y;

struct complex
{
float r,im;
}a,b;

int main()
{
	clrscr();
	cout<<"*****Program for executing Arithmetic operation on complex numbers*****\n";
	cout<<"\nEnter the real and imaginary parts of first number";
	cin>>a.r>>a.im;
	cout<<"\nEnter the real and imaginary parts of second number";
	cin>>b.r>>b.im;
	cout<<"\nFirst number=("<<a.r<<")+("<<a.im<<")i\n";
	cout<<"\nSecond number=("<<b.r<<")+("<<b.im<<")i\n";
	cout<<"\n******Perform Arithmetic Operation******\n";
	int ch;
	do{

	cout<<"\n\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.exit";
	cout<<"\nEnter your Choice:\n";
	cin>>ch;
	switch(ch)
	{
		case 1:
			x=a.r+b.r;
			y=a.im+b.im;
		       cout<<"\nAddition is= ("<<x<<")+("<<y<<")i";
			break;
		case 2:
			x=a.r-b.r;
			y=a.im-b.im;
			cout<<"\nSubtraction is= ("<<x<<")+("<<y<<")i";
			break;
		case 3:
			x=((a.r)*(b.r))-((a.im)*(b.im));
			y=((a.r)*(b.im))+((b.r)*(a.im));
			cout<<"\nMultiplication is= ("<<x<<")+("<<y<<")i";
			break;
		case 4:
			x=(((a.r)*(b.r))+((a.im)*(b.im)))/(pow(b.r,2))+(pow(b.im,2));
			y=(((b.r)*(a.im))-((a.r)*(b.im)))/(pow(b.r,2))+(pow(b.im,2));
			cout<<"\nDivision is= ("<<x<<")+("<<y<<")i";
			break;
	}
	}while(ch<5);
	getch();
	return 0;
}