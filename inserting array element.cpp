#include<iostream>
using namespace std;
int main()
{
    int a[50]={3,2,1,8,11};
    int pos,num,i;
    cout<<"enter the pos and num"<<endl;
    cin>>pos;
    cin>>num;
    for(i=4;i=pos;i--)
    a[i]=a[i-1];
    a[i]=num;
    cout<<"new array";
    for(i=0;i<6;i=i+1)
    cout<<a[i];
}
