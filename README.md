# Interview

#add second preptr.


#include<stdio.h>
#include<stdlib.h>

struct node
{
	int info;
	struct node *next;
};
struct node *first=NULL;

void display()
{
	struct node *ptr = first;
	
// 	first->ptr;
	
	while(ptr != NULL)
	{
		printf("%d\n",ptr->info);
		ptr=ptr->next;
		
	}
	return;
}

void insert_beginning(int value)
{
	struct node *avail , *newNode ;


	avail=(struct node*)malloc(sizeof(struct node));
	
	if(avail == NULL)
	{
		printf("Unable to allocate memory.");
	}
	else
	{
		newNode=avail;
		avail=avail->next;
		newNode->info=value;
	
		if(first == NULL)
		{
			newNode->next=NULL;
		}
		else
		{
			newNode->next=first;
		}
		first=newNode;
		printf("Data Inserted Successfully\n");
	}
}

// void display()
// {
// 	struct node *ptr = first;
	
// // 	first->ptr;
	
// 	while(ptr != NULL)
// 	{
// 		printf("%d\n",ptr->info);
// 		ptr=ptr->next;
		
// 	}
// 	return;
// }

void insert_end(int value)
{
   	struct node *avail , *newNode ;
	avail=(struct node*)malloc(sizeof(struct node));
	
    if(avail == NULL)
    {
        printf("Availability stack underflow");
        return;
    }
    
    newNode=avail;
    avail=avail->next;
    newNode->info=value;
    
    if(first == NULL)
    {
        newNode->next=NULL;
        first=newNode;
    }
    
    struct node *ptr=first;
    
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr->next=newNode;
    newNode->next=NULL;
    return;
}
void delete_first()
{
    struct node *ptr;

	if(first == NULL)
	{
		printf("Link List is Empty.");
		return;
	}

	if(first->next = NULL)
	{
		free(first);
		first = NULL;
		return;
	}

	ptr = first ;
	printf("%d  ", ptr->info);
	first = ptr->next;
	free(ptr);
	
}


void main()
{
 	 insert_beginning(15);insert_beginning(75);insert_beginning(32);
 	 display();
	 display();
	 printf("herj");
	 delete_first();
	 printf("herj");
	 display();
	 printf("herj");
//  	 insert_beginning(78);insert_beginning(37);insert_beginning(28);
}
