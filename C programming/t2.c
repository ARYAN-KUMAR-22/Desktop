#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0; // Numbers less than or equal to 1 are not prime
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // If number is divisible by any number other than 1 and itself, it's not prime
        }
    }

    return 1; // Number is prime
}

int main() {
    int n;
    FILE *p = fopen("integer.txt", "w");
    printf("Enter 20 integers: ");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &n);
        fprintf(p, "%d ", n); // Separate integers with spaces
    }
    fclose(p); // Close the file after writing integers

    p = fopen("integer.txt", "r");
    FILE *q = fopen("prime.txt", "w");
    FILE *r = fopen("nprime.txt", "w");

    while (fscanf(p, "%d", &n) != EOF) {
        if (isPrime(n)) {
            fprintf(q, "%d\n", n); // Include newline character after each prime number
        } else {
            fprintf(r, "%d\n", n); // Include newline character after each non-prime number
        }
    }

    // Close all files
    fclose(p);
    fclose(q);
    fclose(r);

    return 0;
}
