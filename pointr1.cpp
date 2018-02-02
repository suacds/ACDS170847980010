#include<iostream>



using namespace std;


   int main()
 
   {
    
cout<<"\n***********This is the program for printing the array in reverse order using pointers**********\n";
     
    int a[100],i,n;

     int *p=a;

     cout<<"\nEnter the size of array:";

     cin>>n;

     cout<<"\nEnter the elements of array:";

	for(i=0;i<n;i++)

	{

	cin>>*(p+i);

	}

        cout<<"\nYour entered Array:\n";


	for(i=0;i<n;i++)

	{

	cout<<"\t"<<*(p+i);

	}


     cout<<"\nYour reversed array is:\n";

     
        for(i=n-1;i>=0;i--)
 
       cout<<"\t"<<*(p+i);

    
   
     return 0;

   
 
    }
