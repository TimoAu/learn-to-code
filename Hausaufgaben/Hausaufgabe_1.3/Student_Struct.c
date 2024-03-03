#include<stdio.h>
#define laenge_name 50
#define laenge_noten 20
typedef struct studenten {
    int matrikelnummer;
    char name[laenge_name];
    char noten[laenge_noten];
}student;
int main(){
    student student1;
    student1.matrikelnummer = 12345;
    student1.name[laenge_name] = "Timo";
    printf("Matrikelnummer:%d\n",student1.matrikelnummer);
    printf("%s\n",student1.name);
}
