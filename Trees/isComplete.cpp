///* C program to checks if a binary tree complete ot not */
#include<iostream>
 
 using namespace std;
/*  Tree node structure */
Class Node
{public:
    int key;
   Node *left, *right;
   Node* newNode(char );
  unsigned int countNodes(Node* )
  bool isComplete(Node* , unsigned int , unsigned int);
	};
 
/* Helper function that allocates a new node with the
   given key and NULL left and right pointer. */
Node *newNode(char k)
{
    struct Node *node = new Node();
    node->key = k;
    node->right = node->left = NULL;
    return node;
}
 
/* This function counts the number of nodes in a binary tree */
unsigned int countNodes(Node* root)
{
    if (root == NULL)
        return (0);
    return (1 + countNodes(root->left) + countNodes(root->right));
}
 
/* This function checks if the binary tree is complete or not */
bool isComplete (Node* root, unsigned int index,
                 unsigned int number_nodes)
{
    // An empty tree is complete
    if (root == NULL)
        return (true);
 
    // If index assigned to current node is more than
    // number of nodes in tree, then tree is not complete
    if (index >= number_nodes)
        return (false);
 
    // Recur for left and right subtrees
    return (isComplete(root->left, 2*index + 1, number_nodes) &&
            isComplete(root->right, 2*index + 2, number_nodes));
}
 
// Driver program
int main()
{
    // Le us create tree in the last diagram above
    Node* root = NULL;
    root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->right = newNode(6);
 
    unsigned int node_count = countNodes(root);
    unsigned int index = 0;
 
    if (isComplete(root, index, node_count))
        cout<<"The Binary Tree is complete\n";
    else
        cout<<"The Binary Tree is not complete\n";
    return (0);
}