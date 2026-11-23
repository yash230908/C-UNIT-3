
#include <stdio.h>

int main() 
{
    int a[3], i;
    float b[3];
    char c[3];

    printf("Enter 3 integers:\n");
    for(i=0; i<3; i++)
        scanf("%d", &a[i]);

    printf("Enter 3 float values:\n");
    for(i=0; i<3; i++)
        scanf("%f", &b[i]);

    printf("Enter 3 characters:\n");
    for(i=0; i<3; i++)
        scanf(" %c", &c[i]);

    printf("\nInteger Array:\n");
    for(i=0; i<3; i++)
        printf("%d %p\n", a[i], (void*)&a[i]);

    printf("\nFloat Array:\n");
    for(i=0; i<3; i++)
        printf("%.2f %p\n", b[i], (void*)&b[i]);

    printf("\nCharacter Array:\n");
    for(i=0; i<3; i++)
        printf("%c %p\n", c[i], (void*)&c[i]);

    return 0;
}

