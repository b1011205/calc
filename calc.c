#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	int i,kei=0;
	char s[256];

	scanf("%s",s);
	kei = atoi(s);
	for(i = 0; i < strlen(s); i++ ){
		if(s[i] == '+'){
			kei = kei + atoi(&s[i+1]);
		}
		if(s[i] == '-'){
			kei = kei - atoi(&s[i+1]);
		}
	}
	printf("=%d\n", kei);
}
