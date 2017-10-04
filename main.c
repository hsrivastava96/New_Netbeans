#include<stdio.h>
#include<stdlib.h>

struct pol
{
    int coefficient, power;
    struct pol *next;
};
typedef struct pol node;

node * create()
{
    node *head;
    int choice;
    do
    {
        node *ob, *temp;
        ob=(node *)malloc(sizeof(node));
        printf("\nPlease enter the power --> ");
        scanf("%d", &ob->power);
        printf("\nPlease enter the coefficient --> ");
        scanf("%d", &ob->coefficient);
        if(head==NULL)
            head=ob;
        else
            temp->next=ob;
        temp=ob;
        ob->next=head;
        printf("\n1. Next element.\n2. Exit\nPlease enter your choice --> ");
        scanf("%d", &choice);
    }
    while(choice==1);
    return head;
}

int main()
{
    node *h1, *h2;
    printf("\nPlease enter first polynomial.....\n");
    h1=create();
    return 0;
}