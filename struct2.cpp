

#include<iostream>

using namespace std;
struct Fract
     {
        int num;
        int deno;
     
      };
 
Fract sum(Fract,Fract);
 
   int main()
    {
     
     int num1,deno1,num2,deno2;
cout<<"\n********This is the program for finding addition of fractions using structure*******\n";
     cout<<"\nEnter fraction 1:\n numerator:";
     cin>>num1;
     cout<<"\nEnter fraction 1:\n denominator:";
     cin>>deno1;     
	
     cout<<"\nEnter fraction 2:\n numerator:";
     cin>>num2;
     cout<<"\nEnter fraction 2:\n denominator:";
	cin>>deno2; 
    
     Fract f1={num1, deno1};
     Fract f2 ={num2, deno2};
     Fract result = sum(f1, f2);
     cout<<"\nRESULT="<<result.num<<"/"<<result.deno<<"\n";  
 
 
    
     return 0;
 
    }
 
   Fract sum(Fract f1, Fract f2)
    {
     Fract result={(f1.num * f2.deno) + (f2.num * f1.deno), f1.deno * f2.deno};
     return result;
 
   }
