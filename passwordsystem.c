/*
Name Mark Thuranira
Reg no ct100/g/26254/25
Des Do while loop password system
*/
#include <stdio.h>
#include <string.h>

int main() {
    char password[10];

    do {
        printf("Enter password: ");
        scanf("%s", password);
    } while (strcmp(password, "1234") != 0); // Repeat until password == "1234"

    printf("you have been granted access!\n");

    return 0;
}
