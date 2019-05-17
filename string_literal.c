/*	Project_Name	:	Lexical_Analiser
	Auther_Name 	:	Agasthyanath-GS
*/	

#include "main.h"
static int flag=0;
int string_literal(char *string)
{
  int len = strlen(string);

/*check wheather the word starts 
  with " then the word belongs to 
  a string .till the word gets a "
  in the end the words coming  to the 
  function belongs to the same string */ 
 

 	if(string[0] == '"' && string[len-1] == '"')         
      {
 		printf("string Literal : %s\n",string);
        return sucess;
		}
    if(string[0] == '"')
	   {
		printf("string Literal : %s\n",string);
		flag = 1; 
        return sucess;
		}
	if(string[len -1] == '"')
	   {
		printf("stringLiteral : %s\n",string);
		flag = 0; 
        return sucess;
		}
	if(flag == 1)
		{
		printf("string Literal : %s\n",string); 
        return sucess;
		}
     return failure;
}