#include<stdio.h>
#include<stdlib.h>
#include<assert.h>


struct Node
{
	int data;
	struct Node* next;
};

void MoveNode(struct Node** destRef, struct Node** sourceRef);

struct Node* SortedMerge(struct Node* a, struct Node* b)
{
	struct Node dummy;
	struct Node* tail = &dummy;
	dummy.next = NULL;
	while (1)
	{
		if (a == NULL)
		{
			tail->next = b;
			break;
		}
		else if (b == NULL)
		{
			tail->next = a;
			break;
		}
		if (a->data <= b->data)
			MoveNode(&(tail->next), &a);
		else
			MoveNode(&(tail->next), &b);

		tail = tail->next;
	}
	return(dummy.next);
}

void MoveNode(struct Node** destRef, struct Node** sourceRef)
{
	struct Node* newNode = *sourceRef;
	assert(newNode != NULL);
	*sourceRef = newNode->next;
	newNode->next = *destRef;
	*destRef = newNode;
}

void append(struct Node** head_ref, int new_data)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

	struct Node *last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	if (*head_ref == NULL)
	{
	*head_ref = new_node;
	return;
	}
	
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;
	return;	
}
void printList(struct Node *node)
{
	while (node!=NULL)
	{
		printf("%d ", node->data);
		node = node->next;
	}
}

int main()
{
	int i,val,n,m;
	struct Node* res = NULL;
	struct Node* a = NULL;
	struct Node* b = NULL;
    
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&val);
        append(&a,val);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++){
        scanf("%d",&val);
        append(&b,val);
    }
	res = SortedMerge(a, b);
	printList(res);

	return 0;
}
