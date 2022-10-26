#include <stdio.h>

char menu() {

    char menu_option;

        printf("\n\n\n");
        printf("      Menu\n");
        printf("a: Place resistor.\n");
        printf("b: Remove resistor.\n");
        printf("c: Quit\n");
        printf("Enter your choice: ");
        scanf("%c", &menu_option);

        return menu_option;
}