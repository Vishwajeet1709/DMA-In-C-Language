//Find out the maximum and minimum from an array using dynamic memory allocation in C.
#include<iostream>
using namespace std;
int main()
{
    int min,max,i,size = 5, *ptr = (int*)calloc(size, sizeof(int));
    cout<<"Enter any "<<size<<" number(s) : ";
   
    for(i=0; i<size; i++)
    {
        cin>>ptr[i];

        if(i == 0)
        {
            max = ptr[i];
            min = ptr[i];
            continue;
        }
        if(ptr[i] > max)
        max = ptr[i];

        if(ptr[i] < min)
        min = ptr[i];
    }
    cout<<min<<" is minum, and "<<max<<" is maximum in the array.\n";
    free(ptr);
    return 0;
}