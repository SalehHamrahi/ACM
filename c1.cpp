#include <iostream>
using namespace std;
//c1
int main() 
{
    //table: صفحه شطرنج
    //x: مختصات x
    //y: مختصات y
    //t: تعداد خانه های خالی
    int table[8][8];
    int x,y,t=0;

    //ست کردن مقدار پیشفرض برای صفحه شطرنج
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            table[i][j]=0;
        }
    }

    //خانه های وزیر با ۱ علامت گزاری شده اند
    for(int i=0;i<5;i++)
    {
        cin>>x>>y;
        table[x][y]=1;
    }

    //نمایش صفحه شطرنج قبل از فراید
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

    //فرایند حذف کردن خانه هایی که تحت پوشش وزیر ها هستند
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(table[i][j] == 1)
            {
                for(x=0;x<8;x++)
                {   
                    //خانه های حذف شده با ۲ نام گزاری شده اند

                    //فرایند حذف ستونی که وزیر در آن قرار دارد
                    if(table[x][j] != 1)
                    {
                        table[x][j] = 2;
                    }

                    //فرایند حذف ردیفی که وزیر در آن قرار دارد
                    if(table[i][x] != 1)
                    {
                        table[i][x] = 2;
                    }

                    //فراید حذف خانه های مورب که تحت پوشش وزیر هستند
                    if(table[i+x][j+x] != 1 && i+x < 8 && j+x < 8)
                    {
                        table[i+x][j+x] = 2;
                    }
                    if(table[i-x][j+x] != 1 && i-x > -1 && j+x < 8)
                    {
                        table[i-x][j+x] = 2;
                    }
                    if(table[i-x][j-x] != 1 && i-x > -1 && j-x > -1)
                    {
                        table[i-x][j-x] = 2;
                    }
                    if(table[i+x][j-x] != 1 && i+x < 8 && j-x > -1)
                    {
                        table[i+x][j-x] = 2;
                    }
                }
            }
        }
    }

    //محاسبه تعداد خانه های خالی
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(table[i][j] != 1 && table[i][j] != 2)
            {
                t++;
            }
        }
    }

    //نمایش صفحه شطرنج بعد از فرایند
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }

    //خروجی مورد نظر
    cout<<t;
    return 0;
}