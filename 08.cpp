//Write a program to demonstrate dangling pointers in C.
#include<iostream>
using namespace std;
int main()
{
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 43;
    free(ptr);
    cout<<*ptr<<"\n";             
    /* Dangling pointer -> 'ptr' is still holding pointer/ address of a memory block 
    which is already freed. In order to resolve this kind of situatons, we can assign NULL to the pointer*/
    return 0;
}