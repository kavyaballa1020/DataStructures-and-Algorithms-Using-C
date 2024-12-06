#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *top=0;
void push(int x){
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=x;
	newnode->link=top;
	top=newnode;
}
void pop(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("Underflow\n");
	}else{
		printf("Deleted element is %d\n",top->data);
		top=top->link;
		free(temp);
	}
}
void display(){
	struct node *temp;
	temp=top;
	if(top==0){
		printf("List is empty\n");
	}else{
		while(temp!=0){
		printf("%d-->",temp->data);
		temp=temp->link;
		}
		printf("\n");
	}
}
void peek(){
	if(top==0){
		printf("Underflow\n");
	}else{
		printf("The top element in the stack is %d\n",top->data);
	}
}
int main(){
	int ch,k=1,d;
	while(k){
		printf("1. push\n 2. pop\n 3. peek\n 4. Display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:	printf("Enter data\n");
					scanf("%d",&d);
					push(d);
					break;
			case 2:pop();
					break;
			case 3:peek();
					break;
			case 4:display();
					break;
			default:printf("Invaid\n");
					break;
		}
		printf("Press 1 for continue and 0 for exit\n");
		scanf("%d",&k);
	}
	return 0;
}
