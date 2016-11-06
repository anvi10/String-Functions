
#include <stdlib.h>
#include "mystring.h"

// Type "man string" to see what every function expects.

int mystrlen(char * s) {
	int i = 0;
	while  (s[i]  != '\0')
		i++;
	return i;
}

char * mystrcpy(char * dest, char * src) {	
	int i = 0;
	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;

}

char * mystrcat(char * dest, char * src) {
	int i = 0;
	int j = 0;
	while (dest[i] != '\0')
		i++;
	//	dest[i] = src[i];

	while(src[j] != '\0') {

		dest[i+ j] = src[j];

		j++;
	}
	dest[i+j] = '\0';
	return dest;
}
/*int i,j = 0;
  while(dest[i] != '\0')
  i++;
  dest[i] = src[j];
  while (src[j] != '\0')
  j++;
  dest[i] = src[j];


  dest[i+j] = '\0';
  return dest;
  } */
/*
   int mystrcmp(char * s1, char * s2) {

   int i = 0;
   int x = 0;
   while (s1[i] != '\0' ) {
   if (s2[i] =='\0'){
   return 1;}
   if (s1[i] > s2[i]){
//	x = 1;
return 1;}

if(s1[i] < s2[i]){
//        x = -1;
return -1;}

i++; 
}	

if (s2[i] != '\0') 
return -1;
return x; 
}
*/
int mystrcmp(char * s1, char * s2) {
	int i = 0;

	while(*(s1+i) != '\0') {
		if(*(s2+i) == '\0') {
			return 1;
		} 

		if ( *(s1 + i) > *(s2 + i) ) 
			return 1;
		if ( *(s1+i) < * (s2+i)  ) 
			return -1;
		i++;
	}

	if( *(s2 + i ) != '\0')

		return -1;

	return 0;
}
/*
   char * mystrstr(char * hay, char * needle) {
   int i = 0;
   int j = 0;
   while (hay[i] != '\0'){
   if (hay[i]== needle[0]){
   int r = i;
//printf("%s\n", hay+i);
while(needle[j]==hay[i+j]){

//printf("0----%s-----\n", needle+j);
if (needle[j+1] == '\0'){
//printf("----%s------", hay+r);
return hay + r;
}
j++;
}
}
i++;
}
return NULL;
}

*/
char * mystrstr(char * hay, char * needle) {
	int i = 0;
	int j = 0;
	while (*(hay+i) != '\0'){

		if (*(hay + i)== *(needle +0)){
			//	                         int r = i;

			while(*( hay + i + j )== *( needle + j)){
				if (*(needle+j+1) == '\0'){	
					return hay + i;

				}
				j++;
			}	

		}
		i++;
	}
	return NULL;
}
/*
   char * mystrdup(char * s) {
//malloc (dest, str length + 1) what 
int l = mystrlen(s);
char * c = malloc(l);
int i = 0;
for (i = 0; i <l; i ++) {
c[i] = s[i];
}
return c;
}

char * mymemcpy(char * dest, char * src, int n ) {
while (n >= 0) {
n--;
dest[n] = src[n];
} 
}
*/
char * mystrdup(char * s) {
	//malloc (dest, str length + 1) what
	/*         int l = mystrlen(s);
		   char * c = malloc(l);
		   int i = 0;
		   for (i = 0; i <l; i ++) {
	 *(c+i) = *(s+i);
	 }
	 return c;*/
	int l =mystrlen(s);
	char * c = malloc(l);

	int i = 0;
	while (s[i] != '\0') {
		c[i] = s[i];
		i++;
	}

	return c;
}

char * mymemcpy(char * dest, char * src, int n ) {
/*	while (n >= 0) {
		n--;
		*( dest+n) =*( src+n);
	}
	return dest;	*/
	int i = 0;
	for (i =0; i < n; i++)
	    dest[i] = src[i];

	    return dest;
}


