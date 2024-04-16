#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node* next;
}NodeType;

typedef NodeType* LinkedList;

LinkedList CreateNode(int data)
{
    LinkedList newNode = (LinkedList)malloc(sizeof(NodeType));
    if(newNode==NULL)
    {
        exit(EXIT_FAILURE);
    }else
    {
        newNode->data=data;
        newNode->next=NULL;
    }
    return newNode;
}
void InsertNode(LinkedList *head, int data)
{
    LinkedList newNode = CreateNode(data);
    if(*head==NULL)
    {
        *head=newNode;
    }else
    {
        LinkedList tmp = *head;
        while(tmp->next!=NULL)
        {
            tmp=tmp->next;
        }
        tmp->next=newNode;
    }
}
void PrintList(LinkedList head)
{
    LinkedList tmp=head;
    while(tmp!=NULL)
    {
        printf("%d ", tmp->data);
        tmp=tmp->next;
    }
    printf("\n");
}
void FreeMem(LinkedList *head)
{
    LinkedList current = *head;
    LinkedList next;
    while(current!=NULL)
    {
        next=current->next;
        free(current);
        current=next;
    }
    *head=NULL;
}
void ReverseList(LinkedList *head)
{
    LinkedList prev=NULL;
    LinkedList current=*head;
    LinkedList next=NULL;
    while(current!=NULL)
    {
        next=current->next;
        current->next=prev;
        prev=current;
        current=next;
    }
    *head=prev;
}
LinkedList AddTwo(LinkedList *head1, LinkedList *head2)
{
    LinkedList var=NULL;
    LinkedList tmp = *head1;
    LinkedList temp = *head2;
    while(tmp!=NULL && temp!=NULL)
    {
        InsertNode(&var, tmp->data+temp->data);
        tmp=tmp->next;
        temp=temp->next;
    }
    return var;
}
void AddNumber(LinkedList *head, int data)
{
    int rem;
    while(data!=0)
    {
        rem=data%10;
        InsertNode(head, rem);
        data/=10;
    }
}
LinkedList SumTwo(LinkedList *head1, LinkedList *head2)
{
    LinkedList var=NULL;
    LinkedList temp1=*head1;
    LinkedList temp2=*head2;
    int carry;
    while(temp1!=NULL||temp2!=NULL || carry!=0)
    {
        int sum = (temp1?temp1->data:0)+(temp2?temp2->data:0)+carry;
        carry=sum/10;
        sum%=10;
        InsertNode(&var, sum);
        if(temp1)temp1=temp1->next;
        if(temp2)temp2=temp2->next;
    }
    return var;
}
int main()
{
    LinkedList head1=NULL;
    LinkedList head2=NULL;
    int a, b, digit;
    printf("Enter the digit of the lists: ");
    scanf("%d", &digit);
    printf("Enter the first list %d digit Number: ", digit);
    scanf("%d", &a);
    AddNumber(&head1, a);
    PrintList(head1);
    printf("Enter the second list %d digit Number: ", digit);
    scanf("%d", &b);
    AddNumber(&head2, b);
    PrintList(head2);
    LinkedList res = SumTwo(&head1, &head2);
    PrintList(res);
    FreeMem(&head1);
    FreeMem(&head2);
    FreeMem(&res);
    return 0;
}