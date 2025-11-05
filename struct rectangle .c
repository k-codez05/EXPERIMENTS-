#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

struct Rectangle inputRectangle()
{
    struct Rectangle r;
    printf("Enter length: ");
    scanf("%d", &r.length);
    printf("Enter breadth: ");
    scanf("%d", &r.breadth);
    return r;
}

int area(struct Rectangle r)
{
    return r.length * r.breadth;
}

int main()
{
    struct Rectangle rect;

    rect = inputRectangle();
    printf("Length = %d, Breadth = %d\n", rect.length, rect.breadth);
    printf("Area = %d\n", area(rect));

    return 0;
}
