//Write a program to input and print text using dynamic memory allocation.
#include<iostream>
using namespace std;
int main()
{
    char c, *str = (char*)malloc(sizeof(char));
    int i=0, j=0;
    cout<<"Enter Some Text : ";
    while(c != '\n')
    {
        j++;
        c = getc(stdin);
        str = (char*)realloc(str,j*sizeof(char));
        str[i] = c;
        i++;
    }
    str[i] = '\0';
    i = 0;
    cout<<"\n You Have Entered : ";
    while(str[i] != '\0')
    {
        cout<<str[i];
        i++;
    }
    cout<<"\n";
    free(str);
    return 0;
}