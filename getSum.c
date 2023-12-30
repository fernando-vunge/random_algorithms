#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//main code
int get_sum(int a, int b)
{
    double soma;
    if (a == b)
        return (a);

    if (a > b)
        soma = ((a - b + 1)) * (b + a);
    else if (a < b)
        soma = ((b - a + 1)) * (a + b);

    soma /= 2;
    return ((int)soma);
}

int main(int argc, char const *argv[])
{
    srand(time(NULL));
    int a = rand();
    int b = rand();
    printf("(%d , %d) => %d", a, b, get_sum(a,b));
    return (0);
}
