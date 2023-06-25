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
void PostOrder(Node *root){
    if(root == NULL)    return;
    if(root->left)  PostOrder(root->left);
    if(root->right) PostOrder(root->right);
    cout << root->data << ' ';   
}
int main(){
    int t; cin >> t;
    while (t--)
    {
        Node *root = NULL;
        int n; cin >> n;
        while (n--)
        {
            int x; cin >> x;
            insert(root, x);
        }
        PostOrder(root);
        
        
        cout << endl;
    }
    return 0;
}