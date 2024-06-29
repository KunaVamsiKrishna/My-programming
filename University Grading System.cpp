#include <stdio.h>

int main() {
    int g;
    printf("Enter your marks: ");
    scanf("%d", &g);

    if (g <= 100 && g >= 0) {
        switch (g / 10) {
            case 10: 
            case 9:  
                printf("A");
                break;
            case 8:  
                printf("B");
                break;
            case 7:  
                printf("C");
                break;
            case 6:  
                printf("D");
                break;
            default: 
                printf("F");
                break;
        }
    } else {
        printf("ENTER VALID MARKS");
    }

    return 0;
}
