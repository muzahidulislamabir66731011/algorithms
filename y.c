#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX 10010

bool isValid(char *s) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        // push opening brackets
        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        } 
        else {
            // no matching opening bracket
            if (top == -1) return false;

            char topChar = stack[top--];

            if ((c == ')' && topChar != '(') ||
                (c == '}' && topChar != '{') ||
                (c == ']' && topChar != '[')) {
                return false;
            }
        }
    }

    // valid only if no unmatched openings remain
    return top == -1;
}

// Example usage
int main() {
    char s1[] = "()[]{}";
    printf("%s -> %s\n", s1, isValid(s1) ? "true" : "false");

    char s2[] = "(]";
    printf("%s -> %s\n", s2, isValid(s2) ? "true" : "false");

    return 0;
}
