/** 
 * @file        pro1.c
 * @brief        This file contains program to count the number of words
 *              and characters in a file.

 *  
 * @author      w3resources
 * @bugs        No known bugs.
 *
 */

/*
 *#####################################################################
 *  Initialization block
 *  ---------------------
 *#####################################################################
 */

#include <stdio.h>
#include <stdlib.h>

void main() 
{

/*--- file pointer--*/
    FILE *fptr; 
/*--- char stroage--*/
    char ch; 
/*--- store word & chatacter count respectively ---*/
    int wrd=1,charctr=1;
/*---char array to store filename--*/    
    char fname[20];
    
    
/*--- To display the program details--*/
    
    printf("\n\n Count the number of words and characters in a file :\n");
	printf("---------------------------------------------------------\n"); 
	printf(" Input the filename to be opened : ");
	
/*--- user input filename--*/
	scanf("%s",fname);    
	
/*---open the file  --*/
    fptr=fopen(fname,"r"); 
    
 /*--- conditions to be applied accordingly--*/  
 /*--- check for valid file--*/
    if(fptr==NULL) 
     { 
         printf(" File does not exist or can not be opened."); 
      } 
    else 
        {   /*--- get the first character--*/
          ch=fgetc(fptr); 
            /*--- displaying filename--*/
          printf(" The content of the file %s are : ",fname); 
            /*--- while loop until End-Of-File condition--*/
          while(ch!=EOF) 
            { 
                  /*--- print the char--*/
                printf("%c",ch); 
                  /*--- check for space or newline to identify a word--*/
                if(ch==' '||ch=='\n')
                    { 
                     /*--- increment the word counter--*/
                        wrd++; 
                    }
                    else
                    {
                          /*--- increment the character counter--*/
                        charctr++; 
                    }
                    /*--- get the next character--*/
                ch=fgetc(fptr); 
            }
              /*--- display the file name,word count & character count --*/
        printf("\n The number of words in the  file %s are : %d\n",fname,wrd-2); 
        printf(" The number of characters in the  file %s are : %d\n\n",fname,charctr-1);         
        }
/*---close the file---*/
    fclose(fptr); 
}


Copy
