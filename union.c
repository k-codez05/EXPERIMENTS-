#include <stdio.h>
#include <string.h>

// Define a union
union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    // Assign and print integer
    data.i = 20;
    printf("After assigning integer:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.str = %s\n\n", data.str);

    // Assign and print float
    data.f = 20.5;
    printf("After assigning float:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.str = %s\n\n", data.str);

    // Assign and print string
    strcpy(data.str, "Hello World");
    printf("After assigning string:\n");
    printf("data.i = %d\n", data.i);
    printf("data.f = %f\n", data.f);
    printf("data.str = %s\n", data.str);

    return 0;
}
