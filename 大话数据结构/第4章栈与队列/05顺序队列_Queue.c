#include<stdio.h>
#include<string.h>
#include<stdlib.h> 
void reverse(char *src){
	
	if(src==NULL){
		exit(1);
		
	}
	char *p=src+strlen(src)+1;
	char tmp;
	while(src<p){
		
		
		tmp=*p;
		*p--=*src;
		*src++=tmp; 
	}
}
int main(){
	
	char str[20]="hello world";
	reverse(str);
	printf("--·´Ïòºó£º%s",str);
		
	return 0;
}
