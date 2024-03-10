#include<stdio.h>
int main(){
    int dezimalzahl;
    printf("Dezimalzahl eingeben:\n");
    scanf("%i",&dezimalzahl);
    int rest;
    int ergebnis[100];
    int k=0;
    while(dezimalzahl>0){
        ergebnis[k]= dezimalzahl%2;
        dezimalzahl = dezimalzahl/2;
        k++;
    }
    printf("Binär:");
    for(int f = k;f>=0;f-- ){
        if((f+1)%4==0){
            printf("  ");
        }
        printf("%i",ergebnis[f]);

    }
}