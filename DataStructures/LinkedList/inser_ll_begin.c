#include <stdio.h>
#include <stdlib.h>

typedef struct node 
{
    int value;
    struct node *next;
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

void Display(LinkedList node)
{
    LinkedList tempNode = node;
    while (tempNode != NULL)
    {
        printf("%d ", tempNode->value);
        tempNode = tempNode->next;
    }
    printf("\n");
}
void FreeMemory()
{
    LinkedList current=head;
    LinkedList next;
    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
}
int main()
{
    int n;
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &n);
        InsertFirst(n);
    }
    Display(head);
    FreeMemory();
    return 0;
}
