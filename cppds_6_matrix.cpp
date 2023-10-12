#include<iostream>
using namespace std;
int main()
{
    int mat1[3][3];
    int mat2[3][3];
    int sum[3][3];
    int i,j,a,b;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<"Enter the number:";
            cin>>mat1[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<mat1[i][j];
        }
        cout<<endl;
    }

    for(a=0;a<3;a++)
    {
        for(b=0;b=3;b++)
        {
            cout<<"Enter a number:";
            cin>>mat2[i][j];
        }
    }
    for(a=0;a<3;a++)
    {
        for(b=0;b<3;b++)
        {
            cout<<mat2[i][j];
        }
        cout<<endl;
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        sum[a][b]=mat1[i][j]+mat2[i][j];
        cout<<sum[a][b];
        cout<<endl;
    }

    return 0;
}