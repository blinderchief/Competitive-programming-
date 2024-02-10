#include <stdio.h>
#include <string.h>

int main() {
    char borze_code[201];
    scanf("%s", borze_code);

    int len = strlen(borze_code);
    char ternary_number[ len];

    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (borze_code[i] == '.') {
            ternary_number[j++] = '0';
        } else if (borze_code[i] == '-' && borze_code[i + 1] == '.') {
            ternary_number[j++] = '1';
            i++; 
        } else if (borze_code[i] == '-' && borze_code[i + 1] == '-') {
            ternary_number[j++] = '2';
            i++;
        }
    }

    ternary_number[j] = '\0'; // Null-terminate the string

    printf("%s\n", ternary_number);

    return 0;
}

