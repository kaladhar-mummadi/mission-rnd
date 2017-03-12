// getdecimal.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

int __cdecl vscanf (
        INPUTFN inputfn,
        const char *format,
        _locale_t plocinfo,
        va_list arglist
        )
{
    int retval;

    _VALIDATE_RETURN( (format != NULL), EINVAL, EOF);

    _lock_str2(0, stdin);
    __try {
        retval = (inputfn(stdin, format, plocinfo, arglist));
    }
    __finally {
        _unlock_str2(0, stdin);
    }

    return(retval);
}
int __cdecl uscanf (
        const char *format,
        ...
        )
{
        va_list arglist;
        va_start(arglist, format);
        return vscanf(_input_l, format, NULL, arglist);
}

int _tmain(int argc, _TCHAR* argv[])
{
	char a[10];
	int i=0,n,sum=0;
	printf("enter binary string \n");
	uscanf("%s",a);
	n=strlen(a);
	while(i<n){
		sum=sum+((a[i]-'0') << (n-(i+1)));
		i++;
	}
	printf("decimal value is \n %d",sum);
	return 0;
}
