// C program to check whether a given Binary Tree is full or not
#include<iostream>
 
 using namespace std;

/*  Tree node structure */
class Node
{
  public:
    int key;
    Node *left, *right;
    Node *newNode(char k);
    bool isFullTree(Node *);
};
 
/* Helper function that allocates a new node with the
   given key and NULL left and right pointer. */
Node *newNode(char k)
{
    Node *node = new Node();
    node->key = k;
    node->right = node->left = NULL;
    return node;
}
 
/* This function tests if a binary tree is a full binary tree. */
bool isFullTree (struct Node* root)
{
    // If empty tree
    if (root == NULL)
        return true;
 
    // If leaf node
    if (root->left == NULL && root->right == NULL)
        return true;
 
    // If both left and right are not NULL, and left & right subtrees
    // are full
    if ((root->left) && (root->right))
        return (isFullTree(root->left) && isFullTree(root->right));
 
    // We reach here when none of the above if conditions work
    return false;
}
 
// Driver Program
int main()
{
    Node* root = NULL;
    root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
 
    root->left->right = newNode(40);
    root->left->left = newNode(50);
    root->right->left = newNode(60);
    root->right->right = newNode(70);
 
    root->left->left->left = newNode(80);
    root->left->left->right = newNode(90);
    root->left->right->left = newNode(80);
    root->left->right->right = newNode(90);
    root->right->left->left = newNode(80);
    root->right->left->right = newNode(90);
    root->right->right->left = newNode(80);
    root->right->right->right = newNode(90);
 
    if (isFullTree(root))
        cout<<"The Binary Tree is full\n";
    else
        cout<<"The Binary Tree is not full\n";
 
    return(0);
}