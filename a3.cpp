#include <iostream>
using namespace std;
//a3
int main() 
{
    int a[5],b=1,t=true;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        if(a[i] > 100 || a[i] < 0)
        {
            t = false;
        }

    }
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(a[i] % 2 == 1 || a[i] == a[j])
            {
                b=0;
            }
        }
    }
    if(t)
    {
        cout<<b;
    }
    return 0;
}