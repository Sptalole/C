// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
    struct node *prev;
} Node;

Node *start = NULL;

void create_node(int data)
{
    Node *q, *tmp;

    tmp = (Node *)malloc(sizeof(Node));
    tmp->data = data;
    tmp->next = NULL;

    if (NULL == start)
    {
        tmp->prev = NULL;
        start = tmp;
    }
    else
    {
        q = start;
        while (q->next != NULL)
        {
            q = q->next;
        }
        q->next = tmp;
        tmp->prev = q;
    }
    return;
}

void display()
{
    Node *q;
    if (start == NULL)
    {
        printf("List is Empty");
        return;
    }
    q = start;
    while (q != NULL)
    {
        printf("{ [%p | %d | %p] }%p--->\n", q->prev, q->data, q->next, q);
        q = q->next;
    }
    printf("\n");
    return;
}

void addatbeg(int data)
{
    Node *tmp;
    tmp = (Node *)malloc(sizeof(Node));
    tmp->data = data;
    tmp->prev = NULL;

    if (NULL == start)
    {
        start = tmp;
        tmp->next = NULL;
        return;
    }
    else
    {
        tmp->next = start;
        start->prev = tmp;
        start = tmp;
    }
}
void addafterpos(int data, int pos)
{
    Node *q, *tmp;
    if (NULL == start)
        return;
    else
    {
        q = start;
        for (int i = 0; i < pos - 1; i++)
            q = q->next;

        tmp = (Node *)malloc(sizeof(Node));
        tmp->data = data;
        tmp->next = q->next;
        tmp->prev = q;
        q->next = tmp;
        tmp->next->prev = tmp;
    }
}

int main()
{
    create_node(10);
    create_node(20);
    create_node(30);
    create_node(40);
    display();
    addatbeg(5);
    display();
    create_node(45);
    display();
    addafterpos(35, 4);
    display();
    create_node(50);
    create_node(60);
    create_node(70);
    create_node(80);
    display();
    addafterpos(65, 9);
    display();

    return 0;
}