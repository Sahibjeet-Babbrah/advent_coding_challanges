#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int analyze_paranthesis(char* string);

int main() {
    char* input;
    printf("Enter the instructions, only using '(' and ')' | Enter 'q' to exit\n");
    while (1) {
        scanf("%s", input);
        if (strcmp(input, "q") == 0) {
            break;
        }
        analyze_paranthesis(input);
    }
    return 0;
}

/* Function to analyze the collection of paranthesis */
int analyze_paranthesis(char* string) {
    int current_floor = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == '(')
            current_floor++;
        else if (string[i] == ')')
            current_floor--;
    }
    printf("Santa ends up on floor %d\n", current_floor);
}