#include <stdio.h>

int main()
{
    FILE *ptr = NULL;
    // char string[30] = "This is for writing a file";

    // ******* For reading a file ********
    // ptr = fopen("c.txt", "r");
    // fscanf(ptr, "%s", string);
    // printf("The content of this file has %s\n", string);

    // ******* For writing a file ********
    // ptr = fopen("31_Function_For_File_IO.txt", "w");
    // fprintf(ptr, "%s", string);
    
    // ******* For appending a file ********
    // ptr = fopen("31_Function_For_File_IO.txt", "a");
    // fprintf(ptr, "%s", string);

    // ******* Using fgetc Function *******
    // ptr = fopen("31_File_IO_Function.txt", "r");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);


    // ******* Using fgets Function *******
    // char str[3];
    // fgets(str, 5, ptr);
    // printf("The string is %s\n", str);


    // ******* Using fputc Function *******
    // ptr = fopen("31_File_IO_Function.txt", "w");
    // fputc('o', ptr);


    // ******* Using fputc Function *******
    // fputs("ashish kushwaha", ptr);


    // ******* using r+ mode *******
    // ptr = fopen("31_File_IO_Function.txt", "r+");
    // fputs("ashish kushwaha", ptr);
    
    // ******* using a+ mode *******
    // ptr = fopen("31_File_IO_Function.txt", "a+");
    // fputs("ashish kushwaha", ptr);
    
    // ******* using w+ mode *******
    ptr = fopen("31_File_IO_Function.txt", "w+");
    fputs("ashish kushwaha", ptr);




    fclose(ptr);


    return 0;
}