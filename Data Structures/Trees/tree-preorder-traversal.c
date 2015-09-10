

/***
 *  Tree            : Preorder Traversal
 *  URL             : https://www.hackerrank.com/challenges/tree-preorder-traversal/
 *  Username        : sachinrajput
 *  Submission URL  : https://www.hackerrank.com/challenges/tree-preorder-traversal/submissions/code/13589660
 **/

 
/* you only have to complete the function given below.  
Node is defined as  

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void Preorder(node *root) {
    if(root==NULL) return;
    printf("%d ",root->data);
    Preorder(root->left);
    Preorder(root->right);    
}