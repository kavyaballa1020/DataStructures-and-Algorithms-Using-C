#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head, *newnode, *temp;
void insert()
{
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter Data \n");
	scanf("%d", &newnode->data);
	newnode->next = 0;
	if (head == 0)
	{
		head = temp = newnode;
	}
	else
	{
		temp->next = newnode;
		temp = newnode;
	}
}
void display()
{
	temp = head;
	while (temp != 0)
	{
		printf("%d --> ", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void beginInsert()
{
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter data for begin insert\n");
	scanf("%d", &newnode->data);
	newnode->next = head;
	head = newnode;
}
void endInsert()
{
	struct node *temp;
	temp = head;
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter data for end insert\n");
	scanf("%d", &newnode->data);
	newnode->next = 0;
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;
}
void posInsert()
{
	struct node *temp;
	int i = 1, pos;
	printf("Enter the position\n");
	scanf("%d", &pos);
	temp = head;
	while (i < pos - 1)
	{
		temp = temp->next;
		i++;
	}
	newnode = (struct node *)malloc(sizeof(struct node));
	printf("Enter Data for positional insert\n");
	scanf("%d", &newnode->data);
	newnode->next = temp->next;
	temp->next = newnode;
}
void beginDelete()
{
	temp = head;
	head = head->next;
	printf("Delete Element is %d\n", temp->data);
	free(temp);
}

void endDelete()
{
	struct node *temp2, *temp1;
	temp1 = head;
	while (temp1->next != 0)
	{
		temp2 = temp1;
		temp1 = temp1->next;
	}
	temp2->next = 0;
	printf("Delete Element is %d\n", temp1->data);
	free(temp1);
}
void posDelete()
{
	int pos, i = 1;
	struct node *temp1, *temp2;

	printf("Enter the position of the node that you want to delete\n");
	scanf("%d", &pos);
	if (pos == 1)
	{
		temp1 = head;
		head = head->next;
		printf("Deleted element is %d\n", temp1->data);
		free(temp1);
	}
	else
	{
		temp1 = head;
		while (i < pos - 1 && temp1->next != NULL)
		{
			temp1 = temp1->next;
			i++;
		}
		temp2 = temp1->next;
		temp1->next = temp2->next;
		printf("Deleted element is %d\n", temp2->data);
		free(temp2);
	}
}
void length()
{
	temp = head;
	int count = 0;
	while (temp != 0)
	{
		temp = temp->next;
		count++;
	}
	printf("The length of the linked list is  %d\n", count);
}
void reverse()
{
	struct node *prevnode, *nextnode, *currentnode;
	prevnode = 0;
	currentnode = nextnode = head;
	while (nextnode != 0)
	{
		nextnode = nextnode->next;
		currentnode->next = prevnode;
		prevnode = currentnode;
		currentnode = nextnode;
	}
	head = prevnode;
}
int main()
{
	int n, k = 1;
	while (k)
	{
		printf("1. insertion\n 2. Begin insertion\n 3. End insertion\n 4. Positional Insert \n 5. Display\n 6. Begin Delete \n 7. End delete\n 8. Positional Delete\n 9.length\n");
		scanf("%d", &n);
		switch (n)
		{
		case 1:
			insert();
			break;
		case 2:
			beginInsert();
			break;
		case 3:
			endInsert();
			break;
		case 4:
			posInsert();
			break;
		case 5:
			display();
			break;
		case 6:
			beginDelete();
			break;
		case 7:
			endDelete();
			break;
		case 8:
			posDelete();
			break;
		case 9:
			length();
			break;
		case 10:
			reverse();
			break;
		default:
			printf("Invalid");
			break;
		}
		printf("Do you want to continue press 0 press 1 for exiting");
		scanf("%d", &k);
	}
	return 0;
}
