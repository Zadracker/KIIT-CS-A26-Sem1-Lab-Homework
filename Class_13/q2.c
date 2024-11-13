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

//Output
/*
Enter Employee 1 Name: Kabir
Enter Employee 1 ID: 1
Enter Employee 1 Age: 18

Enter Employee 2 Name: Aryan
Enter Employee 2 ID: 2
Enter Employee 2 Age: 20

Enter Employee 3 Name: Sonia
Enter Employee 3 ID: 3
Enter Employee 3 Age: 19

Enter Employee 4 Name: Steve
Enter Employee 4 ID: 4
Enter Employee 4 Age: 30

Enter Employee 5 Name: Kim
Enter Employee 5 ID: 5
Enter Employee 5 Age: 24


Employee Information:

ID	Name	Age
--------------------
1	Kabir	18
2	Aryan	20
3	Sonia	19
4	Steve	30
5	Kim     24
*/