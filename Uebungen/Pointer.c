#include <stdio.h>
int main (){
    int i, j;
    int *p;
    int *pi = NULL;
    printf("p zeigt auf: %p\n", p);
    p =&i;
    printf("p zeigt auf: %p\n, *p hat den Wert:%d\n",p,*p);
    *p=5;
    printf("*p hat den Wert: %d\n",*p);
    struct Struktur{
        int a;
        float b;
    }my1 = {.a=2, .b=3.3f};
    struct Struktur *p2 = &my1;
    printf("Wert von a:%i, Wert Pointer:%f\n",my1.a,p2->b);
}