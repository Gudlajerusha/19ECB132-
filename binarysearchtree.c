#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int num;
    struct node *left;
    struct node *right;
  
};

struct node* insert( struct node* root, int num ) {
        
    if(root == NULL) {
    
        struct node* node = (struct node*)malloc(sizeof(struct node));

        node->num= num;

        node->left = NULL;
        node->right = NULL;
        return node;
      
    } else {
      
        struct node* cur;
        
        if(num <= root->num) {
            cur = insert(root->left, num);
            root->left = cur;
        } else {
            cur = insert(root->right, num);
            root->right = cur;
        }
    
        return root;
    }
}

struct node {
    
    int num;
    struct node *left;
    struct node *right;
  
};

*/

int getHeight(struct node* root)
{

int counter_right = 0;
int counter_left = 0;   
    
    if (root == NULL)
    {
        return -1;
    }
    
         counter_left = getHeight(root->left);
        counter_left++;
         
         counter_right = getHeight(root->right);
         counter_right++; 
         
        if (counter_left > counter_right)
        {
            return counter_left;
        }
              
         return counter_right;     
}


int main() {
  
    struct node* root = NULL;
    
    int j;
    int num;

    scanf("%d", &j);

    while(j-- > 0) {
        scanf("%d", &num);
        root = insert(root, num);
    }
  
    printf("%d",getHeight(root));
    return 0;
}
