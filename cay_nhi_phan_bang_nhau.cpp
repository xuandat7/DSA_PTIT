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
bool isIdentical(Node *r1, Node *r2){
    if(r1 == NULL && r2 == NULL)    return true;
    if(r1 && r2){
        if(isIdentical(r1->left, r2->left) && (r1->data == r2->data)
                && isIdentical(r1->right, r2->right)){
                    return true;
                } 
        return false;
    }
    return false;

}


int main(){
    int t; cin >> t;
    while (t--)
    {
        Node *r1 = NULL, *r2 = NULL;
        int n; cin >> n;
        while (n--)
        {
            int n1, n2; char c;
            cin >> n1 >> n2 >> c;
            if(r1 == NULL){
                r1 = new Node(n1);
                if(c == 'L')    r1->left = new Node(n2);
                else r1->right = new Node(n2);
            }
            else insert(r1, n1, n2, c);
        }
        int m; cin >> m;
        while (m--)
        {
            int n1, n2; char c;
            cin >> n1 >> n2 >> c;
            if(r2 == NULL){
                r2 = new Node(n1);
                if(c == 'L')    r2->left = new Node(n2);
                else r2->right = new Node(n2);
            }
            else insert(r2, n1, n2, c);
        }
        
        cout << isIdentical(r1, r2);
        
        cout << endl;
    }
    return 0;
}