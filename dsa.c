#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *next;
	int val;
};
// insertion 
void push(struct node **head,int data){
	struct node* newnode = malloc(sizeof(struct node));
	newnode->val = data;
	newnode->next = *head;
	*head = newnode;
}

int main(){
	char msg[50] = "hello world";
	printf("%s\n",msg );
}