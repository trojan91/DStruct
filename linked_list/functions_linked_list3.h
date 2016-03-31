#include<stdio.h>

void check_equality(struct node *list1,struct node *list2)
{
    int count1=0,count2=0;
    struct node *l1,*l2;
    l1=list1;
    l2=list2;


    printf("i am in check_equality");

    while(l1!=NULL)
    {
        count1++;
        l1=l1->next;
    }
    while(l2!=NULL)
    {
        count2++;
        l2= l2->next;
    }

    if(count1 != count2)
    {
        printf("not equal baby\n");
    }
    else
    {
        l1=list1;
        l2=list2;

        while(l1 != NULL)
        {
            if(l1->data == l2->data)
            {
                l1=l1->next;
                l2=l2->next;
            }

            else
                printf("not equal baby try something new\n");
        }
        printf("\n equal\n");
    }

}

void circular_list(struct node *head)
{
    struct node *p1,*p2,*p3;
    p1=head;
    printf("i am in circular_list");

    while(p1->next != NULL)
    {
        p1= p1->next;
    }

    p1->next = head;

    p1=head;

    while(p1->next != head)
    {
        printf("%d ",p1->data);
        p1=p1->next;
    }


}

void reverse_list(struct node **head)
{

    struct node *p1,*p2,*p3,*new_node;
    p1=p3= *head;
    p2=NULL;

    while(p1 != NULL)
    {
        p3= p1->next;
        p1->next= p2;

        p2=p1;
        p1=p3;

    }

    *head = p2;

}

void sorted_merge(struct node *l1, struct node *l2)
{
    struct node *temp1,*temp2,*merger;

    int count1=0,count2=0;
    temp1= l1;
    temp2 = l2;

    while(l1 != NULL)
    {
        count1++;
        l1=l1->next;

    }

    while(l2 != NULL)
    {
        count2++;
        l2=l2->next;
    }

    l1=temp1;
    l2=temp2;

    merger=(struct node *)malloc(sizeof(struct node) * (count1+count2));

}

void delete_mn(struct node *head, int m,int n)
{
    int i,j;
    struct node *p1,*p2,*p3;
    i=j=0;

    p1=head;
    p2=head;

    while(p1 != NULL)
    {
        while(i<n)
        {
            p1=p1->next;

            if(p1 == NULL)
            {
                break;
            }
            while(j<n-1)
                p2 = p2->next;
            i++;
        }
        j=0;

        while(j<m)
        {
            p2=p1->next;
            free(p1);
            p1=p2;
            j++;
        }
    }
}


void add_linked_list(struct node *l1, struct node *l2)
{
    struct node *new_list,*l3,*l4;
    int carry=0,count1=0,count2=0,i=0;

    l3=l1;
    l4=l2;

    while(l3!=NULL)
    {
        count1++;
        l3 = l3->next;
    }

    while(l4 != NULL)
    {
        count2++;
        l4 = l4->next;
    }
    l3=l1;
    l4=l2;
    if(count1>count2)
    {
        new_list = (struct node *)malloc(sizeof(struct node) * (count1+1));

        while(l3 != NULL)
        {
            if(l4 != NULL)
            {
                new_list->data = l3->data + l4->data +carry;
                if (new_list->data > 10)
                {
                carry = (new_list->data - (new_list->data % 10))/10;
                }
                else
                {
                carry = 0;
                }
                i++;
                new_list->next = (new_list+i);

            }

            else
            {
                new_list->data = l3->data +carry;
                if (new_list->data > 10)
                {
                carry = (new_list->data - (new_list->data % 10))/10;
                }
                else
                {
                carry = 0;
                }
                i++;
                new_list->next = (new_list+i);

            }


        }
    }
    else if(count2>count1)
    {
        new_list = (struct node *)malloc(sizeof(struct node) *(count2+1));

        while(l4 != NULL)
        {
            if(l3 != NULL)
            {
                new_list->data = l3->data + l4->data +carry;
                if (new_list->data > 10)
                {
                carry = (new_list->data - (new_list->data % 10))/10;
                }
                else
                {
                carry = 0;
                }
                i++;
                new_list->next = (new_list+i);
            }

            else
            {
                new_list->data = l4->data +carry;
                if (new_list->data > 10)
                {
                carry = (new_list->data - (new_list->data % 10))/10;
                }
                else
                {
                carry = 0;
                }
                i++;
                new_list->next = (new_list+i);
            }


        }
    }
    else
    {
        new_list = (struct node *)malloc(sizeof(struct node) * (count1+1));
        while(l4 != NULL)
        {



                new_list->data = l4->data +l3->data+carry;
                if (new_list->data > 10)
                {
                carry = (new_list->data - (new_list->data % 10))/10;
                }
                else
                {
                carry = 0;
                }
                i++;
                new_list->next = (new_list+i);


        }
    }



}

