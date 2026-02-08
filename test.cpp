#include<iostream>
using namespace std;

void test_2d()
{
    int a[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    cout<<"test_2d"<<endl;
    cout << &a[0][0] <<"  "<<&a[0][1] <<"  "<<&a[0][2] <<endl;
    cout << &a[1][0] <<"  "<<&a[1][1] <<"  "<<&a[1][2] <<endl;
}

void test_3d()
{
    cout<<"test_3d"<<endl;
    int b[2][2][3] = 
    {
        {
            {1, 1, 1},
            {2, 2, 2}
        },
        {
            {3, 3, 3},
            {4, 4, 4}
        }
    };
    for(int i = 0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            for(int k=0;k<3;k++)
            {
                cout<<&b[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
}

int main()
{
    test_2d();
    cout<<endl;
    test_3d();
    return 0;
}