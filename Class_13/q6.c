//Search for an employee as per choice of the user
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
            emp[i].name[len - 1] = '\0';
        }
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
    int choice;
    printf("\nChoose search method:\n");
    printf("1. Search by Employee ID\n");
    printf("2. Search by Employee Name\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    getchar(); 
    if (choice == 1) {
        int searchID, found = 0;
        printf("Enter Employee ID to search: ");
        scanf("%d", &searchID);
        for (int i = 0; i < 5; i++) {
            if (emp[i].id == searchID) {
                printf("\nEmployee found!\n");
                printf("ID: %d\n", emp[i].id);
                printf("Name: %s\n", emp[i].name);
                printf("Age: %d\n", emp[i].age);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Employee with ID %d not found.\n", searchID);
        }
    } else if (choice == 2) {
        char searchName[50];
        int found = 0;
        printf("Enter Employee Name to search: ");
        fgets(searchName, sizeof(searchName), stdin);
        size_t len = strlen(searchName);
        if (len > 0 && searchName[len - 1] == '\n') {
            searchName[len - 1] = '\0';
        }
        for (int i = 0; i < 5; i++) {
            if (strcmp(emp[i].name, searchName) == 0) {
                printf("\nEmployee found!\n");
                printf("ID: %d\n", emp[i].id);
                printf("Name: %s\n", emp[i].name);
                printf("Age: %d\n", emp[i].age);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Employee with Name '%s' not found.\n", searchName);
        }
    } else {
        printf("Invalid choice! Please restart the program and choose 1 or 2.\n");
    }

    return 0;
}
