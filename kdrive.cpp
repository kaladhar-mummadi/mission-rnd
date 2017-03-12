// kdrive.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<malloc.h>
int pre(char);
int fun(){
	int b=5;
	static int c;
	char *p="kaladhar";
	char *s;
	printf("local variable %p \n",&b);
	printf("static variable %p \n",&c);
	printf("malloc %p  \n",malloc(sizeof(char)));
	printf("pointer variable %p",p);
	return b;
}
int _tmain(int argc, _TCHAR* argv[])
{
	fun();
	printf(" function %p",&fun);
	return 0;
}