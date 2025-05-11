#include <iostream>
using namespace std;
//c1
int main() 
{
    int table[8][8];
    int x,y,t=0;

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            table[i][j]=0;
        }
    }

    for(int i=0;i<5;i++)
    {
        cin>>x>>y;
        table[x][y]=1;
    }

    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            if(table[i][j] == 1)
            {
                for(x=0;x<8;x++)
                {
                    if(table[x][j] != 1)
                    {
                        table[x][j] = 2;
                    }
                    //ادامه دارد
                    if(table[i][x] != 1)
                    {
                        table[i][x] = 2;
                    }
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
    cout<<endl;
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cout<<table[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<t;
    return 0;
}