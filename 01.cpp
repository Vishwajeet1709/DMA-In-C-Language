// Define a function to input variable length string and store it in an array without memory wastage.
#include<iostream>
// #include<stdio.h>
using namespace std;

int main()
{
    cout<<"Enter your name : ";
    int i=0,j=0;
    char c, *str = (char*)malloc(sizeof(char));
    while(c != '\n')
    {
        c = getc(stdin);
        j++;
        str = (char*)realloc(str, j * sizeof(char));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    cout<<"Your name is : ";
    i=0;
    while(str != '\0')
    {
        cout<<str[i];
        i++;
    }
    return 0;
}