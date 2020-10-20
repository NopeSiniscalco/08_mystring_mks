#include <stdio.h>
#include <stdlib.h>

int mystrlen(char *s)
{
	int l = 0;
	int i = 0;
	while (s[i])
	{
		l++;
		i++;
	}
	return l;
}
char *mystrcpy(char *dest, char *source)
{
	int i=0;
	while(source[i]){
		dest[i]=source[i];
		i++;
	}
	if(source[i]==0)
		dest[i]=0;
	return dest;
}
char *mystrncpy(char *dest, char *source, int n)
{
	int i=0;
	while(source[i]){
		if(i>=n)
			return dest;
		dest[i]=source[i];
		i++;
	}
	if(source[i]==0 && i<n)
		dest[i]=0;
	return dest;
}
char *mystrcat(char *dest, char *source)
{
}
char *mystrncat(char *dest, char *source, int n)
{
}
int mystrcmp(char *s1, char *s2)
{
}
char *mystrchr(char *s, char c)
{
}