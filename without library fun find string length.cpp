#include<iostream>
using namespace std;
int main()
{
    char s[15];//="NAEEM ISLAM";
    cout<<"Enter a string:";
    gets(s);//take input
    int i=0,len=0;
    while(s[i]!='\0')
    {
        i++;
        len++;
    }
    cout<<"string length:"<<len<<endl;
}
