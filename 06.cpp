//Write a program in C to find the largest element using Dynamic Memory Allocation.
#include<iostream>
using namespace std;

int main()
{
    int i,size = 5, LargestElement=0, *ptr = (int*)calloc(size,sizeof(int));
    cout<<"Enter "<<size<<" Elements : ";
    for(i=0; i<size; i++)
    {
        cin>>ptr[i];
        if(ptr[i]>LargestElement)
        LargestElement = ptr[i];
    }
    cout<<LargestElement<<" is the largest element.\n";
    free(ptr);
    return 0;
}