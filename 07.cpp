//Write a program to demonstrate memory leak in C.
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size(in number) to create a memory block : ";
    cin>> size;
    int *ptr = (int*)malloc(size);
    return 0;                      //Since we did not free the memory, it an example of memory leak
}