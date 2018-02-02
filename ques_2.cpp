#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;


int main()
{   
    cout<<"*************Program for string***************";
    char a[10],b[10];
    int i,j,temp,ch;
    
    
    do
    {
      cout<<"\n1.length of string\n2.reverse the string\n3.Compare two string\n4.Concatenate two string\n5.Convert string into lower case\n6.Convert string in upper case\n7.exit";
    cout<<"\nEnter your choice";
    cin>>ch;
      switch(ch)
      {
        case 1:
            cout<<"****************code for length of the string*************";
            char str1[10];
            cout << "\nEnter a string: ";
            cin >> str1;
            cout << "\nYou entered: " << str1;
            cout<<"\nLength of string:"<<strlen(str1);
            break;
      
        case 2:
            cout<<"\n**************code for reversing the string*************";
            char str2[10];
            cout << "\nEnter a string: ";
            cin >> str2;
            cout << "\nYou entered: " << str2;
	        i=0;
	        j=strlen(str2)-1;
        	while(i<j)
        	{
	        	temp=str2[i];
	        	str2[i]=str2[j];
		        str2[j]=temp;
		        i++;
		        j--;
	         }
	         cout<<"Reverse of the String = "<<str2;
	         break;
	         
	   case 3:
	         cout<<"\n********code for comparing two string*************";
	         char str3[10],str4[10];
            cout << "\nEnter first string: ";
            cin >> str3;
            cout << "\nYou entered: " << str3;
            cout << "\nEnter second string: ";
            cin >> str4;
            cout << "\nYou entered: " << str4;
         	if(strcmp(str3, str4)==0)
         	{
		      cout<<"Both the strings are equal";
            }
	        else
	       {
	     	cout<<"Both the strings are not equal";
	        }
	         break;
	         
	  case 4:
	         cout<<"\n*****************code for concatenation*******************";
	         char s1[50], s2[50];
	         cout<<"\nEnter first string : ";
	         cin>>s1;
             cout<<"\nEnter second string : ";
	         cin>>s2;
	         strcat(s1, s2);
	         cout<<"\nString after concatenation is "<<s1;
	         break;
	   case 5:
	         cout<<"**********code for converting string to lower case*************";
	         char us[20];
             int i;
              cout<<"\nEnter the String in uppercase : ";
             cin>>us;
             for(i=0;i<=strlen(us);i++)
              {
	            if(us[i]>=65 && us[i]<=92)
	             {
		         us[i]=us[i]+32;
	             }
              }
              cout<<"\nThe String in Lowercase = "<<us;
              break;
        case 6:
              cout<<"\n************code for converting into upper case**************";
              char str[20];
              int o;
                cout<<"Enter the String  : ";
                cin>>str;
                  for(o=0;o<=strlen(str);o++)
                   {
	                 if(str[o]>=97 && str[o]<=122)
	                 {
	                	str[o]=str[o]-32;
	                 }
                   }
                     cout<<"\nThe String in Uppercase = "<<str;
                     break;
      }
    }while(ch<7);

    
    
   return 0;
}

