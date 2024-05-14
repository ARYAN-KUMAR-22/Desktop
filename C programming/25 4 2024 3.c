// WAP TO CREATE STRUCTURE DATE WITH MEMBERS DATE, MONTH, AND YEAR AND COMPARE WHICH COMES FIRST.

#include <stdio.h>

// Structure to represent a date
struct Date {
    int day;
    int month;
    int year;
};

int main() {
    struct Date date1, date2;

    // Input for date 1
    printf("Enter date 1 (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    printf("Enter date 2 (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    if (date1.year < date2.year)
        printf("Date 1 comes first.\n");
    else if (date1.year > date2.year)
        printf("Date 2 comes first.\n");
    else {  
        if (date1.month < date2.month)
            printf("Date 1 comes first.\n");
        else if (date1.month > date2.month)
            printf("Date 2 comes first.\n");
        else {  
            if (date1.day < date2.day)
                printf("Date 1 comes first.\n");
            else if (date1.day > date2.day)
                printf("Date 2 comes first.\n");
            else
                printf("Both dates are the same.\n");
        }
    }

    return 0;
}
