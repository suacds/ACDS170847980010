 #include<iostream>
using namespace std;


 void read_array(int *,int );
 void print_array(int *,int );
 int sum_of_array(int *,int);
 int largest(int *,int);
 int smallest(int *,int);


int main( )
    {
    

       int array_size=5;

       int array[array_size];
       cout<<"\n*****This is the program for finding minimum and maximum values in array******\n";
       cout<<"\n Enter the elements of the array : \n"<<endl;
       read_array(array,array_size);
       cout<<" The contents of the array are :\n"<<endl;
       print_array(array,array_size);
       cout<<"\nThe maximum element of the array is = "<<largest(array,array_size)<<endl;
       cout<<"\nThe minimum element of the array is = "<<smallest(array,array_size)<<endl;
   
       return 0;
    }

    void read_array(int *array,int array_size)
    {
       for(int count=0;count<array_size;count++)
      {
         cin>>*array;
         array++;
      }
    }

    void print_array(int *array,int array_size)
    {   
       for(int count=0;count<array_size;count++)
      {
         cout<<"\t"<<*array;
         array++;
      }
    }


   int largest(int *array,int array_size)
    {
       int max=*array;

       for(int count=0;count<array_size;count++)
      {
         if(*array>max)
        max=*array;

         array++;
      }

       return max;
    }

   int smallest(int *array,int array_size)
    {
       int min=*array;

       for(int count=0;count<array_size;count++)
      {
         if(*array<min)
        min=*array;

         array++;
      }

       return min;
    }
