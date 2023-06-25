#include<bits/stdc++.h>
using namespace std;
int n, a[100001];
int ok = 0;
void in(){
    for(int i=1; i<=n; i++){
        cout << a[i] <<' ';

    }
    cout << endl;
}
void sinh(int a[], int k){
    int i = k - 1;
    while(i>0 && a[i] > a[i+1]){
        i--;
    }
    if(i==0)   ok = 1; 
    else{
        int j = n;
        while(a[i] > a[j])  j--;
        swap(a[i], a[j]);
        reverse(a+i+1, a+k+1);

    }
}
int main(){
    cin >> n;
    for(int i=1; i<=n; i++) cin >> a[i];
    sort(a+1, a+n+1);
    while (!ok)
    {
        in();
        sinh(a, n);
    }
    

}