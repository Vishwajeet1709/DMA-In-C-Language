/*Write a program to calculate the sum of n numbers entered by the user using malloc
and free.*/
#include<iostream>
using namespace std;
int main()
{
    int i=0,size = 5,sum=0, *ptr = (int*)malloc(size*sizeof(int));
    cout<<"Enter "<<size <<" numbers to find sum : ";
    for(i=0; i<size ; i++)
    {
        cin>>ptr[i];
        sum += ptr[i];
    }
    cout<<"The sum of all entered numbers = "<<sum <<"\n";
    free(ptr);
    return 0;
}