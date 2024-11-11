//WAP to store the roll no., name & 4 marks and find roll no. m1, m2, m3, m4 Total mark

#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks[4];
    float total;
};
int main() {
    struct Student student;
    printf("Enter Roll Number: ");
    scanf("%d", &student.roll_no);
    printf("Enter Name: ");
    scanf("%s", student.name);
    printf("Enter marks for 4 subjects:\n");
    student.total = 0;
    for (int i = 0; i < 4; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i]; // Sum up the marks for total
    }

    // Display student details
    printf("\nStudent Details:\n");
    printf("Roll No: %d\n", student.roll_no);
    printf("Name: %s\n", student.name);
    
    for (int i = 0; i < 4; i++) {
        printf("Mark %d: %.2f\n", i + 1, student.marks[i]);
    }

    printf("Total Marks: %.2f\n", student.total);

    return 0;
}
