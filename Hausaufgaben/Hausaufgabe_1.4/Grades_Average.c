#include<stdio.h>
int main(){
    short int fehler = 0;
    printf("Anzahl der Noten eingeben(mind 1):\n");
    int anzahl;
    int summe=0;
    float durchschnitt;
    scanf("%d",&anzahl);
    int noten[anzahl];
    printf("Noten eingeben:\n");
    if(anzahl>1){
         for(int i = 0; i<anzahl; i++){
        int eingabe;
        scanf("%d",&eingabe);
        if(eingabe<1){
            printf("ungültige Eingabe!\n");
            printf("Abbruch!");
            fehler = 1;
            break;
        }
        if(eingabe>6){
            printf("ungültige Eingabe!\n");
            printf("Abbruch!\n");
            fehler = 1;
            break; 
        }
        noten[i]=eingabe;
    }
    if(fehler == 0){
            printf("Noten:");
    for(int k = 0; k<anzahl; k++){
        printf("%i,", noten[k]);
        summe = summe + noten[k]; 
        }
    durchschnitt = (float)summe/anzahl;
    printf("\n Durchschnitt:%f", durchschnitt);
    }

    }else{
        printf("ungültige Eingabe\n");
    }
    

}