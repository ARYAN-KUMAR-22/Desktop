//wap to input integer integer into a file and check and store prime numbers into a file.

#include <stdio.h>

int prime(int n);

int main() {
    int n, num;
    printf("HOW MANY INTEGERS YOU WANT TO WRITE: ");
    scanf("%d", &n);

    FILE *p = fopen("num.txt", "w");
    FILE *q;

    printf("ENTER THE NUMBERS: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(p, "%d ", num); // Separate integers with space
    }

    fclose(p);

    p = fopen("num.txt", "r");
    q = fopen("pnum.txt", "w");

    while ((fscanf(p, "%d", &num)) != EOF) {
        if (prime(num) == 0) // Check if number is prime
            fprintf(q, "%d ", num); // Separate prime numbers with space
    }

    fclose(p);
    fclose(q);

    return 0;
}

int prime(int n) {
    if (n <= 1)
        return 1; // Not prime

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return 1; // Not prime
    }
    
    return 0; // Prime
}
