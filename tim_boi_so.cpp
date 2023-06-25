#include<bits/stdc++.h>
using namespace std;
int a[30], n,  cnt = 0;
int b[10] = {0,9};
long long convert(int a[], int k){
    long long tmp = 0;
    for(int i=1; i<=k; i++){
        tmp = tmp*10 + a[i];
    }
    return tmp;
}
void in(int k){
    
    cout << convert(a, k);
    cnt++;
}
bool check(int k){
    long long tmp = 0;
    for(int i=1; i<=k; i++){
        tmp = tmp*10 + a[i];
    }
    return tmp%n==0 && tmp !=0;
}

void quaylui(int i, int k){

    for(int j = 0; j<=1; j++){
        a[i] = b[j];
        if(i==k){
            if(check(k) && cnt == 0){
                in(k);                
            }
        }
        else{
            quaylui(i+1, k);
        }
    }
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        cin >> n;
        quaylui(1, 13);
        cout << endl;
        cnt = 0;
    }
    
}