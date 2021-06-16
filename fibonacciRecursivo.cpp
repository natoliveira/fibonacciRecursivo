#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, fn[11], fib[4], cont;

    scanf("%d", &n);

    fib[1] = 1;
    fib[2] = 1;
    fn[1] = 1;

    for(cont = 3; cont <= n; cont++)
    {
        fn[1] = fib[1] + fib[2];
        fib[1] = fib[2];
        fib[2] = fn[1];
    }
    printf("O valor da soma eh %d\n", fn[1]);

return 0;
}