void union_intersection(struct node *list1,struct node *list2)
{

    struct node *temp1, *temp2,*union_list, *intersect;
    struct node *new_list1,*new_list2;

    temp1 =l1,temp2=l2;

    while(temp1 != NULL)
    {

        while(temp2 != NULL)
        {
            if(temp1->data == temp2->data)
            {
                new_list2=(struct node *)malloc(sizeof(struct node));

                new_list2->data= temp->data;
                new_list2 = new_list2->next;

            }
            new_list2 =NULL;
        }
    }

    for(temp1=l1;temp1!=NULL;temp1 = temp->next)
    {

        while(new_list != NULL)
        {
            if(new_list->data == temp->data )
            break;

            else
                new_list1 = new_list1->next;

        }
    }
}

void list_length(struct node *head)
{
    static int i;

    if(head != NULL)
    {
        i++;
        head = head->next;
        list_length(head);
    }
    else
    {
        printf("%d",i);

    }
    return;
}

void swap_node_nodata(struct node **head,int data1,int data2)
{
    struct node *p1,*p2,*temp=NULL;

    p1=*head;
    p2=*head;

    if(p1->data == head->data)
    {
        while(p2->next->data != data2)
        {
        p2= p2->next;
        }

        temp= p2->next->next;
        p2->next->next = p1->next;
        *head = p2->next;
        p2->next = p1;

    }
  else
    {
    while(p1->next->data != data1)
    {
        p1=p1->next;
        p2=p2->next;

    }
    while(p2->next->data != data2)
    {
        p2= p2->next;
    }

    temp=p2->next->next;
    p2->next->next = p1->next->next;
    p1->next->next =temp;

    temp = p1->next;
    p1->next = p2->next;
    p2->next =temp;

    }

}

void nth_node(struct node *head, int node_n)
{
    struct node *p1;

    p1=head;

    while(node_n>0)
    {
      p1=p1->next;

    }
    printf("the nth node is %d",p1->data);
    return;
}

void middle_node(struct node *head)
{
    struct node *p1,*p2;
    p1=p2=head;

    if(p2->next == NULL || p2->next->next == NULL)
    {
        printf("the middle node is %d\n",p2->data);

    }

    else
        {
    while(p2 != Null)
    {
        p2=p2->next;

        if(p2->next != NULL)
        {
            p1=p1->next;
            p2=p2->next;
        }
    }

          printf("the middle node is %d\n",p1->data);

        }
}

void nth_end_node(struct node *head,int node_n)
{
    struct node *p1,*p2;
    p1=p2=head;

    while(node_n>0)
    {
        p2=p2->next;
    }

    while(p2!= NULL)
    {
        p2=p2->next;
        p1=p1->next;
    }

    printf("the nth node from the end is %d\n",p1->data);


    return;
}

void delete_linked_list(struct node **head)
{
    struct node *p1;

    while(*head!=NULL)
    {
        p1=*head;
        *head = (*head)->next;
        free(p1);
    }

    printf("linked list deleted\n");
    return;

}

