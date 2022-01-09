#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,i=0,data[10];
    //int n=sizeof(data)/sizeof(data[0]);
    cout<<" How many data do you want?"<<endl;
    cin>>number;
    cout<<" Enter your data"<<endl;
     for(i;i<number;i++)
     cin>>data[i];
     int search,flag=0;
     cout<<"    Enter a search iteam"<<endl;
     cin>>search;
  for(i;i<number;i++)
    {
      if(data[i]==search)
        {
            flag=1;
            break;
        }
    }
           if(flag)
              cout<<"   iteam is found in array data"<<endl;
           else
              cout<<"   iteam is not found in array data"<<endl;
        return 0;
}






/*#include<iostream>
using namespace std;
int main()
{
    int iteam,k=0,loc=-1,data[6]={1,3,5,7,9,11};
    int n=sizeof(data)/sizeof(data[0]);
    cout<<"Enter a input"<<endl;
    cin>>iteam;
    for(k;k<n;k++)
    {
      if(iteam==data[k])
        {
            loc=k;
           if(loc==-1)
              cout<<"iteam is not in the array data"<<endl;
           else
              cout<<loc<<" is the location of iteam";
        }

 }
}


///

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int iteam,k=0,loc=-1;
    vector<int>data;
    data.push_back(1);
    data.push_back(3);
    data.push_back(5);
    data.push_back(7);
    data.push_back(9);
    data.push_back(11);
    cout<<"enter a input"<<endl;
    cin>>iteam;
    for(k;k<data.size();k++)
    {
      if(iteam==data[k])
        {
            loc=k;
           if(loc==-1)
              cout<<"iteam is not in the array data"<<endl;
           else
              cout<<loc<<" is the location of iteam";
        }

 }
}
*/
