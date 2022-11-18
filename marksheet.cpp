#include <iostream>
using namespace std;
int main()
{
    int per;
    cout<<"enter your persentage";
    cin>>per;
    if(per<=100 && 85<=per)
    {
        cout<<"A"<<endl;

    }
    else{
        if(per<=84 && 60<=per)
        {
            cout<<"B";
        }
    }

}