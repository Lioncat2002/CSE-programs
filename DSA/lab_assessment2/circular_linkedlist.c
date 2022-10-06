#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;
};

int insert_front(struct node **head, int val)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = val;
	temp->next = *head;
	struct node *t = *head;
	if (*head == NULL)
	{
		*head = temp;
		(*head)->next=*head;
		return 0;
	}

	while (t->next != *head)
	{
		t = t->next;
	}
	t->next = temp;
	*head = temp;
}

int insert_back(struct node **head, int val)
{
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->data = val;
	temp->next = *head;
	struct node *t = *head;
	if (*head == NULL)
	{
		*head = temp;
		(*head)->next=*head;
		return 0;
	}
	while (t->next != *head)
	{
		t = t->next;
	}
	t->next = temp;
}

int disp(struct node **head)
{
	if (*head == NULL)
	{
		printf("Empty List\n");
		return 0;
	}
	struct node *t;
	t = *head;
	do
	{
		printf("%d ", t->data);
		t = t->next;
	} while (t != *head);
	printf("\n");
}

int delete_front(struct node **head)
{
	if (*head == NULL)
	{
		printf("List is empty");
		return 0;
	}
	if ((*head)->next == *head)
	{
		*head = NULL;
		free(*head);
		return 0;
	}
	struct node *t;
	t = *head;
	while (t->next != *head)
	{
		t = t->next;
	}
	t->next = (*head)->next;
	free(*head);
	*head = t->next;
}

int delete_back(struct node **head)
{
	if (*head == NULL)
	{
		printf("List is empty");
		return 0;
	}
	if ((*head)->next == *head)
	{
		*head = NULL;
		free(*head);
		return 0;
	}
	struct node *t;
	t = *head;
	struct node *r;
	while (t->next != *head)
	{
		r = t;
		t = t->next;
	}
	r->next = *head;
	free(t);
}

int main()
{
	struct node *head;
	head = NULL;
	int choice;
	int val;
	do
	{
		printf("\n1. for insert at front\n2. for insert at back\n3. for delete from back\n4. for delete from front\n5. for display\n6. for exit\n");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter the value to insert at front:\n");
			scanf("%d", &val);
			insert_front(&head, val);
			break;
		case 2:
			printf("Enter the value to insert at back:\n");
			scanf("%d", &val);
			insert_back(&head, val);
			break;
		case 3:
			delete_back(&head);
			break;
		case 4:
			delete_front(&head);
			break;
		case 5:
			disp(&head);
			break;
		case 6:
			break;
		default:
			printf("Invalid choice\n");
		}
	} while (choice != 6);
}
