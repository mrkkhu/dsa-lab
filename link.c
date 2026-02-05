#include <stdio.h>
#include <stdlib.h>

typedef struct list
{
    int data;
    struct list *next;
} sl;

int main()
{
    sl *p = NULL, *r = NULL, *l = NULL;
    int ch, v;

    while (1)
    {
        printf("Enter data: ");
        scanf("%d", &v);

        p = (sl *)malloc(sizeof(sl));
        p->data = v;
        p->next = NULL;

        if (l == NULL)
        {
            l = r = p;
        }
        else
        {
            r->next = p;
            r = p;
        }

        printf("Do you want to continue (1=yes, 0=no): ");
        scanf("%d", &ch);

        if (ch == 0)
            break;
    }

    p = l;
    printf("\nLinked List: ");
    while (p != NULL)
    {
        printf("%d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");

    return 0;
}
