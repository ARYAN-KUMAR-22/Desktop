#include <stdio.h>

int rev(int n) {
    int reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed;
}

int main() {
    int n, num;
    FILE *inputFile = fopen("INTEGER.txt", "w+");
    FILE *outputFile = fopen("REVERSE.txt", "w");

    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    printf("HOW MANY NUMBERS YOU WANT TO ENTER : ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        fprintf(inputFile, "%d\n", num);
    }

    // Reset file pointer to the beginning of the file
    rewind(inputFile);

    printf("Contents of INTEGER.txt and REVERSE.txt:\n");
    while (fscanf(inputFile, "%d", &num) != EOF) {
        int reversed = rev(num);
        fprintf(outputFile, "%d\n", reversed);
        printf("%d\t\t%d\n", num, reversed);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
