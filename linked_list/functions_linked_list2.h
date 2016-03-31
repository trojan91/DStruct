#include<stdio.h>
#include<stdlib.h>
void check_equality(struct node *, struct node *);
void delete_middle_node(struct node* del_node)
{
        struct node* next_node;
            printf("i am in delete_middle_node\n");

        next_node = del_node->next;

        del_node->data = next_node->data;
        del_node->next = next_node->next;

        free(next_node);

        printf("deleted\n");

}
void join_linked_list(struct node *linked_one,struct node *linked_two,int join)
{
    int length1,length2,two_join;
    struct node *p1,*p2;

            printf("i am in join_linked_list\n");

    printf("enter rthe node of the linked list  two from which the node is to be joined\n");

    scanf("&d",&two_join);

    p1=linked_one;
    p2=linked_two;

    while(join>1)
    {
        p1=p1->next;
        join--;
    }
    while(two_join>1)
    {
        p2=p2->next;
        two_join--;
    }
    p2=p1;

}


void create(int length1, int length2)
{
    struct node *linked_one,*linked_two,*p1,*p2;
    int join,l1,l2;
                printf("i am in create\n");

    linked_one=(struct node*)malloc(sizeof(struct node));
    linked_two=(struct node *)malloc(sizeof(struct node));
    linked_one->next=NULL;
    linked_two->next=NULL;
    linked_one->data=1;
    linked_two->data=1;
    p1=linked_one;
    p2=linked_two;
    printf("enter elements for linked list 1\n");
    while(length1>0)
    {
        insert_end(linked_one);
        length1--;
    }
    printf("enter elements for linked list 2\n");
    while(length2>0)
    {

        insert_end(linked_two);
        length2--;
    }
 /*   printf("enter the node from which it will be joined\n");
    scanf("%d",&join);
    join_linked_list(linked_one,linked_two,join);
    */
    check_equality(p1,p2);

}


void reverseview_list(struct node *head)
{
                printf("i am in reverseview_list\n");

    if(head == NULL)
        return;
    reverseview_list(head->next);
    printf("%d ",head->data);

}

void sorted_remove_duplicates(struct node *head)
{
    int rem_data;
    struct node *new_list,*del_node;
    rem_data=head->data;
    new_list=head;

                printf("i am in sorted_remove_duplicates\n");

    while(head!=NULL)
    {
        head=head->next;
        del_node=head;
        if(head->data == rem_data)
        {
            head=head->next;
            new_list->next = head;
            free(del_node);
        }
        else
        {
            rem_data =  head->data;
            head = head->next;
            new_list = new_list->next;
        }
    }
}

void del_alternate(struct node *head)
{
    int count1=0;
    struct node *del_node,*prev;
    del_node=prev=head;

                printf("i am in del_alternate\n");

    while(del_node!=NULL)
    {
        if(count1 == 0)
        {
            del_node=del_node->next;

            count1 = 1;
        }

        else{
                prev->next=del_node->next;
        free(del_node);
        del_node=prev->next;
        prev=del_node;
            count1=0;
        }

    }

    if(count1==1 && del_node ==NULL)
    {
        prev->next=NULL;
        free(del_node);
    }
}

void swap_pair(struct node *head)
{
}

void alternatesplit_linked_list(struct node *head)
{
    int i=0,count1=0;
    struct node *del_node,*prev,*new_list,*new_list2;
    del_node=prev=head;


            printf("i am in alternatesplit_linked_list\n");

    while(del_node!= NULL)
    {
                count1++;
        del_node=del_node->next;
    }

    if(count1%2 == 0)
    {
        new_list=(struct node *)malloc((count1/2)*sizeof(struct node));
    }
    else
        new_list=(struct node *)malloc((count1/2)*sizeof(struct node));
    del_node=head;
    count1=0;
    new_list2=new_list;
    while(del_node != NULL)
    {
        if(count1 == 0)
        {
            del_node=del_node->next;
            new_list->data= del_node->data;
            new_list->next=(struct node *)malloc(sizeof(struct node));
            new_list=new_list->next;
            count1=1;
        }
        else{
            prev->next=del_node->next;
            free(del_node);
            del_node=prev->next;
            prev=del_node;
            count1=0;

        }

        if(count1==1 && del_node== NULL)
        {
            new_list->next =NULL;
            prev->next=NULL;
            free(del_node);
        }
    }
/*  -----------------------------------need to check the loop -------------------
    while(new_list2!=NULL)
    {
        printf("%d ",new_list2->data);
        new_list2 = new_list2->next;
    }

    printf("\n");

    */
}

void poiter_to_node_del(struct node *head)
{
    struct node *p1,*p2;

    p1=head;
    p2=p1->next;
    p1->next = p2->next;
    p1->data = p2->data;

    free(p2);

    printf("the node is deleted \n");


}

