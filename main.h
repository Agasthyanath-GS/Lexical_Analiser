
/*	Project_Name	:	Lexical_Analiser
	Auther_Name 	:	Agasthyanath-GS
*/	
#ifndef MAIN_H
#define MAIN_H

#define sucess 0
#define failure 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int print_tocken(char *);
int find_keyword(char *);
int string_literal(char *);
int integer_literal(char *);

#endif