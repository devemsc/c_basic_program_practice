#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    struct node *next;
    struct node *prev;
} NodeType;

typedef NodeType* LinkedList;

LinkedList head = NULL;

LinkedList CreateNode(int data)
{
    LinkedList newNode = (LinkedList)malloc(sizeof(NodeType));
    if (newNode == NULL)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}

void InsertFirst(int data)
{
    LinkedList newNode = CreateNode(data);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
}

void InsertLast(int data)
{
    LinkedList newNode = CreateNode(data);
    if (head == NULL)
    {
        newNode->prev=NULL;
        head = newNode;
    }
    else
    {
        LinkedList ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = newNode;
        newNode->prev = ptr;
    }
}

void Reverse() {
    LinkedList temp=NULL;
    LinkedList curr=head;
    while(curr!=NULL)
    {
        temp = curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL)
    {
        head = temp->prev;
    }
}
void Display(LinkedList node)
{
    for(struct node* i=head;i!=NULL;i=i->next)
    {
        printf("%d", i->value);
        if(i->next) printf(" <--> ");
    }
    printf(" -> NULL \n");
}

void FreeMemory()
{
    LinkedList current = head;
    LinkedList next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}

int main()
{
    // int n;
    // for (int i = 0; i < 5; i++)
    // {
    //     scanf("%d", &n);
    //     InsertLast(n);
    // }
    InsertLast(1);
    InsertLast(2);
    InsertLast(3);
    Display(head);
    Reverse();
    Display(head);
    FreeMemory();
    return 0;
}
