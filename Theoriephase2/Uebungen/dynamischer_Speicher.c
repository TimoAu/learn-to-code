#include<stdio.h>
#include<stdlib.h>
int main(){
    unsigned int size_array;
    printf("Länge des Arrays eingeben:\n");
    scanf("%i",&size_array);
    printf("---------------------------------------\n");
    int* ptr1 = (int*)malloc(size_array*sizeof(int));
    for(int k=1; k< (size_array+1); k++){
        *ptr1 = k;
        ptr1++;
    }
    for(int i = 0; i<size_array;i++){
        ptr1--;
    }
    for(int m = 0; m<size_array;m++){
        printf("\n");
        printf("%i\n",*ptr1);
        ptr1++;
    }
    free(ptr1);
}
