#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int dem(string s)
{
    int d = 0;
    for(char ch : s)
      if(ch == '[')
        d++;
    return d;
}
void ct()
{
    string s; cin>>s;
	stack<int> st;
	for(int i=0; i<s.length(); i++)
    {
        if(!st.empty() && ((s[i] == ']' && s[st.top()] == '[')  || (s[i] == ')' && s[st.top()] == '(')))
            st.pop();
        else
          st.push(i);                                      
    }
    vector<int> ans;
    if(st.empty())
    {
        cout<<dem(s)<<endl;
        return;
    }
    while(!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    if(ans[0] != 0)
      ans.insert(ans.begin(), -1);
    if(ans.back() != s.length() - 1)
      ans.insert(ans.end(), s.length());
    int maxx = 0;
    // for(int x : ans)
    //   cout<<x<<" ";
    // cout<<endl;
    for(int i=0; i<ans.size() - 1; i++)
    {
        // if(ans[i+1] - ans[i] > 1)
        // {
            string cmp = s.substr( ans[i] + 1,  ans[i+1] - ans[i] - 1);
          //  cout<<cmp<<endl;
            maxx = max(maxx, dem(cmp));
        //}
    }
    cout<<maxx<<endl;
}
int main ()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t = 1;
    while(t--)
    {
        ct();
    }
    return 0;
}