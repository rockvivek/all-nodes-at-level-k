#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *left,*right;
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void printNodes(Node *root , int k){
    if(!root)
        return ;
    if(k==0){
        cout<<root->data<<" ";
        return ;
    }
    printNodes(root->left,k-1);
    printNodes(root->right,k-1);
}

int main()
{
      Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    printNodes(root,1);
    return 0;
}
