#include <stdio.h>

int main() {
    int n, event;
    scanf("%d", &n);
    
    int available_officers = 0;
    int untreated_crimes = 0;

    for (int i = 0; i < n; ++i) {
        scanf("%d", &event);
        if (event == -1) {
            if (available_officers > 0) {
                available_officers--;
            } else {
                untreated_crimes++;
            }
        } else {
            available_officers += event;
        }
    }

    printf("%d\n", untreated_crimes);
    
    return 0;
}

