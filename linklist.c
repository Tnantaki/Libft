#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *link;
}NODE;

int main(void)
{
    // NODE a,b,c;
    // a.value = 1;
    // b.value = 2;
    // c.value = 3;
    // // a.link = b.link = c.link = NULL;
    // a.link = &b;
    // b.link = &c;
    // c.link = NULL;
    // printf("%d\n", a.link->link->value);

    // NODE *p;
    // p = (NODE *)malloc(sizeof(NODE));
    // p->value = 10;
    // p->link = NULL;
    NODE *p = NULL, *h = NULL;
    int menu;
    do
    {
        printf("1: Add, 2: Delete, 3: Edit, 4: Serch, 5: show, 6: Exit\n");
        printf("Enter Menu: "); scanf("%d", &menu);
        if (menu == 1) //Add
        {
            p = (NODE *)malloc(sizeof(NODE));
            printf("Enter value: "); scanf("%d", &p->value);
            p->link = h;
            h = p;
        }
        else if (menu == 2) //Delete
        {

        }
        else if (menu == 3) //Edit
        {

        }
        else if (menu == 4) //Serch
        {

        }
        else if (menu == 5) //Show
        {
            p = h;
            while(p != NULL)
            {
                printf("%d\n", p->value);
                p = p->link;
            }
        }
        else if (menu == 6) //Exit
        {
            printf("Quit\n");
        }
        else printf("Plese Enter the number 1 - 6\n");
    }while (menu != 6);
}
