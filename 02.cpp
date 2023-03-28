/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include<iostream>
using namespace std;
float Average (int *arr, int size)
{
    int i, sum=0;
    for(i=0; i<size ; i++)
    {
        sum += arr[i];
    }
    return(sum/size);
}

int main()
{
    cout<<"How many data values would you like to enter : ";
    int size;
    cin>>size;
    int *ptr = (int*)calloc(size,sizeof(int));
    if(ptr == NULL)
        {
            cout<<"Memory Allocation Faild!!";
            return 0;
        }
    cout<<"Enter data values : ";
    for(int i=0; i<size ; i++)
    {
        cin>>ptr[i];
    }
    cout<<Average(ptr,size)<<" is the average of entered data values. \n";
    free(ptr);
    return 0;
}