#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{

    int data[]={13,3,5,4,11};
    int k,n=5,ptr=0;
    for(k=0;k<n-2;k++)
    {
      while(ptr<n-1)
       {if(data[ptr]>data[ptr+1])
           {
            int temp=data[ptr];
            data[ptr]=data[ptr+1];
            data[ptr+1]=temp;
            ptr++;
           }
       }
    }

     cout<<"After sorting: "<<endl;
     for(k=0;k<n;k++)
     {
          cout<<data[k]<<"\t";
     }

  return 0;
}
