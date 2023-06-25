#include <bits/stdc++.h>
using namespace std;

void next(string s){
    int i = s.size() - 1;
    // duyet tu cuoi ve dau, neu thay bit 1 thi bat thanh bit 0, cap nhat i
    while(i>=0 && s[i] == '1'){
        s[i] = '0';
        i--;
    }
    // sau khi cap nhat, kiem tra xem i da la bit cuoi chua, neu chua bat bit i thanh 1
    if(i!=-1)   s[i] = '1';
    cout << s;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        
        string s;
        cin >> s;
        next(s);
        cout << endl;
    }
    return 0;
}