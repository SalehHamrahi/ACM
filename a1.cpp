#include <iostream>
using namespace std;
//a1
int main() 
{
    //a: دربافت عداد
    //n: شماره خانه هر عدد
    int a[5],n[5];

    //دریافت مقادیر
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        n[i] = i;
    }

    //مرتب کردن مقادیر از کوچک به بزرگ
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

    //خروجی
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<n[4]+1<<endl<<n[0]+1;
    return 0;
}