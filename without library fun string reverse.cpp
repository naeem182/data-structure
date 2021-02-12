#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s1[15],s2[15];//="NAEEM ISLAM";
    cout<<"Enter a string:";
    gets(s1);//take input
    int i=0,len=0,j;
    while(s1[i]!='\0')
    {
        i++;
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        s2[j]=s1[i];

    }
    cout<<"     string   :"<<s1<<endl;
    cout<<"string revers :"<<s2<<endl;
}
