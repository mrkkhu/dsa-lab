#include<stdlib.h>
#include<stdio.h>


typedef struct queue
{
    int data;
    struct queue *next;
} q;

q* enqueue(q *r);
q* dequeue(q *f, q *r);
void disp(q *f);


int main()
{
    int ch;
    q *r=NULL,*f=NULL;

    while(1)
    {
        printf("Enter 1 for Enqueue \n2 for Dequeue\n3 for Display\n4 for Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
                r = enqueue(r);
                if(f==NULL)
                    f = r;
                break;

            case 2:
                f = dequeue(f,r);
                if(f==NULL)
                    r = NULL;
                break;

            case 3:
                disp(f);
                break;

            case 4:
                exit(0);
        }
    }
    return 0;
}


q* enqueue(q *r)
{
    int x;
    q *p = (q*)malloc(sizeof(q));

    if(p != NULL)
    {
        printf("Enter data: ");
        scanf("%d",&x);

        p->data = x;
        p->next = NULL;

        if(r == NULL)
        {
            r = p;
        }
        else
        {
            r->next = p;
            r = p;
        }
    }
    return r;
}


q* dequeue(q *f, q *r)
{
    int x;
    q *p;

    if(f == NULL && r == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        p = f;
        x = p->data;
        printf("%d is deleted\n", x);

        if(f == r)
            f = NULL;
        else
            f = f->next;

        free(p);
    }
    return f;
}


void disp(q *f)
{
    if(f == NULL)
    {
        printf("Queue is empty\n");
    }
    else
    {
        while(f != NULL)
        {
            printf("%d ", f->data);
            f = f->next;
        }
        printf("\n");
    }
}
