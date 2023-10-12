#include<iostream>
using namespace std;
int main()
{
    int i,res,n;
    cout<<"Enter a number";
    cin>>n;

    i=1;
    do
    {
        res=n*i;
        cout<<n<<" * "<<i<<" = "<<res;
        cout<<endl;
    i++;
    }
    while(i<10);
    cout<<endl;

    
    
    cout<<"Enter a number:";
    cin>>n;

    for(int i=1;i<=10;++i)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }


    cout<<"Enter a number:";
    cin>>n;
    i=1;
    while(i<=10)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
        i++;
    }
    return 0;
}