void palindrome(struct node *head)
{
    struct node *p1,*p2,*temp;
    int length=0,i=0;
    p1=p2=temp=head;

    while(p1!=NULL)
    {
        length++;
        p1=p1->next;
            }

    if(length%2 == 1)
    {
        while(i<= (length/2))
        {
            p1=p1->next;
            p2=p2->next;
            i++;
        }
    }

    else
    {
        while (i < (length/2))
        {
            p1=p1->next;
            p2=p2->next;
            i++;
        }

    }
    temp = p1;

    while(p1->next->next != NULL)
    {
        while(p2->next->next != NULL)
        {
            p2->next->next = p1->next;
            p1->next = p2->next;
            p2-.next = NULL;

        }
        p1=p1->next;
        p2=p1->next;
    }

    p2=p1->next;

    p1=head;
    temp= temp->next;

    while(p2!=NULL)
    {
        if(p1->data == p2->data)
        {

            p1=p1->next;
            p2=p2->next;
        }
        else
            {
                printf("not equal\n");
            return;
                       }
    }
}

void list_intersection(struct node *list1,struct node *list2)
{

    struct node *p1,*p2;
    int length1=0,length2=0,i=0;

    p1=list1,p2=list2;
    while(p1!=NULL)
    {
        length1++;
    }
    while(p2!=NULL)
    {
        length2++;
    }

    p1=list1;
    p2=list2;

    if(length1 > length2)
    {
        while(i < (length1 - length2))
        {
            p1 = p1->next;
            i++;
        }
    }

    else if(length2 > length1)
    {
        while(i<(lenght2 - length1))
        {
            p2 = p2->next;
            i++;
        }
    }
    i=0;

    while(p2!=NULL)
    {
        if(p2->data != p1->data)
        {
            p2 = p2->next;
            p1 = p1->next;
            i++;
        }

        else{
            if(lenght1 > length2)
            {
                printf("the node is %d\n",(length1-length2+i));
            }

            else{
                printf("the node is %d\n",(length1-length2+i));
            }
        }
    }
}


void delete_repeat_node_unsorted(struct node *head)
{
    struct node *p1,*p2,*temp;
    p1=p2=temp=head;

    p2=p1->next;

    while(p1 != NULL)
    {
        if(p2-> == NULL)
        {

            p1=p1->next;
            p2=p1->next;

        }

        if(p2->next->data == p1->data)
        {
            temp = p2->next;
            p2->next = p2->next->next;
            free(temp);
        }
    }
}

void last_front(struct node **head)
{

    struct *p1,*p2;
    p1 = *head;

    while(p1->next->next != NULL)
    {
        p1 = p1->next;
    }

    p1->next->next = *head;

    *head = p1->next;

    p1->next = NULL;
}


void sorted_intersection(struct node *list1,struct node *list2)
{
    struct node *l1,*l2;
    int len1=0,len2=0,i=0;

    l1=list1;
    l2=list2;

    while(l1!= NULL)
    {
        len1++;
        l1=l1->next;
    }
    while(l2 != NULL)
    {
        len2++;
        l2=l2->next;
    }

    l1=list1;
    l2=list2;

    if(len1>len2)
    {
        while(i < (len1-len2))
        {
            l1 = l1->next;
            i++;
        }
        while(l1->data != l2->data)
        {
            l1=l1->next;
            l2= l2->next;
        }
    }

    else if(len2>len1)
    {
        while(i<(len2-len2))
        {
            l2 = l2->next;
            i++;
        }

        while(l2->data != l1->data)
        {

            l1 =l1->next;
            l2=l2->next;
        }
    }
    else
    {

        while(l2->data != l1->data)
        {

            l1 =l1->next;
            l2=l2->next;
        }

    }

}


void detect_loop_delete(struct node *head)
{
    strcut node *p1,*p2;


    p2=p1=head;

    while(p1 !=NULL)
    {
        p1=p1->next;
        p2=p2->next->next;

        if(p1 == p2)
        {
            printf("loop detected\n");
            p1->next = NULL;
            p1 = p1->next;
        }
    }

}


void delete_right_value(struct node *head)
{
    struct node *p1,*p2;

    p1=p2=head;

    while(p2!=NULL)
    {
        if(p2->data > p1->data)
        {
            p1->next = p2->next;
            free(p2);
            p2=p1->next;
        }

        else{
            p2 = p2->next;
            p1 = p1->next;
        }
    }
}

