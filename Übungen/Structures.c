#include<stdio.h>
int main(){
    struct struktur{
        int i1;
        float f1;
        char c1;
    };
    struct struktur st1;
    st1.i1 = 200;
    st1.f1 = 3.3333;
    st1.c1 ='a';
    printf("%d\n", st1.i1);
    printf("%f\n",st1.f1);
    printf("%c\n",st1.c1);
    return 0;
    }