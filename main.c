/*	Project_Name	:	Lexical_Analiser
	Auther_Name 	:	Agasthyanath-GS
*/	

#include "main.h"


int main(int argc,char *argv[])
{
  FILE *fp;                                 //creating a file pointer 
  char string[25],ch = '\n';
  int j=0,i,file_size;
  static int string_status;

	if(argv[1] == NULL)
	{
   		printf("enter a file name\n");
		return 0;
	}

 fp = fopen(argv[1],"r");                  //opening a file in read mode with file pointer fp

  if(fp == NULL)                             // check for file pointer is empty or not if empty print error
 	 {
 	  printf("file not opened\n");
	  return failure;
 	 }
 
 
  
  fseek(fp,0,SEEK_END);                        //to move pointer to the end of the file
  file_size = ftell(fp);                       //to get the size of the file
  
  fseek(fp,0,SEEK_SET);                        //moving cursor back to starting of the file

  for(i=0;i < file_size;i++)                   //reading char by char from file
	 {
       ch = fgetc( fp );
		
       if(ch == '\n')
		{
			ch = fgetc( fp );
		}
			
           string[j++]	= ch;				
				
				
					if(ch == ' ' || ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '{' || ch == '}' || ch == '[' || 
					   ch == ']' || ch == '(' || ch == ')' || ch == ',' || ch == ';' || ch == '=' || ch == '>' || ch == '<'    )
                         { 
								
						
						  		string[j -1] = '\0';
		
                                print_tocken(string);                 //if the variable load with any operator then load the string to function
								j = 0;
								
						
				    			if(ch != ' ')                        //print the value inside the variable as operator
					  			{
									printf("operator : %c\n",ch);
								}

								
                         }
			
	}
fclose(fp);                           //closing file
return 0;
}
		