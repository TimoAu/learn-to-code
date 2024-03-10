void dreieck1(int a){
    for(int i = 0; i<a; i++ ){
        for(int k=0; k<=i; k++){
            printf("x");
        }
        printf("\n");
    }
}
void dreieck2(int b){
    for(int e = 0; e<b;e++){
        for(int f= 0;f<=(b-e); f++){
            printf(" ");
        }
        for(int t = 0; t<=2*e;t++){
            printf("x");
        }
        printf("\n");
    }
    
}