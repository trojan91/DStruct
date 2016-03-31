#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include"functions_linked_list.h"
#include"functions_linked_list2.h"
#include"functions_linked_list3.h"
int main()
{
    struct node *head =NULL;
    struct node *body =NULL;
    struct node *tail=NULL;
    int value;
    head=(struct node*)malloc(sizeof(struct node));
    body=(struct node*)malloc(sizeof(struct node));
    tail=(struct node*)malloc(sizeof(struct node));

    head->data=1;
    head->next= body;

    body->data=2;
    body->next=tail;

    tail->data=3;
    tail->next=NULL;

    printlist(head);
    printf("\n");
   /* insert_front(&head);
    printlist(head);
    printf("\n");
    insert_middle(head);
    printlist(head);
    printf("\n");
    */
    printf("enter the number of  value you need to insert\n");
    scanf("%d",&value);
    while(value>0)
    {
            insert_end(head);
            value--;
    }
  /*  loop_maker_linked_list(&head);

    printlist(head);
    printf("\nenter the value you want to search\n");
    scanf("%d",&value);
    value=search(head,value);

    (value==1)?printf("\nprensent\n"):printf("\nno data found\n");

    printf("\nenter the value you want to search\n");
    scanf("%d",&value);
    value=func_search(head,value);
    (value==1)?printf("\nprensent\n"):printf("\nno data found\n");
    printlist(head);
    printf("\n");
    value=find_loop(head);
    if(value==1)
    {
    printf("contact Bamboo Inc Engineer to change the code\n");

    }
  /*  scanf("%d",&value);
  /*  delete_node(head,value);
    printlist(head);


    delete_middle_node(body);

    reverseview_list(head);

*/
/*printlist(head);
printf("\n");
/*sorted_remove_duplicates(head);
*/
/*
del_alternate(head);
printlist(head);

printf("i am alternate\n\nenter the number of  value you need to insert\n");
    scanf("%d",&value);
    while(value>0)
    {
            insert_end(head);
            value--;
    }

printf("\n");
alternatesplit_linked_list(head);


create(5,5);

circular_list(head);
*/

reverse_list(&head);

delete_mn(head,2,1);
printlist(head);

return 0;

}

