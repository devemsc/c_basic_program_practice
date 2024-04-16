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

void InsertLast(int data)
{
    LinkedList newNode = CreateNode(data);
    if (head == NULL)
    {
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
    LinkedList current = head;
    LinkedList next;
    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
LinkedList Find(LinkedList *head, int n)
{
    if(head==NULL)
    {
        return NULL;
    }
    LinkedList firstPtr=*head;
    LinkedList secondPtr=*head;
    
    for(int i=1;i<=n;i++)
    {
        if(firstPtr==NULL)
        {
            return NULL;
        }
        firstPtr = firstPtr->next;
    }
    printf(">%d< ", firstPtr->value);
    while(firstPtr!=NULL)
    {
        firstPtr = firstPtr->next;
        secondPtr = secondPtr->next;
    }
    return secondPtr;
}
int main()
{
    int n;
    LinkedList ptr;
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &n);
        InsertLast(n);
    }
    Display(head);
    ptr = Find(&head, 2);
    printf("%d", ptr->value);
    FreeMemory();
    return 0;
}
