#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void insert(Node* &root, int x){
    if(root == NULL){
        root = new Node(x); 
    }
    if(root->data > x)  insert(root->left, x);
    if(root->data < x)  insert(root->right, x);
}
Node* createBST(int a[], int start, int end){
    if(start > end) return NULL;
    int mid = (start+end)/2;
    Node* root = new Node(a[mid]);
    root->left = createBST(a, start, mid-1);
    root->right = createBST(a, mid+1, end);
    return root;
}
void PreOrder(Node *root){
    if(root == NULL)    return;
    cout << root->data << ' ';
    if(root->left)  PreOrder(root->left);
    if(root->right) PreOrder(root->right);
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        Node *root = NULL;
        int n; cin >> n;
        int a[10005]; 
        for(int i=0; i<n; i++)  cin >> a[i];
        sort(a, a+n);
        root = createBST(a, 0, n-1);
        PreOrder(root);
        
        
        cout << endl;
    }
    return 0;
}