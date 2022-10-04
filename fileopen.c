#include <stdio.h>


int main2 (){
    printf("hello world");
    FILE* fp2 = NULL;

    fp2 = fopen ("hellotest.txt", "w");

if (fp2 == NULL){

    printf("error opening file");
    
}

    fprintf (fp2, "hello world \n");

    fclose (fp2);


    return 0;
}

