#include <stdio.h>
void area();
int main(){

    area();

    return 0;
}


void area(){

    FILE* fout = NULL ;

    fout = fopen("fout.txt" , "w");

    if (fout == NULL )
    {
        printf("fout.txt cannot open");

        return 1 ;

    }

    float r = 0.0;
    float a = 0.0;

    printf("Please entre r : ");
    scanf("%f", &r);

    a = 3.14 * r * r ;

    printf ("The area is %f \n \n",a);
    fprintf (fout , "The area is %f", a );

    if (fout != NULL){

        fclose(fout);
    }

}