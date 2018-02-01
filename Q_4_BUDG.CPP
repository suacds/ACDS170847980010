#include<iostream.h>
#include<conio.h>

class budget
{
  public:
	float income,tax;

  public:
	void show(float in,float ta);
	void display();
	void calculate();
};

	void budget::show(float in,float ta)
	{
  		income=in;
  		tax=ta;
	}

	void budget::display()
	{
		cout<<"\nIncome= "<<income;
		cout<<"\nTax Rate="<<tax;

	}


	void budget::calculate()
	{
		float ans;

		ans=(income*12*tax)/100;

		cout<<"\nIncome tax to be paid="<<ans;

	}
int main()
{
	clrscr();
	budget b;
	float in,ta;
	cout<<"\n*****Program for finding income tax*****\n";
	cout<<"\nEnter income and tax Rate:";
	cin>>in>>ta;
	b.show(in,ta);
	b.display();
	b.calculate();

	getch();
	return 0;


}


