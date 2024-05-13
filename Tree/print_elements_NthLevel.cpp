 #include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node( int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;

    }
};

void nthlevel( Node* root, int curr, int level){
    if(root==NULL) return ;
    if( curr==level ) cout<<root->val<<" ";
    nthlevel(root->left, curr+1 , level );
    nthlevel(root->right, curr+1, level);
}

 
int main(){
    Node* a = new Node(-1);
    Node* b = new Node(-2);
    Node* c = new Node(-3);
    Node* d = new Node(-15);
    Node* e = new Node(-24);
    Node* f = new Node(-3);
    Node* g = new Node(-1);
    Node* h = new Node(-2);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    g->right = h;
    
    nthlevel(a,1,3); 
}