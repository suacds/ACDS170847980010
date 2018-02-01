#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[10],i;
    cout<<"****************This is the program for question 1******************";
    cout<<"\n\nEnter 10 elements for array";
    for(i=0;i<10;i++)
    {
        cin>>a[i];
        
    }
    cout<<"\nYour Array is:";
    for(i=0;i<10;i++)
    {
        cout<<"\t"<<a[i];
        
    }
    
    /*code for finding smallest number*/
    int temp1=a[0];
    for (i=0;i<10;i++)
    {
     if(temp1>a[i])
     temp1=a[i];
    }
     cout<<"\nSmallest Number="<<temp1;
     
    /*code for finding Largest number*/
    
    int temp2=a[0];
    for (i=0;i<10;i++)
    {
        if(temp2<a[i])
        temp2=a[i];
    }
     cout<<"\nLargest number="<<temp2;
    
    getch();
    return 0;
}





