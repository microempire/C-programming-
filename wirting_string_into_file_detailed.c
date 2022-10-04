#include <stdio.h>
#include <stdlib.h>

void fwritestring(void);


int mian()
{

    fwritestring();
    return (0);
}

void fwritestring (void)
{
    
char str [50] = "Hello Welcome to the embedded system ";



FILE* fp = NULL;

fp = fopen ("write_string.txt", "w");
if (fp == NULL){

    printf("Error! file can't open");
    exit (1);
}

fprintf(fp, "%s\n",str);

if (fp != NULL){

fclose (fp);

}

}