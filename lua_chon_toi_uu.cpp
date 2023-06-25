#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct task{
	int start, finish;
};
bool cmp(task a, task b){
    return a.finish < b.finish;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n; cin >> n;
		task a[n+5];
		for(int i=0; i<n; i++){
			cin >> a[i].start >> a[i].finish;
		}		
        sort(a, a+n, cmp);
        int cnt = 1;
        int i = 0;
        for(int j=1; j<n; j++){
            if(a[j].start >=  a[i].finish){
                cnt++;
                i = j;
            }
        }
		cout << cnt << endl;
	}	
    return 0;
}