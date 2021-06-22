#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next,*prev;
};
void push(struct node**head,int val){
	prev = NULL;
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->next = *head;
	*head->prev = NULL;
	*head
}

int main(){
	struct node *head = NULL;

}