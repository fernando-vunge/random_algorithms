#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

char* printerError(char *s) {
    char *error_rate;
    int string_size;
    int error_qtd = 0;
    int caracter_counter = 0;
    if (s == NULL || sizeof(s) <= 0)
        return (NULL);

    string_size = strlen(s);
    while (caracter_counter < string_size)
    {
        if(!((int)s[caracter_counter] >= 97 && (int)s[caracter_counter] <= 109))
        {
            error_qtd++;
        }
        caracter_counter++;
    }
    
    error_rate = (char *)malloc(string_size + 1  * sizeof(char));
    snprintf(error_rate,string_size + 1,"%d/%d",error_qtd,string_size);
    return (error_rate);
}

int main(int argc, char const *argv[])
{
    char *result = printerError("aaazbzbbyccc");
    printf("\n%s\n",result);
    free(result);
    return 0;
}
