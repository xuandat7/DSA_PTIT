#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;
void solve(int a[], int n){
	
	for(int i=0; i<n-1; i++)
	{
		vector<int> res;
		int ok = 1;
		for(int j=i+1; j<n; j++){
			if(a[i] > a[j]){
				ok = 0;
				swap(a[i], a[j]);
			}
		}
		// kiem tra neu k con doi nua 
		if(ok)	break;
		for(int j=0; j<n; j++){
			res.push_back(a[j]);
		
		}
		ans.push_back(res);
	}
	
}
void in(){
	for(int i=ans.size()-1; i>=0; i--){
		cout << "Buoc " << i+1 << ": ";
		for(int j=0; j<ans[i].size(); j++)
		{
			cout << ans[i][j] << ' ';
		}
		cout << endl;
	}
}
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int ok = 0;
		set<int> ms;
		for(int i=0; i<n; i++){
			cin >> a[i];		
		}
		solve(a, n);
		in();
		cout << endl;
		ans.clear();
	}
}