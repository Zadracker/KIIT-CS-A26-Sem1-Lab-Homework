//WAP to store student roll no., marks and find total marks, grade and print them

#include <stdio.h>
void printLine(char ch, int times) {
    for (int i = 0; i < times; i++) {
        putchar(ch);
    }
    putchar('\n');
}
int main() {
    int num_students, num_subjects = 4;
    printf("Enter the number of students: ");
    scanf("%d", &num_students);
    int roll_nos[num_students];
    int marks[num_students][num_subjects];
    int total_marks[num_students];
    char grades[num_students];
    for (int i = 0; i < num_students; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No.: ");
        scanf("%d", &roll_nos[i]);
        for (int j = 0; j < num_subjects; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            do {
                scanf("%d", &marks[i][j]);
                if (marks[i][j] < 0 || marks[i][j] > 100) {
                    printf("Please enter marks between 0 and 100: ");
                }
            } while (marks[i][j] < 0 || marks[i][j] > 100);
        }
        total_marks[i] = 0;
        for (int j = 0; j < num_subjects; j++) {
            total_marks[i] += marks[i][j];
        }
        int average = total_marks[i] / num_subjects;
        if (average >= 90) {
            grades[i] = 'O';
        } else if (average >= 80) {
            grades[i] = 'E';
        } else if (average >= 70) {
            grades[i] = 'A';
        } else if (average >= 60) {
            grades[i] = 'B';
        } else if (average >= 50) {
            grades[i] = 'C';
        } else {
            grades[i] = 'D';
        }
    }
    printf("\nRoll No.\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tTotal Marks\tGrade\n");
    printLine('-', 100);
    for (int i = 0; i < num_students; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%c\n", roll_nos[i], marks[i][0], marks[i][1], marks[i][2], marks[i][3], total_marks[i], grades[i]);
    }
    return 0;}

//Output
/*
Enter the number of students: 2

Enter details for student 1:
Roll No.: 894
Enter marks for subject 1: 40
Enter marks for subject 2: 30
Enter marks for subject 3: 90
Enter marks for subject 4: 86 

Enter details for student 2:
Roll No.: 895
Enter marks for subject 1: 213
Please enter marks between 0 and 100: 21
Enter marks for subject 2: 80
Enter marks for subject 3: 90
Enter marks for subject 4: 100

Roll No.        Subject 1       Subject 2       Subject 3       Subject 4       Total Marks     Grade
----------------------------------------------------------------------------------------------------
894             40              30              90              86              246             B
895             21              80              90              100             291             A
*/