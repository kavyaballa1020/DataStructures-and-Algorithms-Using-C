#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;
void enqueue(int x){
	if(rear==N-1){
		printf("Overflow condition\n");
	}else if(rear==-1 && front==-1){
		rear=front=0;
		queue[rear]=x;
	}else{
		rear++;
		queue[rear]=x;
	}
}
void dequeue(){
	if(rear==-1 && front==-1){
		printf("Underflow Condition\n");
	}else if(front==rear){
		front=rear=-1;
	}else{
		printf("The deleted element is %d\n",queue[front]);
		front++;
	}
}
void peek(){
	if(rear==-1 && front==-1){
		printf("Underflow Condition\n");
	}else{
		printf("The top element in the queue is %d\n",queue[front]);
	}
}
void display(){
	int i;
	if(rear==-1 && front==-1){
		printf("Underflow Condition\n");
	}else{
		for(i=front;i<rear+1;i++){
			printf("%d-->",queue[i]);
		}
		printf("\n");
	}
}
int main(){
	int ch,k,data;
	while(k){
		printf("1. Enqueue\n 2. Dequeue\n 3. peek\n 4. display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter data\n");
					scanf("%d",&data);
					enqueue(data);
					break;
			case 2:dequeue();
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
