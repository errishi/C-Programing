// read existing file data.
#include <stdio.h>

int main()
{
    FILE *myFile = NULL;

    //-------Reading file---------
    // char string[34]; // to read file content in this array.

    /* 
    myFile = fopen("first.txt", "r");
    fscanf(myFile, "%s", string);
    printf("The content of the file\n%s", string);
    */

   //--------Writing in file------------

    char string2[64] = "This content is produced by Rishikesh\n";
    // myFile = fopen("first.txt","w");           //only for write and existing data remove autometically
    myFile = fopen("first.txt","a");          //write without removing existing data.
    fprintf(myFile,"%s",string2);

    fclose(myFile);
    return 0;
}