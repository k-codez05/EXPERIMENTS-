#include <stdio.h>
#include <string.h>


struct StringData {
    char str[100];
};


struct StringData reverse(struct StringData s) {
    struct StringData rev;
    int len = strlen(s.str);

    for(int i = 0; i < len; i++) {
        rev.str[i] = s.str[len - 1 - i];
    }
    rev.str[len] = '\0';  

    return rev;
}

int main() {
    struct StringData input, output;

    printf("Enter a string: ");
    gets(input.str);     
    output = reverse(input);

    printf("Reversed string: %s\n", output.str);

    return 0;
}
