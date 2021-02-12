#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    string T="abcdab",p="da";
    int s=T.length();
    int r=p.length();
    int k=0,max=s-r+1,index;
 while(k<max)
  {
    for(int l=0;l<r;l++)
      if(p[l]!=T[k+l-1])
        {
            goto step;
        }
    index=k;
     cout<<"pattern mattched at the index: "<<k<<endl;
    return 0;
     step:
    k=k+1;
   }
    cout<<"pattern not mattched"<<endl;
    return 0;

}
