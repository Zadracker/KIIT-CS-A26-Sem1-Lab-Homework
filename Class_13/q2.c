//Define a structure 'employee' having data - employee name, employee ID, employee age. Input info for 5 employee and display the same {use structure}
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
struct Employee emp[5];
for (int i = 0; i < 5; i++) {
    printf("Enter Employee %d Name: ", i + 1);
    fgets(emp[i].name, sizeof(emp[i].name), stdin);
    size_t len = strlen(emp[i].name);
    if (len > 0 && emp[i].name[len - 1] == '\n') {
        emp[i].name[len - 1] = '\0';}
    printf("Enter Employee %d ID: ", i + 1);
    scanf("%d", &emp[i].id);
    printf("Enter Employee %d Age: ", i + 1);
    scanf("%d", &emp[i].age);
    getchar();
    printf("\n");
}
printf("\nEmployee Information:\n");
printf("\nID\tName\tAge\n");
printLine('-', 20);
for (int i = 0; i < 5; i++) {
    printf("%d\t%s\t%d\n", emp[i].id, emp[i].name, emp[i].age);
}
return 0;}
