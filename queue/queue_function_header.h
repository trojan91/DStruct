#include<stdio.h>

typedef struct _node
{
    void *data;
    struct _node *next;

}Node;

typedef struct _employee{
char name[32];
unsigned char age;
}Employee;

typedef struct _linkedList{
    Node *head;
    Node *tail;
    Node *current;
}LinkedList;


void initializeList(LinkedList *list)
{
    list->head =NULL;
    list->tail = NULL;
    list->current = NULL;
}

void addHead(LinkedList *list,void* data)
{
    Node *node = (Node *)malloc(sizeof(Node));
    node->data = data;

    if(list->head == NULL)
    {
        list->tail = node;
        node->next = NULL;
    }
    else {
        node->next = list->head;
    }

    list->head = node;
}

void addTail(LinkedList *list, void *data) {
Node *node =(Node*)malloc(sizeof(Node));
node->data =data;
node->next = NULL;

if(list->head == NULL)
{

    list->head = node;

}
else
{

    list->tail->next = node;
}
list->tail = node;
}
