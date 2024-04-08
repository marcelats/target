#include <stdio.h>

int fibonacci(int n);

int fibonacci(int n)
{
    if(n == 0) return 1;
    int n1 = 0, n2 = 1, n3 = 1, i;
    for(i = 0; n3 < n; i++)
    {
        n1 = n2;
        n2 = n3;
        n3 = n1 + n2;
    }
    if(n3 == n) return 1;
    else return 0;
}

int main()
{
    int n = 34;
    if (fibonacci(n)) printf("%d pertence a sequencia\n", n);
    else printf("%d nao pertence a sequencia\n", n);
    return 0;
}
