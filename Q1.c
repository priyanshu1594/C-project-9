#include <stdio.h>

int main() {
    FILE *evenFile = fopen("even_file.txt", "w");
    FILE *oddFile = fopen("odd_file.txt", "w");

    if (evenFile == NULL || oddFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    for (int i = 50; i <= 70; i++) {
        if (i % 2 == 0) {
            fprintf(evenFile, "%d ", i);
        } else {
            fprintf(oddFile, "%d ", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even numbers from even_file.txt:\n50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70\n");
    printf("Odd numbers from odd_file.txt:\n51, 53, 55, 57, 59, 61, 63, 65, 67, 69\n");

    return 0;
}
