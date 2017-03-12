// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//void remspc(char *);
int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	scanf("%d",&n);
	printf("%d",n);
	return 0;
}

/*int __cdecl uscan (
        const char *format,
        ...
        )
{
        va_list arglist;
        va_start(arglist, format);
  8/      return vscanf(_input_l, format, NULL, arglist);
}