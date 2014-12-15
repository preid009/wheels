#ifndef _STDIO_H
#include<stdio.h>
#endif
#ifndef _STDLIB_H
#include<stdlib.h>
#endif
#ifndef _UNISTD_H
#include<unistd.h>
#endif 
#ifndef _SYS_TYPES_H
#include<sys/types.h>
#endif
#ifndef _SYS_STAT_H
#include<sys/stat.h>
#endif
#ifndef _FCNTL_H
#include<fcntl.h>
#endif
#ifndef _STRING_H
#include<string.h>
#endif
unsigned int gcd(unsigned int a, unsigned int b){
	unsigned int r0 = a;
	unsigned int r1 = b;
	unsigned int i = 0;
	while(r1 != 0){
		i = r0 % r1;
		r0 = r1;
		r1 = i;
	}
	return r0;
}
