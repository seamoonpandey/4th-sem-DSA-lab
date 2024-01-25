#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
    if (n < 0)
    {
        puts("Cannot find fibonacci term for negative index");
        exit(1);
    }
    else if (n < 2)
    {
        return 1;
    }

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
    int n;

    puts("Enter the term to which you need fibonacci series");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%d\t", fibonacci(i));
    puts("");
    return 0;
}
