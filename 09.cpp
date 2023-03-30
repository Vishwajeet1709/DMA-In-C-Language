/*Write a program to allocate memory dynamically of the size in bytes entered by the
user. Also handle the case when memory allocation is failed.*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size(in byts) to create a memory block : ";
    cin>> size;
    int *ptr = (int*)malloc(size);
    if(ptr ==NULL)
    {
        cout<<"Memory Allocation Faild!!!\n";
        return 0;
    }
    cout<<size<<" byte(s) of memory block has been created successfully.\n";
    free(ptr);
    return 0;
}