void count_data(struct node *head,int data)

{
    int count1=0;
    struct node *p1=head;

    while(p1!=NULL)
    {
        if(p1->data == data)
        {
            count1++;

        }
        p1 = p1->next;
    }
    printf("the data found %d times\n",count1);
}

void detect_loop(struct node *head)
{
    struct node *p1,*p2;

    p1=head;
    p2=p1->next;

    while(p2 != NULL)
    {

        while(p1 != p2)
        {
            if(p2->next == p1)
            {
                printf("loop found\n");
                return;
            }
            else
                p1= p1->next;

        }

        p2 = p2->next;
    }

    printf("no loop found\n");
}


void sorted_add_into_list(struct node **head,int data);
{
    struct node *p1,*new_node=(struct node *)malloc(struct node);

    new_node->data = data;
     *p1=head;

     if(data <= p1->data)
     {
          p1->next = (*head)->next ;
         *head = p1;
     }
     else{
        while((p1!=NULL) && (data < p1->data))
        {
            p1=p1->next;
        }
        new_node->next = p1->next;
        p1->next = new_node;
     }

     return;


}


void doubly_linked_list(void)
{
    struct d_node{
    int data;
    struct d_node *prev;
    struct d-node *next;
    }doubly;

    struct d_node *p1=NULL,*p2=NULL;
    int i,j;

    printf("select the operation you want to do and the data\n");

    scanf("%d%d\n",&i,&data);

    if(p1 == NULL)
        {
            p1=(struct d_node *)malloc(sizeof(struct node));
            p1->data = data;
            p1->prev = NULL;
            p1->next = NULL;

        }
    switch (i)
    {
    case 1:


            p2=(struct d_node *)malloc(sizeof(struct node));
            p2->data = data;
            p2->next = p1;
            p1->prev = p2;
            p2->prev = NULL;
            p1 = p2;
            break;

    case 2:
            p2 =(struct d_node *)malloc(sizeof(struct node));
            p2->prev = p1;
            p2->next = p1->next;
            p2->data = data;
            break;
    case 3:
            p2= (struct d_node *)malloc(sizeof(struct node));
            p2->next = p1;
            p2->prev = p1->prev;
            p2->data = NULL;
            break;
    case 4:
            p2 = (struct d_node *)malloc(sizeof(struct node));
            p2->next = NULL;
            p2->prev = p1;
            p2->data = data;
            break;

    default:

        printf("out of scope\n");
    }


}


void doubly_delete(struct d_node **head,int data)
{
    struct d_node *p1,*p2;
    p1=*head;


    while(p1!=NULL)
    {
        if(p1->data == data)
        {
            if(p1->prev == NULL)
            {
                *head = p1->next;
                free(p1);
            }
            else
            {
                p1->prev->next = p1->next;
                free(p1);
            }
        }

        p1 = p1->next;
    }
}


void reverse_doubly(struct node **head)
{
    struct node *p1,*p2;

    p1=p2=head;
    while(p2!=NULL)
    {
        p1=p1->next;
        if(p2 == *head)
        {
            p2->next = NULL;
            p2->prev = p1;
        }

        else{

            p2->next = p2->prev;
            p2->prev = p1;

        }
    }



}


void doubly_swap_kth(struct node *head,int k)
{
    struct node *p1,*p2,*p3;

    p1=p2 = head;

    while(p2 ! = NULL)
    {
        p2=p2->next;
    }

    while(k>1)
    {
        p1=p1->next;
    }
    while(k<2)
    {
        p2= p2->prev;
    }

     p3->next =  p1->next->next;
     p3->prev = p2->prev->prev;

     p1->next->next->prev = p2->prev;
     p2->prev->prev->next = p1->next;
     p1->next = p2->prev;
     p1->next->prev = p1;

     p1->next->next = p3->next;
     p2->prev = p2->prev->prev->next;
     p2->prev->next = p2;

     p2->prev->prev p3->prev;


}

















