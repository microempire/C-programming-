#include <stdio.h>
#include <stdlib.h>     //to use system function command "standard library file"

void area();

int main(){

   
    
    area();
    system ("pause");
    
    

    return 0; //
}


void area(){

    FILE* fin = NULL ;
    FILE* fout2 = NULL ;

    fin = fopen("r.txt" , "r");  
    fout2 = fopen("a2.txt" , "w");   // a = append , w = overwrite , r = read , r+ =read&wirte, w+,a+

    if ((fin == NULL) || (fout2 == NULL))     // "&& " = and operator , "||" = or operator
    {
        printf("r.txt cannot open");
    

        return 1; //to show error use return 1

    }

    float r = 0.0;
    float a = 0.0;

    

    while (!feof(fin))   //before end of file(file end of file)
    {
        r = 0.0 ;
    
    fscanf(fin ,"%f", &r);
    if (r != 0){
    a = 3.14 * r * r ;

    printf ("The area is %0.2f \n \n",a);   //0.2 mean 2 position after "."
    
    fprintf (fout2 , "The area is %f \n", a );
    }
    }
    if (fin != NULL){

        fclose(fin);
    }
    if (fout2 != NULL){

        fclose(fout2);
    }

}