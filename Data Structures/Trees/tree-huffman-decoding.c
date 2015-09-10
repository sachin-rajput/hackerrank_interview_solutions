

/***
 *  Tree            : Huffman Decoding
 *  URL             : https://www.hackerrank.com/challenges/tree-huffman-decoding/
 *  Username        : sachinrajput
 *  Submission URL  : https://www.hackerrank.com/challenges/tree-huffman-decoding/submissions/code/13592651
 **/

 /* 
The structure of the node is

typedef struct node
{
    int freq;
    char data;
    node * left;
    node * right;
    
}node;

*/



void decode_huff(node * root,string s)
{
    if(root==NULL) return;
    node *temp = root;
    for (int i = 0; i < s.size(); i++){
        if(s[i]=='1'){
            if(root->right->data == '\0')
                root = root->right;
            else{
                printf("%c",root->right->data);
                root->freq--;
                root = temp;
            }   
        } else if(s[i]=='0'){
            if(root->left->data == '\0')
                root = root->left;
            else{
                printf("%c",root->left->data);
                root->freq--;
                root = temp;
            }   
        }
    }
    
}