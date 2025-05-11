#include <iostream>
#include <vector>
using namespace std;
//c3
// در این سوال تمام حالات محاسبه شده و از فرمولی استفاده نشده است
int main() 
{
    //a: ارزش هر خانه
    //max_score: بیشترین سود آقای دزدادیان
    //ss: محاسبه تمام حالت هایی که آقای دزدادیان میتواند سود داشته باشد
    int a[10];
    int max_score = 0;
    vector <int> ss;

    //دریافت ارزش های خانه ها
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    
    //محاسبه تمام حالات
    ss.push_back(a[0]+a[2]+a[4]+a[6]+a[8]);
    ss.push_back(a[1]+a[3]+a[5]+a[7]+a[9]);
    ss.push_back(a[0]+a[3]+a[5]+a[7]+a[9]);
    ss.push_back(a[0]+a[4]+a[6]+a[8]);
    ss.push_back(a[0]+a[2]+a[5]+a[7]+a[9]);
    ss.push_back(a[0]+a[2]+a[6]+a[8]);
    ss.push_back(a[1]+a[4]+a[6]+a[8]);
    ss.push_back(a[1]+a[5]+a[7]+a[9]);
    ss.push_back(a[0]+a[2]+a[4]+a[7]+a[9]);
    ss.push_back(a[0]+a[2]+a[4]+a[8]);
    ss.push_back(a[0]+a[2]+a[4]+a[6]+a[9]);
    ss.push_back(a[1]+a[3]+a[6]+a[8]);
    ss.push_back(a[1]+a[3]+a[7]+a[9]);
    ss.push_back(a[1]+a[3]+a[5]+a[8]);
    ss.push_back(a[1]+a[3]+a[5]+a[9]);

    //پیداکردن بیشترین سود
    for(int i=0;i<ss.size();i++)
    {
        if(max_score < ss[i])
        {
            max_score = ss[i];
        }
    }

    //خروجی
    cout<<max_score;
    return 0;
}