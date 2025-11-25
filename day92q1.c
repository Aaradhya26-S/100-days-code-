#include <stdio.h>

// Define structure Student
struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];  // Array of 5 students

    // Input details of 5 students
    for (int i = 0; i < 5; i++) {
        printf("\nEnter details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Roll Number: ");
        scanf("%d", &students[i].roll_no);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Print details of all students
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n",
               students[i].name, students[i].roll_no, students[i].marks);
    }

    return 0;
}