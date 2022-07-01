#include<stdio.h>
#include<stdlib.h>


typedef struct Node
{
int key;            
struct Node* left;  
struct Node* right; 
int height;             
} Node;

int max(int a, int b);

int height(Node *N)
{
    if (N == NULL)
        return 0;
    return 1+max(height(N->left), height(N->right));
}

int max(int a, int b)
{
    return (a > b)? a : b;
}
 
Node* newNode(int key)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->key   = key;
    node->left   = NULL;
    node->right  = NULL;
    node->height = 0;  
    return(node);
}

Node *rightRotate(Node *y)
{
    Node *x = y->left;
    Node *T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    y->height = height(y);
    x->height = height(x);
 
    return x;
}
 
Node *leftRotate(Node *x)
{
    Node *y = x->right;
    Node *T2 = y->left;
 
    y->left = x;
    x->right = T2;
 
    x->height = height(x);
    y->height = height(y);
 
    return y;
}

int getBalance(Node *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}

Node* insert(Node* node, int key)
{
    if (node == NULL)
        return(newNode(key));
 
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
    else 
        return node;
 
    node->height = height(node);
 

    int balance = getBalance(node);
 

    if (balance > 1 && key < node->left->key)
        return rightRotate(node);
 
    if (balance < -1 && key > node->right->key)
        return leftRotate(node);
 
    if (balance > 1 && key > node->left->key)
    {
        node->left =  leftRotate(node->left);
        return rightRotate(node);
    }
 
    if (balance < -1 && key < node->right->key)
    {
        node->right = rightRotate(node->right);
        return leftRotate(node);
    }
 

    return node;
}

void inOrder(Node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        printf("%d(BF=%d) ", root->key,getBalance(root));
        inOrder(root->right);
    }
}

void preOrder(Node *root)
{
    if(root != NULL)
    {
        printf("%d(BF=%d) ", root->key,getBalance(root));
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    int n,i,val,key ;
    Node *root = NULL;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&val);
        root = insert(root, val);
    }
    scanf("%d",&key);
    root = insert(root, key);    
    
    inOrder(root);
    printf("\n");
    preOrder(root);
 
    return 0;
}
