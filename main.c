#include <stdio.h>

int main(void)
{
    int i = 0;
    int votoStudente;
    int votoTotale = 0;
    float mediaVoti;

    while (votoStudente != 0)
    {
        printf("Inserisci il tuo voto\n");
        scanf("%d", &votoStudente);
        votoTotale = votoTotale + votoStudente;
        i++;
    }

    mediaVoti = votoTotale/(i-1);
    printf("La media è uguale a %.2f", mediaVoti);

    return 0;
}
