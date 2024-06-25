#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nombre;
    int intents = 0;
    int numero_random = rand() % 11;
    int a;

    printf("Com et dius?\n");
    scanf("%s", &nombre);
    printf("Et dius %s", &nombre);

    while(1)
    {
        printf("Digues un número\n");
        scanf("%d", &a);
        intents++;
        if (numero_random == a)
        {
            printf("%s Ho has endevinat\n", &nombre);
            printf("Estaves pensant el número %d", numero_random);
            printf("Ho has fet en %d intents.", intents);
            break;
        }
        else
        {
            printf("Segueix intentant\n");
        }
    }

    return (0);
}