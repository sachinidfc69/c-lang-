#include <stdio.h>

int main() {
    FILE *pfile;
    char name[50];
    int age;

    pfile = fopen("file1.txt", "r");

    if (pfile == NULL) {
        printf("Error opening the file.\n");
        return -1;
    }

   
    while (fscanf(pfile, "%s %d", name, &age) == 2) {
        printf("Name: %s, Age: %d\n", name, age);
    }

    fclose(pfile);

    return 0;
}
