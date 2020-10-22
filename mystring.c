#include <stdio.h>
#include <stdlib.h>

#include "mystring.h"

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
	int i = 0;
	while (source[i])
	{
		dest[i] = source[i];
		i++;
	}
	if (source[i] == 0)
		dest[i] = 0;
	return dest;
}

char *mystrncpy(char *dest, char *source, int n)
{
	int i = 0;
	while (source[i])
	{
		if (i >= n)
			return dest;
		dest[i] = source[i];
		i++;
	}
	if (source[i] == 0 && i < n)
		dest[i] = 0;
	return dest;
}

char *mystrcat(char *dest, char *source)
{
	int i = mystrlen(dest);
	int j = 0;
	while (source[j])
	{
		dest[i] = source[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return dest;
}

char *mystrncat(char *dest, char *source, int n)
{
	int i = mystrlen(dest);
	int j = 0;
	while (source[j] && j < n)
	{
		dest[i] = source[j];
		j++;
		i++;
	}
	dest[i] = 0;
	return dest;
}

int mystrcmp(char *s1, char *s2)
{
	int i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] < s2[i])
			return 1;
		else if (s1[i] > s2[i])
			return -1;
		i++;
	}
	return mystrlen(s1)-mystrlen(s2);
}

char *mystrchr(char *s, char c)
{
	int i=0;
	while(s[i]){
		if(s[i]==c)
			return s+i;
		i++;
	}
	if(s[i]==c)
		return s+i;
	return 0;
}