#include<iostream.h>
#include<conio.h>
class person
{
	char nm[50],g[7];
	int age;
	public:
	    void getdata()
	    {
	    cout<<"\nEnter Name:";
	    cin>>nm;
	    cout<<"\nEnter Age:";
	    cin>>age;
	    cout<<"\nEnter Gender:";
	    cin>>g;
	    }
	    void display()
	    {
	    cout<<"\n\nName:"<<nm;
	    cout<<"\nAge:"<<age;
	    cout<<"\nGender:"<<g;
	    }
};

class employee:public person
{
  char comp[100];
  float sal;
  public:
	void getdata()
	{
	person::getdata();
	cout<<"\nEnter company name:";
	cin>>comp;
	cout<<"\nEnter salary:";
	cin>>sal;
	}
	void display()
	{
	person::display();
	cout<<"\ncompany name:"<<comp;
	cout<<"\nSalary:"<<sal;
	}

};

class prog:public employee
{
  int num;
  public:
	void getdata()
	{
	employee::getdata();
	cout<<"\nEnetr number of programming languages known";
	cin>>num;
	}
	void display()
	{
	employee::display();
	cout<<"\nNumber of programming languages known :"<<num;
	}
};

int main()
{
prog p;
cout<<"\n******This is the program for entering details about programmer*****";
cout<<"\n\nEnter details of the programmer";
p.getdata();
cout<<"\n**********Displaying Details of programmer*********";
p.display();
getch();
return 0;
}