#include <iostream>
#include <vector>
using namespace std;
//c3
// در این سوال تمام حالات محاسبه شده و فرمولی استفاده نشده است
int main() 
{
    int a[10],n[10];
    int select_ = 0;
    vector <int> ss;
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
        n[i] = i;
    }
    
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
    for(int i=0;i<ss.size();i++)
    {
        if(select_ < ss[i])
        {
            select_ = ss[i];
        }
    }
    cout<<select_;
    return 0;
}