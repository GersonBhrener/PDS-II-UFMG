#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "matematica.h"

int main(int argc, char const *argv[])
{
    float angulo;
    printf("Insira o valor do angulo: ");
    scanf("%f", &angulo);

    float seno_angulo = calcular_seno(angulo);
    float cosseno_angulo = calcular_cosseno(angulo);
    float tangente_angulo = calcular_tangente(angulo);

    printf("O seno do angulo de medida %f radianos eh %f\n", angulo, seno_angulo);
    printf("O cosseno do angulo de medida %f radianos eh %f\n", angulo, cosseno_angulo);
    printf("A tangente do angulo de medida %f radianos eh %f\n", angulo,tangente_angulo);

    return 0;
}
