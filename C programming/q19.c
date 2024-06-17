// DESIGN A PROGRAM WITH A STRUCTURE WITH MEMBERS BOOK ID, TITLE, AUTHOR AND PRICE. IMPLEMENT THE FUNCTION TO ADD BOOKS, SEARCH FOR BOOKS AND DISPLAY ALL THE BOOK IN THE INVENTORY.


#include <stdio.h>

void add_book(struct book *b);

struct book {
    int id;
    char title[20];
    char author[20];
    int price;
};

int main()
{
    struct book b[20];

    add_book(&b);

    return 0;
}

void add_book(struct book *b[])
{
    int n;
    printf("ENTER THE NUMBER OF BOOKS : ");
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        printf("ENTER BOOK ID : ");
        scanf("%d", &(*b)->id);
        printf("ENTER BOOK NAME : ");
        gets((*b)->title);
    }
}