/*Write a program to read a one dimensional array, print sum of all elements along with
inputted array elements using dynamic memory allocation.*/
#include<iostream>
using namespace std;
int main()
{
    int i, size=5, sum=0, *ptr = (int*)calloc(size,sizeof(int));
    cout<<"Enter "<<size<<" Array Elements : ";
    for(i=0; i<size; i++)
    {
        cin>>ptr[i];
        sum += *(ptr + i);
    }
    cout<<"The sum of elememnts ";
    for(i=0; i<size; i++)
    {
        cout<<*(ptr + i)<<", ";
    }
    cout<<"is "<<sum<<"\n";
    free(ptr);
    return 0;
}