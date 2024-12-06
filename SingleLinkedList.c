#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
struct node *head,*newnode,*temp;
int main(){
	int choice=1;
	while(choice){
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data\n");
		scanf("%d",&newnode->data);
		newnode->next=0;
		if(head==0){
			head=temp=newnode;
		}
		else{
			temp->next=newnode;
			temp=newnode;
		}
		printf("Enter 1 for inserting new node or press 0 for exiting\n");
		scanf("%d",&choice);
	}
	temp=head;
	printf("Displaying the Data");
	while(temp!=0){
		printf("%d --> ",temp->data);
		temp=temp->next;
		}
	return 0;
}
