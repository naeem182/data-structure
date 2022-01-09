#include<stdio.h>
int main()
{
    int num,divi,sum,i,j,test;

    printf("Enter num of test:");
 scanf("%d",&test);

    for(i=0;i<test;i++)
    {
       sum=0;
        scanf("%d",&num);
         for(j=1;j<num;j++)
            {
divi=num%j;
if(divi==0)
{
    sum=sum+j;
}
            }
     printf("%d\n",sum);}
return 0;
}





/*#include<stdio.h>
int main()
{
int c=0,i;
char s[100];
printf("Enter string:");
gets(s);for(i=0;s[i]!='\0';i++)
{
if(s[i]=='0'||s[i]=='1'||s[i]=='2'||s[i]=='3'||s[i]==
'4'||s[i]=='5'||
s[i]=='6'||s[i]=='7'||s[i]=='8'||s[i]=='9')
c++;
}
printf("number of digits in strings:%d\n",c);
return 0;
}




*/
