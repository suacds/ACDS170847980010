#include<iostream>
#include<conio.h>
using namespace std;

class staff
{
    private:
        char name[50];
        int code;
    public:
        void getdata();
        void display();
};

class typist: public staff
{
    private:
        int speed;
    public:
        void getdata();
        void display();
};

void staff::getdata()
{
    cout<<"\nName:";
    cin>>name;
    cout<<"\nCode:";
    cin>>code;
}

void staff::display()
{
    cout<<"\nName:"<<name;
    cout<<"\nCode:"<<code;
}

void typist::getdata()
{
    cout<<"\nSpeed:";
    cin>>speed;
}

void typist::display()
{
    cout<<"\nSpeed:"<<speed;
}

int main()
{
    typist t;
    cout<<"\n******This is the program for simply getting details of typist using single inheritance*****";
    cout<<"\nEnter data";
    t.staff::getdata();
    t.getdata();
    cout<<endl<<"\nDisplay data";
    t.staff::display();
    t.display();
    getch();
    return 0;
}



