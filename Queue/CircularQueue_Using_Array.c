#include<stdio.h>
#define N 5
int Cqueue[N];
int rear=-1;
int front=-1;
void enqueue(int x){
	if(rear==-1 && front==-1){
		rear=front=0;
		Cqueue[rear]=x;
	}else if((rear+1)%N==front){
		printf("Queue is overflow\n");
	}else{
		rear=(rear+1)%N;
		Cqueue[rear]=x;
	}
}
void dequeue(){
	if(rear==-1 && front==-1){
		printf("Queue is Empty\n");
	}else if(front==rear){
		printf("Deleted Element is %d\n",Cqueue[front]);
		front=rear=-1;
	}else{
		printf("Deleted Elemetn is %d\n",Cqueue[front]);
		front=(front+1)%N;
	}
}
void display(){
	int i=front;
	if(rear==-1 && front==-1){
		printf("Queue is Empty\n");
	}else{
		while(i!=rear){
			printf("%d-->",Cqueue[i]);
			i=(i+1)%N;
		}
		printf("%d\n",Cqueue[rear]);
	}
}
void peek(){
	if(rear==-1 && front==-1){
		printf("Queue is Empty\n");
	}else{
		printf("Peak Element is %d\n",Cqueue[front]);
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
