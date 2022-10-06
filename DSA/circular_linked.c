#include<stdio.h>  
#include<stdlib.h>  
void create(int);  
void deletion_last();  
struct node  
{  
    int data;  
    struct node *next;  
    struct node *prev;  
};  
struct node *head;  
void main ()  
{  
    int choice,item;  
    do   
    {  
        printf("1.Append List\n2.Delete Node from last\n3.Exit\n4.Enter your choice?");  
        scanf("%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            printf("\nEnter the item\n");  
            scanf("%d",&item);  
            create(item);  
            break;   
            case 2:  
            deletion_last();  
            break;   
            case 3:  
            exit(0);  
            break;    
            default:  
            printf("\nPlease Enter valid choice\n");  
        }  
                  
    }while(choice != 3);  
}  
void create(int item)  
{  
   struct node *ptr = (struct node *) malloc(sizeof(struct node));  
   struct node *temp;   
    if(ptr == NULL)  
   {  
       printf("\nOVERFLOW\n");  
   }  
   else  
   {  
        ptr->data=item;  
       if(head == NULL)  
       {  
           head = ptr;  
           ptr -> next = head;   
           ptr -> prev = head;   
       }  
       else  
       {  
          temp = head;  
          while(temp->next !=head)  
          {  
              temp = temp->next;  
          }  
          temp->next = ptr;  
          ptr ->prev=temp;  
          head -> prev = ptr;  
           ptr -> next = head;  
        }  
   }  
     printf("\nNode Inserted\n");  
}  
void deletion_last()  
{  
   struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\n UNDERFLOW\n");  
    }  
    else if(head->next == head)  
    {  
        head = NULL;   
        free(head);   
        printf("\nNode Deleted\n");  
    }  
    else   
    {  
        ptr = head;   
        if(ptr->next != head)  
        {  
            ptr = ptr -> next;   
        }  
        ptr -> prev -> next = head;  
        head -> prev = ptr -> prev;    
        free(ptr);  
        printf("\nNode Deleted\n");  
    }  
}  
