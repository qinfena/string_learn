#include "strlen.h"

size_t
strlen(char *string){
	int length = 0;
	/*
 	**依次访问字符串的内容，计数字符数，直到遇见NULL终止符。
	*/
    while( *string++ != '\0')	
        length += 1;

	return length;
}
