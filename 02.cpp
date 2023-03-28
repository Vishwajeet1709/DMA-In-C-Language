/*Write a program to ask the user to input a number of data values he would like to
enter then create an array dynamically to accommodate the data values. Now take
the input from the user and display the average of data values.*/
#include<iostream>
using namespace std;
float Average (int *arr, int n)
{
    int i, sum=0;
    for(i=0; i<n ; i++)
    {
        sum += arr[i];
    }
    return(sum/n);
}

int main()
{
    cout<<"How many data values would you like to enter : ";
    int n;
    cin>>n;
    int *str = (int*)malloc(n*sizeof(int));
    cout<<"Enter data values : ";
    for(int i=0; i<n ; i++)
    {
        cin>>str[i];
    }
    cout<<Average(str,n)<<" is the average of entered data values. \n";
    return 0;
}