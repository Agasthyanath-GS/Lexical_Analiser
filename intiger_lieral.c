
/*	Project_Name	:	Lexical_Analiser
	Auther_Name 	:	Agasthyanath-GS
*/	
#include"main.h"
int integer_literal(char *string)
{
  int size,i=0;
   size=strlen(string);						//finding size of reading string
   if(size == 1) 						    //check wheather the size of sting is one
	{
     if(strcmp(string,".") == 0)            //if the string contain only "." print as operator
	  {
		printf("Operator : %s\n",string);
        return sucess;
      }
     if(string[0] >= 48 && string[0] <= 57)	    //check wheather the single byte string contains any number and print as literal
		{
        
         printf("intiger Literal : %s\n",string);
         return sucess;                          
		}
    }
   else                                        //if the string contains more then one charechter the work else part
      { 
		while(string[i] != '\0')               //run while loop till end of the string
		 {
         if(string[i] == 46 || (string[i] >= 48 && string[i] <= 57))                    //check wheather each charechters inside the string belongs to numeric value
			i++;
         else
            return failure;                    //if the string contains charechters rather than numbers hence it is not an numeric value
		  }	
               printf("intiger Literal : %s\n",string);   //if the while exit without any return hence the string contains numeric values and print as literal                   
			   return sucess;
      }
}    