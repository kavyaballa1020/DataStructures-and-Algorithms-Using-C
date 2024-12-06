#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next,*prev;
};
struct node *head,*tail,*newnode;
void insert(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	if(head==0){
		head=tail=newnode;
		head->prev=head;
		head->next=head;
	}else{
		tail->next=newnode;
		newnode->prev=tail;
		newnode->next=head;
		head->prev=newnode;
		tail=newnode;
	}
}
void display(){
	struct node *temp;
	temp=head;
	while(temp!=tail){
		printf("%d-->",temp->data);
		temp=temp->next;
	}
	printf("%d-->\n",temp->data);
	printf("The tail is containing %d\n",tail->next->data);
}
void beginInsert(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	if(head==0){
		head=tail=newnode;
		head->prev=head;
		head->next=head;
	}else{
		newnode->next=head;
		newnode->prev=head->prev;
		head->prev=newnode;
		head=newnode;
		tail->next=head;
	}
}
void endInsert(){
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter Data\n");
	scanf("%d",&newnode->data);
	if(head==0){
		head=tail=newnode;
		head->prev=head;
		head->next=head;
	}else{
		newnode->prev=tail;
		newnode->next=tail->next;
		tail->next=newnode;
		tail=newnode;
		head->prev=newnode;
	}
}
void posInsert(){
	int pos,i=1,length=0;
	struct node *temp,*temp1;
	temp=temp1=head;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("Enter position\n");
	scanf("%d",&pos);
	while(temp1!=tail){
		temp1=temp1->next;
		length++;
	}
	length=length+1;
	if(pos<1 || pos>length+1){
		printf("Invalid\n");
	}else{
		if(pos==1){
			beginInsert();
		}else if(pos==length+1){
			endInsert();
		}else{
			printf("Enter Data\n");
			scanf("%d",&newnode->data);
			while(i<pos-1){
				temp=temp->next;
				i++;
			}
			newnode->next=temp->next;
			newnode->prev=temp;
			temp->next=newnode;
			newnode->next->prev=newnode;
		}
	}
}
void beginDelete(){
	struct node *temp;
	temp=head;
	if(head==0){
		printf("List is empty\n");
	}else{
		head=temp->next;
		head->prev=tail;
		tail->next=head;
		printf("Deleted Element is %d\n",temp->data);
		free(temp);
	}
}
void endDelete(){
	struct node *temp,*temp1;
	temp=head;
	if(head==0){
		printf("List is Empty\n");
	}else{
		while(temp!=tail){
		temp1=temp;
		temp=temp->next;
	}
	temp1->next=temp->next;
	tail=temp1;
	head->prev=temp1;
	printf("Deleted Element is %d\n",temp->data);
	free(temp);
	}
}
void posDelete(){
	int pos,i=1,length=0;
	printf("Enter Position\n");
	scanf("%d",&pos);
	struct node *temp,*temp1;
	temp=temp1=head;
	while(temp1!=tail){
		temp1=temp1->next;
		length++;
	}
	length=length+1;
	if(pos<0 ||pos>length){
		printf("Invalid\n");
	}else{
		if(pos==1){
			beginDelete();
		}else if(pos==length){
			endDelete();
		}else{
			while(i<pos){
				temp=temp->next;
				i++;
		}
		temp->prev->next=temp->next;
		temp->next->prev=temp->prev;
		printf("Deleted Element is %d\n",temp->data);
		free(temp);
		}
	}
}
int main(){
	int ch,k;
	while(k){
		printf("1. insertion\n 2. Begin Insertion\n 3. End Insertion\n 4. Positional Insertion\n 5. Begin Delete\n 6. End Delete\n 7. Positional Delete\n 8. display\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:insert();
					break;
			case 2:beginInsert();
					break;
			case 3:endInsert();
					break;
			case 4:posInsert();
					break;
			case 5:beginDelete();
					break;
			case 6:endDelete();
					break;
			case 7:posDelete();
					break;
			case 8:display();
					break;
			default:printf("Invalid\n");
					break;
		}
		printf("Press 1 for continue 0 for exit\n");
		scanf("%d",&k);
	}
	return 0;
}
