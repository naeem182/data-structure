#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[]={10,25,34,41,48,50,64};
    int item=0;
    int beg=0,end=6,mid;

      while(beg<=end)
       {
           mid=(beg+end)/2;
        if(a[mid]==item)
           { cout<<"item found at index: "<<mid<<endl;
            return 0;
           }
        else if(a[mid]<item)
           {
               beg=mid+1;
           }
        elseNN
           {
               end=mid-1;
           }

        }
     cout<<"item not found "<<endl;
  return 0;
}
