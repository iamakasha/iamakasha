#include <stdio.h>

int main() {
    char name[100];
    char className[100];
    char branch[100];
    char registerNo[100];  // Fixed variable name and syntax

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your class: ");
    scanf("%s", className);

    printf("Enter your branch: ");
    scanf("%s", branch);

    printf("Enter your register no.: ");
    scanf("%s", registerNo);  // Fixed variable name and syntax

    printf("\nHello %s!\n", name);
    printf("Your class is %s.\n", className);
    printf("Your branch is %s.\n", branch);
    printf("Your register no. is %s.\n", registerNo);  // Fixed variable name

    return 0;
}
