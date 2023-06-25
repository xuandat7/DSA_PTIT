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
void insert(Node *root, int n1, int n2, char c){
    if(root == NULL)    return;
    if(root->data == n1)    {
        if(c == 'L')    root->left = new Node(n2);
        else root->right = new Node(n2);
    }
    else {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}
bool isFullTree(Node *root){
    if(!root) return true;
    if(!root->left && !root->right) return true;
    Node *r, *l;
    l = root->left;
    r = root->right;
    if(r && l){
        if(isFullTree(l) && isFullTree(r))  return true;
    }
    return false;
}


int main(){
    int t; cin >> t;
    while (t--)
    {
        Node *root = NULL;
        int n; cin >> n;
        while (n--)
        {
            int n1, n2; char c;
            cin >> n1 >> n2 >> c;
            if(root == NULL){
                root = new Node(n1);
                if(c == 'L')    root->left = new Node(n2);
                else root->right = new Node(n2);
            }
            else insert(root, n1, n2, c);
        }
        if(isFullTree(root))    cout <<"YES";
        else cout << "NO";
        
        cout << endl;
    }
    return 0;
}