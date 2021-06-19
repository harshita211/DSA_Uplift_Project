#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<5;j++)
        {
            cout<<" ";
        }
        for(int k=0;k<=5;k++)
        {
            cout<<"*";
 
        }
        cout<<endl;
    }
    return 0;
}
