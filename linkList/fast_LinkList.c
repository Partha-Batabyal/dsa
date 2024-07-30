#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start = 0;

struct node *createnode()
{
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    return newnode;
}

void insertfromfast()
{
    struct node *k1 = createnode();
    if (start == 0)
    {
        start = k1;
    }
    else
    {
        k1->next = start;
        start = k1;
    }
}

void insertfrommiddle()
{
    struct node *p = createnode();
    if (start == 0)
    {
        start = p;
    }
    else
    {
        struct node *s = start;
        int count = 0;
        while (s != 0)
        {
            count++;
            s = s->next;
        }

        int pos;
        printf("Enter the position to insert (1 to %d): ", count + 1);
        scanf("%d", &pos);

        if (pos < 1 || pos > count + 1)
        {
            printf("Invalid position\n");
            free(p);
            return;
        }

        if (pos == 1)
        {
            p->next = start;
            start = p;
        }
        else
        {
            s = start;
            for (int i = 1; i < pos - 1; i++)
            {
                s = s->next;
            }
            p->next = s->next;
            s->next = p;
        }
    }
}

void insertfromend()
{
    struct node *n = createnode();
    struct node *k1 = start;
    if (start == 0)
    {
        start = n;
    }
    else
    {
        while (k1->next != 0)
        {
            k1 = k1->next;
        }
        k1->next = n;
    }
}

void del_node_fast()
{
    if (start == 0)
    {
        printf("No element found\n");
    }
    else
    {
        struct node *fre = start;
        start = start->next;
        fre->next = 0;
        free(fre);
    }
}

void del_node_middle()
{
    if (start == 0)
    {
        printf("No element found\n");
    }
    else if (start->next == 0)
    {
        struct node *p = start;
        start = 0;
        free(p);
    }
    else
    {
        struct node *s = start;
        int count = 0;
        while (s != 0)
        {
            count++;
            s = s->next;
        }

        int pos;
        printf("Enter the position to delete (1 to %d): ", count);
        scanf("%d", &pos);

        if (pos < 1 || pos > count)
        {
            printf("Invalid position\n");
        }
        else if (pos == 1)
        {
            struct node *p = start->next;
            start->next = p->next;
            p->next = 0;
            free(p);
        }
        else
        {
            struct node *s = start;
            for (int i = 1; i < pos - 1; i++)
            {
                s = s->next;
            }

            struct node *k = s->next;
            s->next = k->next;
            k->next = 0;
            free(k);
        }
    }
}

void del_node_end()
{
    if (start == 0)
    {
        printf("No element found\n");
    }
    else
    {
        struct node *l = start;
        while (l->next->next != 0)
        {
            l = l->next;
        }
        struct node *p2 = l->next;
        l->next = 0;
        free(p2);
    }
}

void display()
{
    struct node *temp = start;
    while (temp != 0)
    {
        printf("\n %d \n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    printf("\n Press '1' to insert data from start");
    printf("\n Press '2' to insert data from middle");
    printf("\n Press '3' to insert data from end");

    printf("\n Press '4' to delete data from start");
    printf("\n Press '5' to delete data from middle");
    printf("\n Press '6' to delete data from end");

    printf("\n Press '7' to search data from start");
    printf("\n Press '8' to search data from middle");
    printf("\n Press '9' to search data from end");
    printf("\n Press '10' to display\n");

    while (1)
    {
        printf("\nEnter the value: ");
        int value;
        scanf("%d", &value);

        switch (value)
        {
        case 1:
            insertfromfast();
            break;
        case 2:
            insertfrommiddle();
            break;
        case 3:
            insertfromend();
            break;
        case 4:
            del_node_fast();
            break;
        case 5:
            del_node_middle();
            break;
        case 6:
            del_node_end();
            break;
        case 7:
            // Implement search functionality here if needed
            break;
        case 8:
            // Implement search functionality here if needed
            break;
        case 9:
            // Implement search functionality here if needed
            break;
        case 10:
            display();
            break;
        default:
            printf("\n Invalid input");
            break;
        }
    }

    return 0;
}
