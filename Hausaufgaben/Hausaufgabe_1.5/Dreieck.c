#include<stdio.h>
#include"dreieck_funktionen.h"
void dreieck1(int a);
void dreieck2(int b);
int main(){
    int seitenlaenge;
    printf("Seitenlänge des Dreiecks eingeben:\n");
    scanf("%i",&seitenlaenge);
    dreieck1(seitenlaenge);
    printf("\n");
    dreieck2(seitenlaenge);
}
