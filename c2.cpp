#include <iostream>
#include <string>
#include <vector>
using namespace std;
//c2
int main() 
{
    int a[12];
    int table[5][12];
    int b=0;
    for(int i=0;i<12;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<12;j++)
        {
            table[i][j] = 0;
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(a[j] != 0)
            {
                table[i][j] = 1;
                a[j] -= 1;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<12;j++)
        {
            if(table[i][j] == 1 && table[i][j+11] == 1 && j+11 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0 && table[i][j+5] == 0 && table[i][j+6] == 0 && table[i][j+7] == 0 && table[i][j+8] == 0 && table[i][j+9] == 0 && table[i][j+10] == 0)
            {
                b += 10;
            }
            else if(table[i][j] == 1 && table[i][j+10] == 1 && j+10 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0 && table[i][j+5] == 0 && table[i][j+6] == 0 && table[i][j+7] == 0 && table[i][j+8] == 0 && table[i][j+9] == 0)
            {
                b += 9;
            }
            else if(table[i][j] == 1 && table[i][j+9] == 1 && j+9 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0 && table[i][j+5] == 0 && table[i][j+6] == 0 && table[i][j+7] == 0 && table[i][j+8] == 0)
            {
                b += 8;
            }
            else if(table[i][j] == 1 && table[i][j+8] == 1 && j+8 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0 && table[i][j+5] == 0 && table[i][j+6] == 0 && table[i][j+7] == 0)
            {
                b += 7;
            }
            else if(table[i][j] == 1 && table[i][j+7] == 1 && j+7 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0 && table[i][j+5] == 0 && table[i][j+6] == 0)
            {
                b += 6;
            }
            else if(table[i][j] == 1 && table[i][j+6] == 1 && j+6 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0 && table[i][j+5] == 0)
            {
                b += 5;
            }
            else if(table[i][j] == 1 && table[i][j+5] == 1 && j+5 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0 && table[i][j+4] == 0)
            {
                b += 4;
            }
            else if(table[i][j] == 1 && table[i][j+4] == 1 && j+4 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0 && table[i][j+3] == 0)
            {
                b += 3;
            }
            else if(table[i][j] == 1 && table[i][j+3] == 1 && j+3 < 12 && table[i][j+1] == 0 && table[i][j+2] == 0)
            {
                b += 2;
            }
            else if(table[i][j] == 1 && table[i][j+2] == 1 && j+2 < 12 && table[i][j+1] == 0)
            {
                b++;
            }
        }
    }
    cout<<b;
    return 0;
}