void rotate_list(struct node **head,int data)
{

    struct node *l1,*l2;
    int node_count;

    l1=*head;

    node_count=0;

    while(node_count <data)
    {
        l1 =l1->next;
        node_count++;
    }

    l2=l1;
    l1->next = NULL;
    l1 = *head;
    *head =l2;
    while(l2->next != NULL)
    {

        l1=l2->next;
        l2->next = *head;
        *head = l2;
        l2=l1;
        l1 = *head;
    }
}

void insertion_sort(struct node **head)
{
    struct node *p1,*p2,*temp;

    p1=*head;
    p2=p1;

    while(p2!=NULL)
    {
        if(p2->next->data < p1->data)
        {
            temp = p2->next;
            p2->next=p2->next->next;
            p2->next->next = *head;
            *head = temp;
            p1= *head;

        }

        else

        {
            p2 = p2->next;
        }

    }
}

void random(struct node *head)
{

    static struct node *p1=head;

    struct node *p2;

    if(p1 == NULL)
    {
        p1 = head;
    }
    p2=p1;
    printf("%d \n",p2);
    p1=p1->next;
}

void string_cmp(void)
{
    struct string_node{
        char data;
        struct string_node *next;
    }string_node;
    int i,j;
    string_node *p1,*p2,*p3;
    char *s1,*s2;

    scanf("%d\n",&i);
    s1= (char *)malloc(sizeof(char )*(i+1));
      s2= (char *)malloc(sizeof(char )*(i+1));

      scanf("%s",s1);
      *(s1+i) = '\0';
      scanf("%s",s2);
      *(s2+i) = '\0';
      i=0;
      while(*(s1+i)!='\0')
      {

          p1= (struct string_node *)malloc(sizeof(struct string_node));
          if(i==0)
          {
              p3=p1;
          }
          p1->data = *(s1+i);
          i++;
          p1= p1->next;

      }
      p1= NULL;
      p1=p3;

      while(*(s2+i)!='\0')
      {

          p2= (struct string_node *)malloc(sizeof(struct string_node));
          if(i==0)
          {
              p3=p2;
          }
          p2->data = *(s1+i);
          i++;
          p2= p2->next;

      }

      p2=NULL;
      p2=p3;

      while(p2!=NULL || p1 !=NULL)
      {
          if(p2->data == p1->data)
          {
              p1= p1->next;
              p2= p2->next;
          }

          else{
            printf("mismatch\n");
            return;
          }

          printf("matched\n");
      }



}


void alternate_asc_desc(struct node *head)
{
    struct node *p1,*p2,*p3,*temp;

    p1 = head;
    p2 = p1;

    while(p2 != NULL)
    {
        p3 = p1;
      if(p2->data < p1->data)
      {
         while(p3->next->data < p2->data)
        {
            p3 = p3->next;
        }

        temp = p2;
        p2 = p2->next;

        temp->next = p3->next;
        p3->next = temp;
        free(temp);
      }

      else{
        p2 = p2->next;
      }

    }
}

void merge_reverse(struct node *l1,struct node *l2)
{
    struct node *p1,*p2;

    p1=l1;
    p2=l2;

    if(p1->data <p2->data)
    {
        l1= (struct node *)malloc(sizeof(struct node));
        l1->data = p1->data;
        p1 = p1->next;
    }

    else
    {

        l1 = (struct node *)malloc(sizeof(struct node));
        l2->data = p2->data;
        p2=p2->data;
    }
}


void create_circular(struct node **head,int data)
{

    struct *p1,*p2;
    p1 = *head;

    if(*head == NULL)
    {
        p1 = (struct node *)malloc(sizeof(struct node));

        p1->data = data;

        p1->next = *head;
    }

    else
    {
        p1 = (struct node *)malloc(sizeof(struct node));
        p1->data = data;
        p2 = *head;
        while(p2->next != *head)
        {
            p2 = p2->next;
        }

        p2->next = p1;
        p1->next = *head;
    }
}

void split_circular(struct node *head)
{

    struct node *p1,*p2,*p3;

    p1 = p2 = p3=head;

    while(p3 != head)
    {

        p3 = p3->next;
        if(p3 != head)
        {
            p3 = p3->next;
            p2 = p2->next;

        }
    }

    p3->next =p2;
    p2->next = head;
}

void sorted_insert(struct node **head, int data)
{
    struct node *p1,*p2,*p3;

    p1 = head;

    if(data < (*head)->data)
    {
        p2 = (struct node *)malloc(sizeof(struct node));
        p2->data = data;
        p2->next = *head;
        *head = p2;
    }

    else
    {

        p2 =p1;
        while(p2 != p1)
        {

            if(p2->next->data > data)
            {
                p3 = (struct node *)malloc(sizeof(struct node));

                p3->data = data;
                p3->next = p2->next;
                p2 = p3;
            }
        }
    }

}













