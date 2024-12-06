#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
struct node *head,*newnode,*tail;
void insert(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=0;
	if(head==0){
		head=tail=newnode;
	}else{
		newnode->prev=tail;
		tail->next=newnode;
		tail=newnode;
	}
}
void beginInsert(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	head->prev=newnode;
	newnode->next=head;
	newnode->prev=0;
	head=newnode;
}
void endInsert(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	newnode->next=0;
	newnode->prev=tail;
	tail->next=newnode;
	tail=newnode;
}
void posInsert(){
	struct node *temp;
	temp=head;
	int pos,i=1;
	printf("Enter position\n");
	scanf("%d",&pos);
	if(pos<1){
		printf("Invalid Position\n");
	}
	else if(pos==1){
		beginInsert();
	}
	else{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter data\n");
		scanf("%d",&newnode->data);
		while(i<pos-1){
			temp=temp->next;
			i++;
		}
		newnode->prev=temp;
		newnode->next=temp->next;
		temp->next=newnode;
		newnode->next->prev=newnode;
	}
}
void deleteBegin(){
	struct node *temp;
	temp=head;
	if(head==0){
		printf("list is empty\n");
	}
	head=head->next;
	head->prev=0;
	printf("Delete Element is : %d\n",temp->data);
	free(temp);
}
void endDelete(){
	struct node *temp;
	if(tail==0){
		printf("List is empty\n");
	}
	temp=tail;
	tail=tail->prev;
	tail->next=0;
	printf("Delete Element is : %d\n",temp->data);
	free(temp);
}
void posDelete(){
	struct node *temp,*temp1;
	temp=head;
	int pos,i=1;
	printf("Enter postition\n");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	temp1=temp->next;
	temp->next=temp1->next;
	temp1->next->prev=temp;
	printf("Delete Element is : %d\n",temp1->data);
	free(temp1);
}
void reverse(){
	struct node *current,*nextnode;
	current=head;
	while(current!=0){
		nextnode=current->next;
		current->next=current->prev;
		current->prev=nextnode;
		current=nextnode;
	}
	current=head;
	head=tail;
	tail=current;
	printf("Head : %d\n",head->data);
	printf("Tail : %d\n",tail->data);
	
}
void display(){
	struct node *temp;
	temp=head;
	if(head == 0 ){
		printf("list is empty\n");
	}
	else{
		while(temp!=0){
			printf("%d-->",temp->data);
			temp=temp->next;
		}	
	}
	printf("\n");
}
int main(){
	int ch,k=1;
	while(k){
		printf("Press \n 1. Insertion\n 2. Display\n 3. Begin insertion\n 4. End Insertion\n 5. Positional Insertion\n 6. Delete at begin\n 7. Delete at end\n 8. Positional Delete\n 9. Reverse\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert();
					break;
			case 2:display();
					break;
			case 3:beginInsert();
					break;
			case 4:endInsert();
					break;
			case 5:posInsert();
					break;
			case 6:deleteBegin();
					break;
			case 7:endDelete();
					break;
			case 8:posDelete();
					break;
			case 9:reverse();
					break;
			default:printf("Invalid choice\n");
					break;
		}
		printf("Press 1 for continue and 0 for exit\n");
		scanf("%d",&k);
	}
	return 0;
}
