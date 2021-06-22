#include <stdio.h>
int size = 10;
int elem = -1;
int a[10];
void push(int n){
	if(elem!=size){
		elem++;
		a[elem] = n;
	}
	else if(size == elem){
		printf("%s\n","Stack is full" );
	}
}
void pop(){
	if(elem == -1){
		printf("%s\n","Stack is empty!" );
	}
	else{
		elem--;
	}
}
int top(){
	return a[elem];
}
void printStack(){
	int i;
	for(i=0;i<elem;i++){
		printf("%d\n", a[i]);
	}
}
int main()
{
	push(1);
	push(2);
	push(3);
	push(4);
	pop();
	
	push(6);
	printStack();
	

	return 0;
}