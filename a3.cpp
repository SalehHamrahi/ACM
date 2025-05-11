#include <iostream>
using namespace std;
//a3
int main() 
{
    //a: دریافت عداد
    //b: در صورت تقلب ۰ و در غیر این صورت ۱ میشود
    int a[5],b=1;

    //دریافت مقادیر
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }

    //برسی تقلب کردن
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
    
    //خروجی
    cout<<b;
    return 0;
}