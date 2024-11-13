#include<stdio.h>
#define N 5
int dQueue[N];
int front=-1;
int rear=-1;
void insertAtFront(int x){
	if((front==rear+1)||(front==0 && rear==N-1)){
		printf("Queue is full\n");
	}else if(front==-1 && rear==-1){
		front=rear=0;
		dQueue[front]=x;
	}else if(front==0){
		front=N-1;
		dQueue[front]=x;
	}else{
		front--;
		dQueue[front]=x;
	}
}
void insertAtRear(int x){
	if((front==rear+1)||(front==0 && rear==N-1)){
		printf("Queue is full\n");
	}else if(front==-1 && rear==-1){
		front=rear=0;
		dQueue[rear]=x;
	}else if(rear==N-1){
		rear=0;
		dQueue[rear]=x;
	}else{
		rear++;
		dQueue[rear]=x;
	}
}
void deleteAtFront(){
	if(front==-1 && rear==-1){
		printf("Queue is empty");
	}else if(front==rear){
		front=rear=-1;
	}else if(front==N-1){
		front=0;	
	}else{
		front++;
	}
}
void deleteAtRear(){
	if(front==-1 && rear==-1){
		printf("Queue is empty");
	}else if(front==rear){
		front=rear=-1;
	}else if(rear==0){
		rear=N-1;
	}else{
		rear--;
	}
}
void display(){
	int i=front;
	while(i!=rear){
		printf("%d-->",dQueue[i]);
		i=(i+1)%N;
	}
	printf("%d\n",dQueue[rear]);
}
int main(){
	int ch,k,data;
	while(k){
		printf("1. insertAtFront\n 2. InsertAtRear\n 3. DeleteAtFront\n 4. DeleteAtRear\n 5. Display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter data\n");
					scanf("%d",&data);
					insertAtFront(data);
					break;
			case 2:printf("Enter data\n");
					scanf("%d",&data);
					insertAtRear(data);
					break;
			case 3:deleteAtFront();
					break;
			case 4:deleteAtRear();
					break;
			case 5:display();
					break;
			default:printf("Invalid\n");
					break;
		}
		printf("Press 1 for continue and 0 for exit\n");
		scanf("%d",&k);
	}
	return 0;
}
