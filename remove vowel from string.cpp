#include<bits/stdc++.h>
using namespace std;
int cheakvowel(char);
int main()
{
    char s1[30],s2[30];
    cout<<"Enter a string:";
    gets(s1);//take input
    int i=0,j=0;
     cout<<"Enter     string   input    :"<<s1<<endl;
    for(i;s1[i]!='\0';i++)
    {
      if(cheakvowel(s1[i])==0)
        {
            s2[j]=s1[i];
            j++;
        }
    }

    s2[j]='\0';
    strcpy(s1,s2);
     cout<<"string after delete vowels :"<<s1<<endl;
     return 0;

}
int cheakvowel(char cha)
{if(cha=='a'||cha=='e'||cha=='i'||cha=='o'||cha=='u'||
    cha=='A'||cha=='E'||cha=='I'||cha=='O'||cha=='U')
    return 1;
    else
        return 0;
}
