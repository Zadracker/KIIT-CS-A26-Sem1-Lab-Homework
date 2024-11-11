//Define a structure 'employee' having data - employee name, employee ID, employee age. Input info for 1 employee and display the same {use structure}

#include <stdio.h>
#include <string.h>
void printLine(char ch, int times) {
    for (int i = 0; i < times; i++) {
        putchar(ch);
    }
    putchar('\n');
}
struct Employee {
    char name[50];
    int id;
    int age;
};
int main() {
    struct Employee emp;
    printf("Enter Employee Name: ");
    fgets(emp.name, sizeof(emp.name), stdin);
    size_t len = strlen(emp.name);
    if (len > 0 && emp.name[len - 1] == '\n') {
        emp.name[len - 1] = '\0';
    }
    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Employee Age: ");
    scanf("%d", &emp.age);
    printf("\nEmployee Information:\n");
    printf("\nID\tName\tAge\n");
    printLine('-', 20);
    printf("%d\t%s\t%d\n", emp.id, emp.name, emp.age);
    return 0;
}
