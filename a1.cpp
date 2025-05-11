#include <iostream>
using namespace std;
//a1
int main() 
{
    int a[5],n[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        n[i] = i;
    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i],a[j]);
                swap(n[i],n[j]);
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        if(i == 4)
        {
            cout<<a[i]<<" ";
        }
        else
        {
            cout<<a[i]<<" ";
        }
    }
    cout<<endl<<n[4]+1<<endl<<n[0]+1;
    return 0;
}