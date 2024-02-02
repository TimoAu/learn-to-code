#include <stdio.h>
int main (){
    int summe = 0;
    float durchschnitt;
    short int noten[]={1,1,3,4,5};

    for(short int i =0; i<5;i++){
        summe = summe + noten[i];
    }
    durchschnitt = (float)summe/5;
    printf("Durchschnitt: %1.1f\n", durchschnitt);
    return 0;

}