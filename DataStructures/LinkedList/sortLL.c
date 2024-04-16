#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

struct node* CreateNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        exit(EXIT_FAILURE);
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

void Insert(struct node** head, int data)
{
    struct node* newNode = CreateNode(data);
    if(*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        struct node* temp = *head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void Display(struct node* head)
{
    struct node* current = head;
    while(current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
void swap(struct node* a, struct node* b)
{
    int temp = a->data;
    a->data=b->data;
    b->data=temp;
}
struct node* Sorting(struct node **ptr)
{
    struct node* current=*ptr;
    struct node* lastsorted=NULL;
    int hold;
    do{
        hold=0;
        current=*ptr;
        while(current->next!=lastsorted)
        {
            if(current->data>=current->next->data)
            {
                swap(current, current->next);
                hold=1;
            }
            current=current->next;
        }
        lastsorted=current;
    }while(hold);
}
int main()
{
    struct node* head = NULL;

    // Insert nodes into the linked list
    Insert(&head, 9);
    Insert(&head, 5);
    Insert(&head, 7);
    Insert(&head, 1);
    Insert(&head, 2);

    // Display the linked list
    Display(head);
    Sorting(&head);
    Display(head);
    // Free memory allocated for the linked list nodes
    struct node* current = head;
    struct node* next;
    while(current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
