#include<stdio.h>
int main(){
    int rest;
    int jahreszahl;
    printf("Jahreszahl eingeben:\n");
    scanf("%d", &jahreszahl);
    if(jahreszahl>0){
       rest = jahreszahl%4;
        if(rest == 0){
            printf("%d ist ein Schaltjahr", jahreszahl);
        }else{
            printf("%d ist kein Schaltjahr", jahreszahl);
        }
    }else{
        printf("ungültige Eingabe!\n");
    }
    
}