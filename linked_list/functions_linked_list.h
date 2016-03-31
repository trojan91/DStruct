#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
 struct node
{
    int data;
    struct node *next;
};

void printlist(struct node* head)
{

                printf("i am in printlist\n");

    while(head != NULL )
    {
        printf("%d ",head->data);
        head = head->next;
    }

}
void insert_front(struct node** head)
{
    struct node* front =NULL;
    int data;
                printf("i am in insert_front\n");

    printf("enter data to insert in the front\n");
    scanf("%d",&data);
    front = (struct node*)malloc(sizeof(struct node));
    front->data=data;
    front->next=*head;
    *head = front;

}
void insert_middle(struct node *head)
{
    struct node* middle=NULL;
    struct node* p;
    int data;

                printf("i am in insert_middle\n");

    printf("enter data to insert in the middle\n");
    scanf("%d",&data);

    middle= (struct node*)malloc(sizeof(struct node));
    middle->data=5;
    while(head->data != 2)
    {
        head = head->next;
    }
    p=head->next;
    head->next=middle;
    middle->next=p;

}
void insert_end(struct node *head)
{
    int data_new;
    struct node* end;

                printf("i am in insert_end\n");

    end= (struct node *)malloc(sizeof(struct node));
        printf("enter data to insert in the end\n");

    scanf("%d",&data_new);
    end->data=data_new;
    while( head->next != NULL )
    {
        head= head->next;
    }

    head->next=end;

    end->next=NULL;

}

void delete_node(struct node *head, int data)
{
    struct node *temp1,*temp2;
            printf("i am in delete_node\n");

    while(head->data != data)
    {
        temp1=head;
        head=head->next;
    }
    head=head->next;
    temp2=temp1;
    temp1 = head;
    head=temp2;
    head->next=temp1;
}

bool search(struct node *head,int data)
{
                printf("i am in search\n");

    while(head != NULL)
    {
        if(head->data == data)
        {
            return true;
        }
        head= head->next;
    }

    return false;

}
bool func_search(struct node *head,int data)
{

                printf("i am in fun_search\n");

    if(head != NULL)
    {
       if (head->data == data)
            return true;
       else
       {head=head->next;
                                            func_search(head,data);
       }
    }
    else
        return false;
}

void loop_maker_linked_list(struct node **head )
{
    struct node *p,*p2,*p3,*prev;
    int count1,init;

                printf("i am in loop_maker_linked_list\n");

    p=p2=p3=prev=*head;

    printf("\nenter the node you want to point to the end of the list\n");
    scanf("%d",&count1);
    init=0;
    while(p3!=NULL)
    {
        if(init == 1)
        {
            prev=prev->next;
        }
        printf("%d\n",p3->data);
        p3=p3->next;
        init=1;
    }
    while(count1>0)
    {
        p=p->next;
        count1--;
        printf("%d\n",count1);
    }
    prev->next=p;

 /*   while(p2!=NULL)
    {
        printf("%d\n",p2->data);
        p2=p2->next;
    }
    */
    free(p);
    free(p2);
    free(p3);
    free(prev);
}



int find_loop(struct node *head)
{
    /*   need implementation /////////////////  /
    struct node* p1;
    int count1;

    int *a,i=0,n=1,j=0,k=0;
    a=(int *)malloc(10*sizeof(int));

    while(p1!=NULL)
    {
        p1=p1->next;
        if(i==10)
        {
            n++;
            a= (int *)realloc(a,(10*n)*sizeof(int));
            i=0;
        }
        (a+j)=(int *)(*p1)next;
        j++;
        i++;
        for(k=0;k<j;k++)
        {
            if((a+k)==(int *)p1->next)
            {
                printf("you are in a loop\n");
                return 1;
            }
        }
    }
    printf("sorry no loop found\n");
*/
}


void flatten_single_level(void)
{
    struct node {
    struct node *down;
    struct node *right;
    int data;

    }doubly;
    doubly *p1,*p2,*p3,*temp;
    int i,j,k;

    while(p2->right != NULL || p1->down !=NULL)
    {
        while(p2->right != NULL || p1->down !=NULL)
        {
            if(p2->right != NULL)
            {
                p2->p2->right;

            }
            temp = p2;
            if(p1->data <= p2->data)
            {

                if(p2->down != NULL)
                {
                    p1->right = p2->down;
                    p2->down->right = p2->right;
                    temp->down = p1->down;

                    p1->down = temp;
                    temp->right = NULL;

                }

                else
                {
                    temp = p2;
                    p1->right = p2->right;
                    temp->down p1->down;
                    p1->down = temp;
                }
            }
        }

    }

}

void merge_alternate_position(struct node *l1,struct node **l2)
{
    struct node *p1,*p2,*p3;
    int i,j,k,temp;

    p1=l1;
    p2=*l2;
    i=0;

    while(p1!=NULL)
    {
        if(i==0)
        {
            temp = p2->next;
            p2->next = p1-.next;
            p1->next = p2;
            p2 =temp;
            *l2 p2;
            i=1;

        }

        else if(i==1)
        {
            p1 = p1->next;
            i=2;
        }
        else
        {
            p1 = p1->next;
            i=0;
        }
    }

    temp = p2->next;
    p2->next = p1->next;
    p1->next =p2;
    p2=temp;

    *l2 = p2;

    p1->next = NULL;
}


