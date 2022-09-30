#include <stdio.h>
#include <stdlib.h>     //to use system function command "standard library file"

void area();

int main(){

    for (int i = 0 ; i < 5 ; i++){
    
    area();
    system ("pause");
    
    }

    return 0; //
}


void area(){

    FILE* fout1 = NULL ;
    FILE* fout2 = NULL ;

    fout1 = fopen("r.txt" , "a");  
    fout2 = fopen("a.txt" , "a");   // a = append , w = overwrite , r = read , r+ =read&wirte, w+,a+

    if ((fout1 == NULL) || (fout2 == NULL))     // "&& " = and operator , "||" = or operator
    {
        printf("r.txt cannot open");
    

        return 1; //to show error use return 1

    }

    float r = 0.0;
    float a = 0.0;

    printf("Please entre r : ");
    scanf("%f", &r);

    a = 3.14 * r * r ;

    printf ("The area is %0.2f \n \n",a);   //0.2 mean 2 position after "."
    fprintf (fout1 , "The area is %f\n" , r );
    fprintf (fout2 , "The area is %f \n", a );
    if (fout1 != NULL){

        fclose(fout1);
    }
    if (fout2 != NULL){

        fclose(fout2);
    }

}