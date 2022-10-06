#include <stdio.h>
#include <stdlib.h>
struct Node{
	int data;
	struct Node *next;
};

int insert_front(struct Node **head,int val){
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=val;
	temp->next=NULL;
	if(*head==NULL){
		*head=temp;
		return 0;
	}
	temp->next=*head;
    *head=temp;
}

int insert_back(struct Node **head,int val){
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=val;
	temp->next=NULL;
	if(*head==NULL){
		*head=temp;
		return 0;
	}
	struct Node *t;
	t=*head;
	while(t->next!=NULL){
		t=t->next;
	}
	t->next=temp;

}

int insert_loc(struct Node **head,int loc,int val){
	
	struct Node *t,*t1;
	struct Node *temp;
	temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=val;
	temp->next=NULL;
	int i;
	if(*head==NULL){
		*head=temp;
		return 0;
	}
	t=*head;
	for(i=0;i<loc-1;i++){
		t1=t;
		t=t->next;
	}
	t1->next=temp;
	temp->next=t;
}

int delete_front(struct Node **head){
	struct Node *t;
	if(*head==NULL){
		printf("List is empty\n");
		return 0;
	}
	t=*head;
	*head=t->next;
	printf("%d\n",t->data);
	free(t);
}

int delete_back(struct Node **head){
	struct Node *t,*t1;
	if(*head==NULL){
		printf("List is empty\n");
		return 0;
	}
	t=*head;
	while(t->next!=NULL){
		t1=t;
		t=t->next;
	}
	t1->next=NULL;
	printf("%d\n",t->data);
	free(t);
}

int delete_loc(struct Node **head,int loc){
	struct Node *t,*t1;
	int i;
	if(*head==NULL){
		printf("List is empty\n");
		return 0;
	}
	t=*head;
	for(i=0;i<loc-1;i++){
		t1=t;
		t=t->next;
	}
	t1->next=t->next;
	printf("%d\n",t->data);
	free(t);
}

int delete_val(struct Node **head,int val){
	struct Node *t,*t1;
	if(*head==NULL){
		printf("List is empty\n");
		return 0;
	}
	t=*head;
	while(t->data!=val){
		t1=t;
		t=t->next;
	}
	t1->next=t->next;
	printf("%d\n",t->data);
	free(t);
}

int search(struct Node **head,int val){
	struct Node *t;
	t=*head;
	while(t!=NULL){
		if(t->data==val){
			printf("Found\n");
			return 0;
		}
		t=t->next;
	}
	printf("Not Found\n");
}

int reverse(struct Node **head){
	struct Node *t,*t1,*t2;
	if(*head==NULL){
		printf("List is empty\n");
		return 0;
	}
	t=*head;
	t1=t->next;
	t2=t1->next;
	t->next=NULL;
	t1->next=t;
	while(t2!=NULL){
		t=t1;
		t1=t2;
		t2=t2->next;
		t1->next=t;
	}
	*head=t1;
}

int disp(struct Node *head){
	struct Node *t;
	if(head==NULL){
		printf("List is empty\n");
		return 0;

	}
	t=head;
	while(t!=NULL){
		printf("%d->",t->data);
		t=t->next;
	}
	printf("NULL\n");
}

int even_odd(struct Node *head){
	struct Node *t;
	int even=0;
	int odd=0;
	if(head==NULL){
		printf("List is empty\n");
		return 0;

	}
	t=head;
	while(t!=NULL){
		if(t->data%2==0){
			even++;
		}
		else{
			odd++;
		}
		t=t->next;
	}
	printf("Even:%d Odd:%d\n",even,odd);
	//printf("NULL\n");
}

int main(){
	struct Node *head;
	int choice;
	int val,loc;
	head=NULL;
	do
    {
        printf(" 1. Insert front\n 2. Insert back\n 3. Insert at location\n"
		"4. Delete front\n 5. Delete back\n 6. Delete val\n 7. Delete at location\n "
		"8. Search\n 9. reverse\n 10. even or odd\n 11. Display\n");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            printf("Enter value:\n");
            scanf("%ld",&val);
            getchar();
            insert_front(&head,val);
            break;
        case 2:
            printf("Enter value:\n");
            scanf("%ld",&val);
            getchar();
            insert_back(&head,val);
            break;
        case 3:
            printf("Enter value:\n");
            scanf("%ld",&val);
			printf("Enter location:\n");
            scanf("%ld",&loc);
            getchar();
            insert_loc(&head,loc,val);
            break;
        case 4:
			delete_front(&head);
            break;
		case 5:
			delete_back(&head);
            break;
		case 6:
		    printf("Enter value:\n");
            scanf("%ld",&val);
			delete_val(&head,val);
            break;
		case 7:
		    printf("Enter lcoation:\n");
            scanf("%ld",&loc);
			delete_loc(&head,loc);
            break;
		case 8:
		    printf("Enter value:\n");
            scanf("%ld",&val);
			search(&head,val);
            break;
        case 9:
			reverse(&head);
            break;
        case 10:
			even_odd(head);
            break;
		case 11:
			disp(head);
            break;
		case 12:
		break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (choice != 12);
}