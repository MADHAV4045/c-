#include<iostream>
using namespace std;
int main()
{
    int max;
    while(true)
    {
        if(max<0)
        {
            cout<<"Max length is"<<--max<<endl;
            break;
        }
        max++;
    }
    return 0;
} 