//Student Structure

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
    char grade;
};

void calculateResults(struct Student* student) {
    student->total_marks = 0;
    for (int i = 0; i < 4; i++) {
        student->total_marks += student->marks[i];
    }
    student->avg = student->total_marks / 4;
    if (student->avg >= 90) {
        student->grade = 'O';
    } else if (student->avg >= 80) {
        student->grade = 'E';
    } else if (student->avg >= 70) {
        student->grade = 'A';
    } else if (student->avg >= 60) {
        student->grade = 'B';
    } else if (student->avg >= 50) {
        student->grade = 'C';
    } else {
        student->grade = 'D';
    }
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
    printf("\nRoll No.\tSubject 1\tSubject 2\tSubject 3\tSubject 4\tTotal Marks\tAverage\tGrade\n");
    printLine('-', 110);
    for (int i = 0; i < num_students; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%c\n",
               students[i].roll_no, students[i].marks[0], students[i].marks[1],
               students[i].marks[2], students[i].marks[3], students[i].total_marks,
               students[i].avg, students[i].grade);
    }
    return 0;
}

//Output
/*
Enter the number of students: 1

Enter details for student 1:
Roll No.: 94
Enter marks for subject 1: 98
Enter marks for subject 2: 97
Enter marks for subject 3: 94
Enter marks for subject 4: 90

Roll No.        Subject 1       Subject 2       Subject 3       Subject 4       Total Marks     Average Grade  
-------------------------------------------------------------------------------------------------------------- 
94              98              97              94              90              379             94            O

*/