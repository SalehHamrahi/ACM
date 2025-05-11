#include <iostream>
using namespace std;
//b1
int main() 
{
    //a: عدد اول
    //b: عدد دوم
    int a,b;

    //دریافت اعداد
    cin>>a>>b;

    //محاسبه خروجی و چاپ خروجی
    cout<<(a*b) - ((a-2) * (b-2));
    return 0;
}