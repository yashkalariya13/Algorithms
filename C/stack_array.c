#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
struct stack
{
    int size;
    int *arr;
};
bool isEmpty(int top)
{
    if (top == -1)
    {
        return 1;
    }
    return 0;
}
bool isFull(int top, struct stack *st)
{
    if (top == st->size - 1)
    {
        return 1;
    }
    return 0;
}
int create(struct stack *st)
{
    st->arr = (int *)malloc((st->size) * sizeof(int));
    printf("\nEnter the number of values you want to add in stack : ");
    int val;
    scanf("%d", &val);
    getchar();
    int i = 0;
    printf("\nEnter the values you want to add : \n");
    for (i = 0; i < val; i++)
    {
        scanf("%d", &st->arr[i]);
        getchar();
    }
    return i - 1;
}
int push(struct stack *st, int top)
{
    if (isFull(top, st))
    {
        printf("\nStack overflowed !!!!");
        return top;
    }
    else
    {
        top++;
        printf("\nEnter the value you want to push in : ");
        scanf("%d", &st->arr[top]);
        getchar();
        return top;
    }
}
int pop(struct stack *st, int top)
{
    if (isEmpty(top))
    {
        printf("\nStack underflowed!!!!");
        return top;
    }
    else
    {
        printf("\nElement poped out is : %d", st->arr[top]);
        top--;
        return top;
    }
}
void display(int top, struct stack *st)
{
    if (isEmpty(top))
    {
        printf("\nStack is empty nothing to display");
    }
    else
    {
        printf("\nStack elements are : \n");
        for (int i = 0; i < top + 1; i++)
        {
            printf("%d\t", st->arr[i]);
        }
    }
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    printf("\nEnter the size of array : ");
    scanf("%d", &s->size);
    getchar();
    int top = -1;
    top = create(s);
    int loop = 1;
    while (loop)
    {
        printf("\nEnter your choice : \n1.'A' for pushing \n2.'B' for poping\n3.'C' for exit/display stack : \n");
        char choice;
        scanf("%c", &choice);
        getchar();
        switch (choice)
        {
        case 'A':
            top = push(s, top);
            display(top, s);
            break;
        case 'B':
            top = pop(s, top);
            display(top ,s);
            break;
        case 'C':
            display(top, s);
            loop = 0;
            break;
        }
    }

    return 0;
}