#include <stdio.h>
int main()
{
    printf("Hello World\n");
    int vara = 15;
    int varb = 30;
    int varc = 20;
    vara = vara + varc;
    varb = vara - varc;
    double vard = 1.734798;
    double vare = 0.0;
    vare = varb * vard;
    printf("Variable C eingeben:\n");
    scanf("%d",&varc);
    printf("Var c:%i\n",varc);
    return 0;
}