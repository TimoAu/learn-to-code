#include <stdio.h>
int main (){
    int wert = 0;
    int prozent = 0;
    float ergebnis = 0;
    printf("Wert eingeben:");
    scanf("%i",&wert);
    printf("Prozentzahl eingeben:");
    scanf("%i",&prozent);
    ergebnis = (float)wert*prozent/100;
    printf("%i Prozent von %i = %3.2f", prozent,wert,ergebnis);

}