void sum_triplet(struct node *l1,struct node *l2,struct node *l3,int data)
{
    struct node *p1,*p2,*p3;

    p1=l1,p2=l2,p3=l3;

    while(p1!=NULL)
    {
        while(p2!=NULL)
        {
            while(p3!=NULL)
            {
                if(p1->data + p2->data +p3->data == data)
                {
                    printf("%d %d %d\n",p1->data,p2->data,p3->data);
                    return;
                }
                else
                {
                    p3->p3->next;
                }
            }
            p2= p2->next;
            p3=l3;
        }

        p1 = p1->next;
        p2 = l2;

    }

    printf("the data not found\n");

    return;
}

void reverse_group(struct node **head,int k)
{
    struct node *p1,*p2,*p3,*temp;

    int count0=0,length=0,i=0;

    p3=p2=NULL;

    p1 = *head;

    while(p1!=NULL)
    {
        p1=p1->next;
        length++;
    }
    p1=*head;
    while(i<length)
    {
        while(count0<k-1)
        {
            if(count0==0)
            {
                p2 = p1->next;
                p3 = p2->next;
                p2->next = p1;
                p2 =p3;
                p3 = p3->next;
            }

            else {
                p2->next = p1;
                p1 =p2;
                p2 = p3;
                p3 = p3->next;
            }
        }

        if(length == 0)
        {
            *head = temp;

        }

        temp =p2;
        count0++;
    }

}


void reverse_alternate_group(struct node **head, int k)
{

    struct node *p1,*p2,*p3,*temp;

    int count0=0,i=0,j=0,length=0;

    p3=p2=NULL;

    p1 = *head;
    while(p1!=NULL)
    {
        p1 = p1->next;
        length++;
    }
    p1 = *head;
    while(i< length)
    {

        while(count0 < k-1)
        {

            if(count0%2 == 1)
        {
            j=0;
            while(j<k)
            {
                p3 = p3->next;
            }
            p1 = p3;
            p2 = p1->next;
            p3 = p2->next;
        }
            if(count0 == 0)
            {
                p2= p1->next;
                p3 = p2->next;
                p2->next = p1;
                p1= p2;
                p2 = p3;
                p3 = p3->next;
            }

            else
            {
                p2->next = p1;
                p1 = p2;
                p2 = p3;
                p3 = p3->next;
            }
            count0++;
            if(i==0)
            {
                *head = temp;
            }

            temp = p2;
        }
        i++;

    }
}


void seggregate_even_odd(struct node **head)
{
    struct node *p1,*p2,*p3,*temp;

    p1=p2=p3=head;
    temp=NULL;
    p1=p2->next;

    while(p1 != NULL)
    {
        if(p2->data%2 == 0)
        {
            temp = p2;

         if(p1->data%2 == 0)
        {
            while(temp->next->data%2 != 0)
            {
                temp = temp->next;
            }
            p3=p1;
            temp->next->next = p3->next;
            p1= p1->next;
            p3->next = temp->next;
            temp->next = p3;
        }
        else
        {
            p1=p1->next;
        }
        }

        else
        {
            temp = p2;
            while(temp!=NULL)
            {
                if(temp->next->data%2 == 0)
            {
                p3=temp->next;
                temp->next = p3->next;
                p3->next = p2;
                *head = p3;
            }

            else
            {
                temp = temp->next;
            }
            }


        }

    }

}


void sort_0s_1s_2s(struct node **head)
{
    struct node *current,*temp,p1;
    current=head;
    p1=current->next;
    while(p1!=NULL)
    {
        temp =p1;
        p1 = p1->next;
        current->next->next= temp->next;
        temp->next =current->next;
        current->next = temp;
    }
}


void maximum_sum_line(struct node *l1,struct node *l2)
{
    struct node *p1,*p2,*p3,*new_node;
    p1 =l1;
    p2=l2;

    while(p1 != NULL || p2 != NULL)
    {
        if(p1->data > p2->data)
        {


            while(p2->data <= p1->data)
            {
                new_node = (struct node *)malloc(sizeof(struct node));
                new_node->data = p2->data;
                new_node->next = p2->next;
                p2 = p2->next;

            }
        }

        else
        {
            if(p1->data <p2->data)
            {
                while(p1->data <= p2->data)
                {
                    new_node=(struct node *)malloc(sizeof(struct node));
                    new_node->data = p1->data;
                    new_node->next = p1->next;

                    p1=p1->next;
                }
            }
        }
    }
}


void swap_pair(struct node **head)
{
    struct node *p1,*p2,*forwad;
    p1=head;
    p2=p1->next;

    while(p1 != NULL)
    {
        forwad = p2->next;
        p2->next = p1;
        p1->next = forwad;

        p1= forwad;
        p2 = forwad->next;
    }
}

void delete_middle_line(struct node *head)
{
    struct node *p1,*p2,*p3;

    p1= head;
    p3 = p1->next;
    while(p3->y == p1->y)
    {
        p3=p3->next;

    }

    p2= p1->next;
    while(p2!=p3)
    {
        p1->next = p2->next;
        free(p2);
        p2 = p1->next;
    }

    p1 = p3->ext;
    p3 = p1->next;

    while(p3 != NULL)
    {

        p3=p3->next;
    }
    p2=p1->next;
    while(p2!=p3)
    {

        p1->next = p2->next;
        free(p2);
        p2 = p1->next;
    }
}


void rearrange(struct node *head)
{
    struct node *p1,*p2,*p3;
    int length=0;
    p1=p3=head;

    while(p3!=NULL)
    {
        p3=p3->next;
        length++;
    }
    length = length/2;
    p3=head;
    while(length>0)
    {
        p3=p3->next;
        length--;
    }

    while(p1!=p3)
    {
        p2=p3;
        while(p2->next->next!=NULL)
        {
            p2=p2->next;
        }
        p2->next->next = p1->next;
        p1->next = p2->next;
        p2->next = NULL;
        p2 = p3;
        p1=p1->next-.next;

    }

}










