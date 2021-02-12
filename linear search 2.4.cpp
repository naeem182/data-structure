/*#include<iostream>
using namespace std;
int main()
{
    int iteam,k=0,loc=-1,data[6]={1,3,5,7,9,11};
    int n=sizeof(data)/sizeof(data[0]);
    cout<<"enter a input"<<endl;
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
*/
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
