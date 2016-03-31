#include<stdio.h>
#include<string.h>
struct stack_1 {
    int top;
    unsigned capacity;
    int *arr;
    };

struct stack *create_top(unsigned capacity)
{
    struct stack *new_top = (struct stack *)malloc(sizeof(struct stack));
    new_top->capacity = capacity;
    new_top->top = -1;
    arr=(int *)malloc(sizeof(int) * capacity);

    return new_top;

}

bool is_top(struct node *head)
{
    if(head->top == head->capacity)
        return true;

}

bool is_empty(struct node *head)
{
    if (head->top == -1)
        return true;
}

void push(struct stack **new_item, int item)
{
    if( is_top(*new_item) == 1 )
    {
        printf("stack full\n");
        return;
    }

    (*new_item)->top++;
    new_item->arr[(*new_item)->top]=item;
    printf("pushed to stack %d\n",item);

}

void pop(struct stack *new_item)
{
    if(is_empty(new_item) == 1)
    {
        printf("the stack is empty\n");
        return;
    }
    printf("the poopped item is %d\n",new_item->arr[new_item->top--]);

}

int peek(struct stack *head)
{
    return (head->top)->arr;
}

int precedence(char ch)
{
    switch(ch)
    {
    case '+':
    case '-':
        return 1;
        break;
    case '/':
    case '*':
        return 2;
        break;
    case '^':
        return 3;
        break;
    default:
        reurn -1;
    }
}

void infix_to_postfix(char *str)
{
    int i,j;
    struct stack *new_stack=NULL;
    j= strlen(str);
    new_stack = create_stack(j);
    i=0;j=-1;

    while(*(str + i) != '\0')
    {
        if(is_operand(*(str + i)))
        {
            str[++k] = *(str+i);
        }
        else if(*(str + i)) == '(')
        {
            push(&new_stack,*(str + i));

        }
        else if(*(str + i)) == ')' )
        {
            while(peek(new_stack) != '(')
            str[++j]=pop(new_stack);

            pop(new_stack);

                    }

        else{
            if(precedence(*(str + i)) <= peek(new_stack))
            {
                while(precedence(*(str + i)) <= peek(new_stack))
                {
                    str[++j]=pop(new_stack);
                }
            }

            push(&new_stack,*(str + i));
        }
    }

    while(!is_empty(new_stack))
    {
        str[++j]=pop(new_stack);
    }

    str[++j]='\0';
    printf("%s\n",str);
    return;
}

bool is_operand(char ch)
{
    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
       {
           return true;
       }

       else
        return false;
}

void postfix_evaluation(char *str);
{
    struct stack *new_stack;
    int len,i=0,item;

    len = strlen(str);

    new_stack = create_top(len);

    while(*(str+i) != '\0')
    {
        if(is_operand(*(str+i)) )
        {
            push(&new_stack,*(str+i));
        }
        else
        {
            item = pop(new_stack);

            switch (*(str+i))
            {
            case '+':
                item = item + pop(new_stack);
                push(&new_stack,item);
                break;
            case '-':
                item = pop(new_stack) - item;
                push(&new_stack,item);
                break;
            case '*':
                item = item * pop(new_stack);
                push(&new_stack,item);
                break;
            case '/':
                item = pop(new_stack) / item;
                push(&new_stack,item);
                break;

            case '^':
                item = item ^ pop(new_stack);
                push(&new_stack,item);
                break;

            default:
                break;

            }
            i++;
        }
    }


    printf("the value of the expression is %d\n", pop(&new_stack));
}

void reverse_string(char *str)
{
    struct string_stack{
        int top;
        int capacity;
        char *s;
    };

    struct string_stack *new_stack = (char *)malloc(strlen(str));
    int i=0;
    new_stack->top=-1;
    new_stack->capacity  = strlen(str);


    while(*(str + i) != '\0')
    {
        new_stack[++new_stack->top]->s = *(str + i);

        i++;
    }

    while(new_stack->top >= 0)
    {
        printf("%c",new_stack[new_stack->top--]->c);
    }

    return;
}


void implement_twostacks(int n)
{
    struct stack_1 new_stack;

    new_stack = (struct stack_1 *)malloc(sizeof(struct stack_1));
    new_stack->capacity = n;
    new_stack->top = -1;

    new_stack->arr = (int *)malloc(sizeof(int) * n);

    /*need diffent push operation*/
}

bool match_paranthesis(struct stack_1 *head,char ch)
{
    int i;
    char item;
    switch(ch)
    {
    case '{':
        letter = '}';
        break;
    case '(':
        letter = ')';
        break;
    case '[':
        letter = ']';
        break;
    case '}':
        letter = '{';
        break;
    case ')':
        letter = '(';
        break;
    case ']':
        letter = '[';
        break;
    default:
        break;

    }

    if(is_empty(head))
    {
        i=0;
        return i;
    }

    item = pop(head);

    if(letter == item)
    {

        return true;
    }
    else
    {
        match_paranthesis(head,item);
    }
    if(is_empty(head))
    {
        i=0;
        return i;
    }
    else{

        i=match_paranthesis(head,ch);
        if(i == 1 )
        {

            return true;
        }
    }

}


void next_higher(struct stack_1 *head,int element)
{
    int item;
    if(is_empty(head) == 1)
    {
        printf("element %d has next higher -1",element);
        return ;
    }
    item = pop(struct node &head);
    if(is_empty(head) == 1)
    {
        push(struct node &head, element);
        printf("element %d has next higher -1",element);
        return ;
    }
    if(item < element)
    {
        next_higher(element);
    }
    else
    {
        printf("element %d has next higher ",element,item);
        return;
    }

    push(item);

    if(is_empty(head) == 1)
    {
        next_higher(item);
    }
    else
        return;
}



int recursion_sort(struct stack_1 *head,int element)
{
    int item,a,z;
    z=0;
    item = pop(&head);
    while(z!=1)
    {

        if(is_empty)
        {
            if(element < item)
            {
                a = element;
                element = item;
                item = a;
                push(&head,item);
                return element;
            }
            else if (item == element)
            {
                z=1;
                return 1;
            }
            else{
                z=1;
                    return z;

            }
        }
        else
        {
            item= recursion_sort(head,item);
            if(element < item)
            {
                a = element;
                element = item;
                item = a;
                push(&head,item);
                return element;
            }
            else
                z=1;
                return z;


        }

    }
}


int stock_span(struct stack_1 *head, int j)

{
    static int i,j;
    int a,item,k=0;

    while(j<head->capacity)
    {
        item = pop(&head);

        if(is_empty())
        {
            i++;
            push(item);
            return item;
        }
        else
        {

            while(k>=j)
            {
                a = stock_span(head,j);
                k++;
            }

            if(item < a)
            {
                i+;l
                push(item);
                return a;
            }

            else
            {
                j++;
                printf("%d has %d span",a,i);
                i=0;

                while(head[head->top]->top != j-1)
                {
                    stock_span(head,j);

                }
            }
        }
    }
}


int special_minimum(struct stack_1 *head)
{
    int item,a,minimum;

    item = pop(&head);

    if(is_empty())
    {
        minimum = item;
        push(&head,item);
        return minimum;
    }
    else{

        a= special_minimum(head);

        if(a < item)
        {
            minimum = a;
            push(item);
            return minimum;
        }
        else
        {
            return a;
        }
    }
}

void find_middle(struct stack_1 **head,int i)
{
    while((*head)->top--  != i)
    {
        item = pop(head);

        if((*head)->top == i)
        {
            printf("%d\n",item);
            (*head->capacity) = (*head)->capacity--;
            return;
        }
    }

    push (head,item);
     return;

}




