#include<stdio.h>
#include<string.h>
#define size 100

//A computer program receives a word from user and decorates as described below and stores in another string. 
//All characters turned uppercase, dot character is inserted to the beginning and to the ending, space character is inserted between characters. 
// sali
// . S A L I .

int main(){
	
	int b=3;
	char word[size];
	printf("Enter a word:");
	scanf("%s",word);
	int l=strlen(word);
	int i,j;
	for(i=1;i<=2*l+3;i++){
		if(i==1 || i==2*l+3){
			printf(".");
		}
		else if(i%2==0){
			printf(" ");
		}
	    else{
	    	
	    	int a=i-b;
	    	printf("%c",toupper(word[a]));
	    	b++;
		}
	    
	}

	return 0;
}
