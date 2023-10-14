#include<iostream>
using namespace std;

void swap(int *a,int *b)
    {
        int temp=*b;
        *b=*a;
        *a=temp;
    }

int main()
{
    int a,b;
    a=10;
    b=5;
    cout<<"before swap"<<endl<<a<<endl<<b<<endl;
    swap(&a,&b);
    cout<<"after swap"<<endl<<a<<endl<<b<<endl;

    return 0;
}
