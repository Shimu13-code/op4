#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int a = 10;
    printf("Initial value of a: %d\n", a);

    a++;
    printf("After increment (a++): %d\n", a);

    a--;
    printf("After decrement (a--): %d\n", a);

    return 0;
}
