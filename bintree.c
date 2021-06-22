#include <stdio.h>
#include <stdlib.h>

struct node {
   int data;
   struct node * left,*right;
};

struct node* newnode(int key){
   struct node *node = (struct node*)malloc(sizeof(struct node));
   node->data = key;
   node->left = node->right = NULL;

}
void inorder(struct node* root){
   if(root!=NULL){
      inorder(root->left);
      printf("%d ",root->data);
      inorder(root->right);
   }
}

int main(){
   struct node *root = newnode(1);
   root->left = newnode(3);
   root->right = newnode(2);
   root->left->left = newnode(4);
   root->left->right = newnode(5);
   root->right->left = newnode(6);
   root->right->right = newnode(7);
   inorder(root);
}
