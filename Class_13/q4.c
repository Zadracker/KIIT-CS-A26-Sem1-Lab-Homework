//Find and display avg marks

#include <stdio.h>
void printLine(char ch, int times) {
    for (int i = 0; i < times; i++) {
        putchar(ch);
    }
    putchar('\n');
}
struct Student {
    int roll_no;
    int marks[4];  
    int total_marks;
    int avg;
};
void calculateResults(struct Student* student) {
    student->total_marks = 0;
    student->avg = 0;
    for (int i = 0; i < 4; i++) {
        student->total_marks += student->marks[i];
    }
    student->avg = student->total_marks / 4;
}
int main() {
    int num_students;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    struct Student students[num_students];
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &students[i].roll_no);
        for (int j = 0; j < 4; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            do {
                scanf("%d", &students[i].marks[j]);
                if (students[i].marks[j] < 0 || students[i].marks[j] > 100) {
                    printf("Please enter marks between 0 and 100: ");
                }
            } while (students[i].marks[j] < 0 || students[i].marks[j] > 100);
        }
        calculateResults(&students[i]);
    }
    printf("\nRoll No.\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tTotal Marks\tAVG\n");
    printLine('-', 100);
    for (int i = 0; i < num_students; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               students[i].roll_no, students[i].marks[0], students[i].marks[1],
               students[i].marks[2], students[i].marks[3], students[i].total_marks,
               students[i].avg);
    }
    return 0;
}

//Output