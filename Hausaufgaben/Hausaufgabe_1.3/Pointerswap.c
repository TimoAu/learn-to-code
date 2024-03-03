#include<stdio.h>
int main(){
    int a = 50;
    int b = 100;
    int c;
    printf("Integer a:%d\n", a);
    printf("Integer b:%d\n",b);
    int* ptr1 = &a;
    int* ptr2 = &b;
    c = *ptr1;
    a = *ptr2;
    b = c;
    printf("Integer a:%d\n",a);
    printf("Integer b:%d\n",b);
}

