#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[]={13,5,-1,3,2};
    int i,value,hole;
    for(i=1;i<5;i++)
    {  value=a[i];
        hole=i;

      while(hole>0&&a[hole-1]>value)
       {
           a[hole]=a[hole-1];
           hole--;

       }
           a[hole]=value;
    }

     cout<<"After sorting: "<<endl;
     for(i=0;i<5;i++)
     {
          cout<<a[i]<<"\t";
     }

  return 0;
}
