#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

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
char *mystrcpy(char *dest, char *source) {}
char *mystrncpy(char *dest, char *source, int n) {}
char *mystrcat(char *dest, char *source) {}
char *mystrncat(char *dest, char *source, int n) {}
int mystrcmp(char *s1, char *s2) {}
char *mystrchr(char *s, char c) {}