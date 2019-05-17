
/*	Project_Name	:	Lexical_Analiser
	Auther_Name 	:	Agasthyanath-GS
*/	
#include"main.h"
int print_tocken(char *string)
{
  int status;
  if(string[0] == '\0')
     return failure;

  status = find_keyword(string);             //call keyword funtion if the string is keyword print keyword and return sucess else return failure
  if(status == 0)
  return sucess;

  status = string_literal(string);			//call string_literal funtion if the string is literal print literal and return sucess else return failure
  if(status == 0)
  return sucess;

  status = integer_literal(string);			//call intiger_literal funtion if the string is literal print literal and return sucess else return failure
  if(status == 0)
  return sucess;
  
  printf("Identifier : %s\n",string);         //if all functions return failure the string will be identifier
  return sucess;
}