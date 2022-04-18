#include <stdio.h>
#include <stdlib.h>

//Written by Bunyamin Yavuz Fri Apr 15 22:38:09 2022

//File operations

int main()
{
    /*
            <-----Fundamental File Operations----->

    "a" add

    "r" read

    "w" write

    fopen()	opens new or existing file

    fclose closes the file

    fprintf()	write data into the file

    fscanf()	reads data from the file

    fputc()	writes a character into the file

    fgetc() reads data from the file

    fgets()  read batch data into file

    fputs() write batch from the file

    EOF  End Of File

    */




    // Declaration as a file pointer
    //FILE *file1;
    /*

    fopen to open the file.

    "C:\\Users\\BunyaminYavuz\\OneDrive\\Masaüstü\\dosya2" is location of the file.

    "w" is write command

    .txt is textbox type

    */

    //file1 = fopen("C:\\Users\\BunyaminYavuz\\OneDrive\\Masaüstü\\file1.txt","w");

    /*
      <-----Writing my name inside the file----->
      // Prints Bunyamin
                yavuz

    fputc('B',file1);
    fputc('u',file1);
    fputc('n',file1);
    fputc('y',file1);
    fputc('a',file1);
    fputc('m',file1);
    fputc('i',file1);
    fputc('n',file1);
    fputc('\n',file1);
    fputc('y',file1);
    fputc('a',file1);
    fputc('v',file1);
    fputc('u',file1);
    fputc('z',file1);

    */




    /*

             <-----Reading the file by using fgetc() function----->
    FILE *file1Read;
    char character;
    file1Read = fopen("C:\\Users\\BunyaminYavuz\\OneDrive\\Masaüstü\\file1.txt","r");

    do{
    character = fgetc(file1Read);

    printf("%c",character);
    }
    // End of file (EOF) it gets till the last end of file character
    while(character != EOF);
    // Close the file
    fclose(file1Read);

    */




    /*

              <----- Reading the file by using fgets() function----->
    FILE *file1Read2;
    char character2[100];
    file1Read2 = fopen("C:\\Users\\BunyaminYavuz\\OneDrive\\Masaüstü\\file1.txt","r");

    fgets(character2,100,file1Read2);
    puts(character2);

    fclose(file1Read2);

    */


    return 0;
}
