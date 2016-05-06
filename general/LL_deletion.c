/*
   This proram will delete the node at given position, index will start from 0
*/

# include <stdio.h>
# include <stdlib.h>
struct node
{
	int val;
	struct node * next;
};

typedef struct node * Node;

void push(struct node ** head,int val)
{
	Node new_node=(Node)malloc(sizeof(struct node));
	new_node->val=val;
	new_node->next=(*head);
	*head=new_node;
};

void printList(struct node *node)
{
    while (node != NULL)
    {
        printf(" %d ", node->val);
        node = node->next;
    }
};

void delete(struct node **head,int n )
{
	if(*head==NULL)
		return;

	Node tmp=*head;
	if(n==0)
	{
		*head=tmp->next;
		return;
	}

	int i=0;
	for(i=0;i<n-1 && tmp!=NULL ;i++)
	{
		tmp=tmp->next;
	}

	if(tmp==NULL ||tmp->next==NULL)
		return;

	Node deleted=tmp->next;
	tmp->next=deleted->next;
	free(deleted);
}

int main()
{
	printf("Jai Guru Umesh\n");
	Node head = NULL;
 
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);
    push(&head, 8);

    printList(head);
    printf("\n");
    int n=4;
    delete(&head,n);
    printList(head);
	return 0;
}