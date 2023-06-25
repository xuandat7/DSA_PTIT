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
bool isPerfect(struct Node*root){
    queue<Node*> q;
    q.push(root);
    int s = 0, f = 0, l = 0;
    while (!q.empty())  
    {
        s = q.size();
        f = 0;
        if(s != int(pow(2, l)))    return false;
        for(int i=0; i<s; i++){
            Node *t = q.front(); q.pop();
            if(t->left) q.push(t->left);
            if(t->right)    q.push(t->right);
        }
        l++;
    }
    return true;
    

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
        if(isPerfect(root)) cout << "Yes";
        else cout << "No";
        
        cout << endl;
    }
    return 0;
}