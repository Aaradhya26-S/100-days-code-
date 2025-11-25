#include <stdio.h>

// Define Employee structure
struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp[3], readEmp[3];
    FILE *fp;

    // Input employee details
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for Employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("ID: ");
        scanf("%d", &emp[i].id);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    // Write to binary file
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fwrite(emp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Read from binary file
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fread(readEmp, sizeof(struct Employee), 3, fp);
    fclose(fp);

    // Print employee details read from file
    printf("\n--- Employee Records from File ---\n");
    for (int i = 0; i < 3; i++) {
        printf("Name: %s, ID: %d, Salary: %.2f\n",
               readEmp[i].name, readEmp[i].id, readEmp[i].salary);
    }

    return 0;
}