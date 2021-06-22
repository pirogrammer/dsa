#include <stdio.h>
#include <stdlib.h>

struct node
{
	struct node *next;
	int val;
};
// insertion at head
void push(struct node **head,int data){
	struct node* newnode = (struct node*)malloc(sizeof(struct node));
	newnode->val = data;
	newnode->next = *head;
	*head = newnode;
}
// insertion at tail
void insert_at_tail(struct node **head,int data){
	struct node*temp = *head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	struct node * newnode = (struct node*)malloc(sizeof(struct node));
	newnode->val = data;
	newnode->next = NULL;
	temp->next = newnode;
}
void printlist(struct node *head){
	struct node*temp = head;
	while(temp!=NULL){
		printf("%d ",temp->val);
		temp = temp->next;
	}
}
void deleteAny(struct node**head,int key){
	struct node* temp = *head,*prev;
	if(*head==NULL){
		return;
	}
	if(temp!= NULL && temp->data==key){
		*head = temp->next;
		free(temp);
		return; 
	}
	while(temp!=NULL && temp->val != key){
		prev = temp;
		temp = temp->next;
	}
	prev->next = temp->next;
	free(temp);
}
int main(){
	int i;
	struct node* head = NULL;
	for(i = 1;i<6;i++){
		push(&head,i);
	}
	printlist(head);
	insert_at_tail(&head,7);
	printf("\n");
	printlist(head);
}