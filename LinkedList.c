#include <string.h >

//Linked list node
struct node {
int info;
struct node* link;
}*start;

create_list(int data){
    struct node *q , *tmp;
    tmp = malloc(sizeof(struct node));
    tmp -> info = data;
    tmp -> link = NULL;

    if(start == NULL)
        start = tmp;
    else
    {
        q = start;
        while(q -> link != NULL) /*Traverse the linked list and go to end of list*/
            q = q->link;

        q->link = tmp;
    }
}


addatbeg(int data){
    struct node *q, *tmp;
    tmp = malloc(sizeof(struct node));
    tmp -> info = data;
    tmp-> link = start;
    start = tmp;
}


addafter(int data, int pos){
    struct node *q, *tmp;
    q = start;

    for (int i = 0 ; i < pos - 1; i++)
    {
        q = q-> link;
        if (q==NULL)
        {
            printf("Less element are present in the linked list than selected position\n");
            return;
        }
    }
    tmp = malloc(sizeof(struct node));
    tmp -> info = data;
    tmp -> link = q-> link;
    q-> link = tmp;
}


del(int data){
    struct node *tmp, *q;
    if(start->info == data)
    {
        tmp =start;
        start = start -> link ;
        free(tmp);
        return;
    }
    q=start;
    while(q->link->link!=NULL)
        {
            if(q->link->info == data)
            {
                tmp = q->link;
                q->link= tmp->link;
                free(tmp);
                return;
            }
            q= q->link;
        }
        if(q->link->info ==data)
        {
            tmp = q->link;
            free(tmp);
            q->link = NULL;
            return;
        }
        printf("Element %d not found\n",data);
}

display(){
    struct node *q;
    if(start==NULL)
    {
        printf("List is Empty");
        return;
    }
    q= start;
    printf("List is \n");

    while(q!=NULL)
    {
        printf("[ %d | %lu ]---->",q->info,q->link);
        q= q->link;
    }
    printf("\n");
}

search(int data){
    struct node *ptr = start;
    int pos = 1;
    while(ptr!=NULL)
    {
        if(ptr->info ==data)
        {
            printf("Item %d found at position %d\n",data,pos);
            return;
        }
        ptr = ptr->link;
        pos++;
    }
    if(ptr==NULL)
        printf("Item %d not found in list\n",data);
}


move(int data1, int data2){
   struct node *tmp, *o ,*p,*q;
    q = start;
    while(q->link->link!=NULL){
        if(q->link->info == data1){
            tmp = q;
            p = tmp->link;
            tmp->link= q->link->link;
            //q->link->link =NULL;
            break;
        }
        q = q->link;
    }
     while(q->link->link!=NULL){
        if(q->link->info == data2){
            break;
        }
        q=q->link;
    }
    q = start;
    tmp = q->link->link;
    o = tmp -> link;
    tmp->link = p ;
    tmp->link->link = o;

/* Simplest solution for 5 element node and move 2nd node in between 4th and 5th one*/
    /*
    struct node *first, *second, *third, *fourth, *fifth;
    first = start;
    second = first->link;
    third = second->link;
    fourth = third->link;
    fifth = fourth->link;

    fourth->link = second;
    first->link = third;
    second->link = fifth;

*/
return;
}

int main ()
{
  int n,position,m,choice=0;
  int x,y,z;
while(1)
{
    printf("1.Create List\n") ;
    printf("2.Add at beginning\n");
    printf("3.Add after \n");
    printf("4.Delete\n");
    printf("5.Display\n");
    printf("6.Search\n");
    printf("7.Move\n");
    printf("8.Quit\n") ;
    printf("Enter your choice\n") ;
    scanf("%d",&choice);

  switch(choice){
  case 1:
      printf("Creating the linked list\n");
      start = NULL;
      printf("How many node you want to create\n");
      scanf("%d", &n);
      for(int i = 0 ; i < n ; i++)
      {
          printf("Enter the %d element\n", i);
          scanf("%d",&m);
          create_list(m);
      }
      break;

  case 2:
        printf ("Enter the element\n");
        scanf ("%d" ,&m) ;
        addatbeg(m) ;
        break;

  case 3:
        printf ("Enter the element\n");
        scanf ("%d" ,&m) ;
        printf ("Enter the position after which this element inserted\n");
        scanf("%d",&position);
        addafter(m,position);
        break;

  case 4:
        if (start==NULL)
        {
            printf ("List is empty\n");
            continue;
        }
        printf ("Enter the element\n");
        scanf("%d" ,&m) ;
        del(m) ;
        break;

    case 5:
        display ( ) ;
        break;
    case 6:
        printf ("Enter the element\n");
        scanf("%d", &m) ;
        search(m) ;
        break;
    case 7:
        printf("Moving 2nd element in between 4th and 5th\n");
        printf("Enter the element which you want to move and after which node you want to insert\n\n")
        scanf("%d %d",&x,&y);
        move(x,y);
        break;
    case 8:
        exit(0) ;
    default:
        printf ("Wrong choice\n");
        }/*End of switch*/
    }/*End of while*/
}/*End of main() */
