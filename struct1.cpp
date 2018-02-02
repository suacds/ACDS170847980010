    #include<iostream>

using namespace std;

    struct School

    {

    int roll;

    char name[25];

    char address[25];

    float weight;

    } stu;

    int main ()

    {
cout<<"\n *******This is the program for structure********\n";
    cout<<"\n enter the roll no:";

    cin>>stu.roll;

    cout<<"\n enter name:";

    cin>>stu.name;

    cout<<"\n enter address:";

    cin>>stu.address;

    cout<<"\n enter weight:";

    cin>>stu.weight;

    cout<<"\n the student details are:";

    cout<<"\n Name :"<< stu.name;

    cout<<"\n Roll no:"<<stu.roll;

    cout<<"\n address:"<<stu.address;

    cout<<"\n weight:"<<stu.weight;

return 0;

    }

