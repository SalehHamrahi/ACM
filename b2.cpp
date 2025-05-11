#include <iostream>
#include <string>
//b2
using namespace std;

int main() {
    string a;
    int b;
    int t = 0, s=0;
    string l = "qwertyuioplkjhgfdsazxcvbnm*#1234567890 ";
    getline(cin, a);
    cin>>b;
    for(int i=0;i<a.size();i++)
    {
        for(int j=0;j<l.size();j++)
        {
            if(a[i] == l[j])
            {
                t++;
            }
        }
    }
    if(t < a.size())
    {
        cout<<"error";
    }
    else{
    for(int i=0;i<a.size();i++)
    {
        if(a[i] == 'a' || a[i] == 'd' || a[i] == 'g' || a[i] == 'j' || a[i] == 'm' || a[i] == 'p' || a[i] == 't' || a[i] == 'w' || a[i] == ' ' || a[i] == '*' || a[i] == '#' || a[i] == 0)
        {
            s+= 1;
        }
        else if(a[i] == '1' || a[i] == 'b' || a[i] == 'e' || a[i] == 'h' || a[i] == 'k' || a[i] == 'n' || a[i] == 'q' || a[i] == 'u' || a[i] == 'x')
        {
            s+=2;
        }
        else if(a[i] == 'c' || a[i] == 'f' || a[i] == 'i' || a[i] == 'l' || a[i] == 'o' || a[i] == 'r' || a[i] == 'v' || a[i] == 'y')
        {
            s+=3;
        }
        else if(a[i] == '2' || a[i] == '3' || a[i] == '4' || a[i] == '5' || a[i] == '6' || a[i] == 's' || a[i] == '8' || a[i] == 'z')
        {
            s+=4;
        }
        else if(a[i] == '7' || a[i] == '9')
        {
            s+=5;
        }
    }
    if(b < s)
    {
        cout<<0;
    }
    else
    {
        cout<<1;
    }
    }
    return 0;
}