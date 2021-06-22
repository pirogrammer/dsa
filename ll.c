#include <stdio.h>
#include <stdlib.h>
#define max 10
int top = -1;
int a[max];
void push(int x){
  if(top == max-1) {
    printf("overflow");
    return;
}
 else{
   a[++top] = x;
 }
}
void pop(){
  if(top == -1){
    printf("underflow");
    return;
  }
  else {
    top--;
  }
}
int peek(){
  return a[top];
}
void print(){
  int i;
  printf("stack is: ");
  for(i =0;i<=top;i++){
    printf("%d ",a[i]);
  }
  printf("\n");
}
int main(){
    push(5);print();
    push(6);print();
    push(2);print();
    pop();print();
    push(12);print();
    
}