#include <stdio.h>
#include <stdlib.h>

long long *ft_tribonacci(const long long signature[3], size_t n)
{
    if (n > 0)
    {
        long long *expected = (long long *)malloc(n * sizeof(long long));
        if (expected == NULL)
        {
            return NULL; // Falha na alocação de memória
        }

        int counter = 0;
        long long actual_num = signature[0];
        long long after_num = signature[1];
        long long after_after_num = signature[2];

        while (counter < (int)n)
        {
            expected[counter] = actual_num;
            actual_num = after_num;
            after_num = after_after_num;
            after_after_num = expected[counter] + actual_num + after_num;
            ++counter;
        }

        return (expected);
    }
    return (NULL);
}

int main()
{
    const long long signature[3] = {2, 4, 6};
    const size_t n = 40;

    long long *result = ft_tribonacci(signature, n);

    if (result != NULL)
    {
        size_t i = 0;
        while (i < n)
        {
            printf("%lld ", result[i++]);
        }
        printf("\n");

        // Libertar a memória alocada
        free(result);
    }
    else
    {
        printf("Falha na alocação de memória.\n");
    }

    return 0;
}
