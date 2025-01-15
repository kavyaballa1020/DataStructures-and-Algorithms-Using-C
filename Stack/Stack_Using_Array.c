#include<stdio.h>
# define N 5
int stack[N];
int top=-1;
void push(){
	int data;
	printf("Enter Data\n");
	scanf("%d",&data);
	if(top==N-1){
		printf("Overflow\n");
	}else{
		top++;
		stack[top]=data;
	}
}
void pop(){
	int data;
	if(top==-1){
		printf("Underflow\n");
	}else{
		data=stack[top];
		printf("Deleted element is %d\n",data);
		top--;
	}
}
void peek(){
	if(top==-1){
		printf("Underflow\n");
	}else{
		printf("The top element in stack is %d\n",stack[top]);
	}
}
void display(){
	int i;
	for(i=0;i<N;i++){
		printf("%d-->",stack[i]);
	}
	printf("\n");
}
int main(){
	int ch,k;
	while(k){
		printf("1. push\n 2. pop\n 3. peek\n 4. display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:push();
					break;
			case 2:pop();
					break;
			case 3:peek();
					break;
			case 4:display();
					break;
			default:printf("Invalid\n");
					break;
		}
		printf("Press 1 for continue and 0 for exit\n");
		scanf("%d",&k);
	}
	return 0;
}
