#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    int numero1, resultado;

    printf("Informe um numero para saber o dobro dele: ");
    scanf("%i\n",numero1);

    resultado = numero1 * 2;

    printf("%i", resultado);

    return 0;
}
