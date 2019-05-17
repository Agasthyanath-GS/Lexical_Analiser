
/*	Project_Name	:	Lexical_Analiser
	Auther_Name 	:	Agasthyanath-GS
*/	
#include "main.h" 
/* check wheather the string matches any keywords listed below 
   if it matches print string as keyword and reture sucess else 
   return failure */
int find_keyword(char *string)
{
  if(!strcmp(string,"auto") || !strcmp(string,"break") || !strcmp(string,"case") || !strcmp(string,"char") || !strcmp(string,"const") || !strcmp(string,"continue") || 
	 !strcmp(string,"default") || !strcmp(string,"do") || !strcmp(string,"double") || !strcmp(string,"else") || !strcmp(string,"enum") || !strcmp(string,"extern") || 
	 !strcmp(string,"float") || !strcmp(string,"for") || !strcmp(string,"goto") || !strcmp(string,"if") || !strcmp(string,"int") || !strcmp(string,"long") || 
     !strcmp(string,"register") || !strcmp(string,"return") || !strcmp(string,"short") || !strcmp(string,"signed") || !strcmp(string,"sizeof") || !strcmp(string,"static") || 
     !strcmp(string,"struct") || !strcmp(string,"switch") || !strcmp(string,"typedef") || !strcmp(string,"union") || !strcmp(string,"unsigned") || !strcmp(string,"void") || 
     !strcmp(string,"while") || !strcmp(string,"volatile") )
	{	
		printf("keyword : %s\n",string);
		return sucess;
	}
  else
		return failure;
}
