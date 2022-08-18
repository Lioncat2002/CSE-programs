#include "stdio.h"

typedef struct
{
    char name[200];
    int year;
    int resolution;
    int ram;
    int mem_size;
    char OS[200];
} Mobile;

int insertion_sort(Mobile *mobile, int n)
{
    int c;
    Mobile m;
    for (int i = 1; i < n; i++)
    {
        m = *(mobile + i);
        c = i - 1;
        while (c >= 0 && m.ram < (mobile + c)->ram)
        {
            *(mobile + c + 1) = *(mobile + c);
            c--;
        }
        *(mobile + c + 1) = m;
    }
}

int display(Mobile *mobile, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Name:       %s\n", (mobile + i)->name);
        printf("Year:       %d\n", (mobile + i)->year);
        printf("Resolution: %d\n", (mobile + i)->resolution);
        printf("Ram:        %d\n", (mobile + i)->ram);
        printf("Memory:     %d\n", (mobile + i)->mem_size);
        printf("OS:         %s\n", (mobile + i)->OS);
    }
}

int main()
{
    Mobile mobiles[200];
    int n;
    printf("Enter number of mobiles: ");
    scanf("%d", &n);
    getc(stdin);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Mobile name:");
        fgets(mobiles[i].name, 200, stdin);
        printf("Enter Mobile year:");
        scanf("%d", &mobiles[i].year);
        getc(stdin);
        printf("Enter camera resolution:");
        scanf("%d", &mobiles[i].resolution);
        getc(stdin);
        printf("Enter Ram:");
        scanf("%d", &mobiles[i].ram);
        getc(stdin);
        printf("Enter Memory card size:");
        scanf("%d", &mobiles[i].mem_size);
        getc(stdin);
        printf("Enter Mobile OS:");
        fgets(mobiles[i].OS, 200, stdin);
        printf("\n------------------------\n");
    }

    insertion_sort(mobiles, n);

    display(mobiles, n);
    printf("\n");
}