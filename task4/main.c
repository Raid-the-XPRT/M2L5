#include <stdio.h>

int lenghtOfSentence(char sentence[],int size);
int numOfWords(char sentence[],int size);

int main(){
	int	size	=100;
	char chrSentence[size];

	printf("Enter a sentence of a 100 charachters or less: ");
	scanf("%[^\n]s",&chrSentence);

	printf("The lenght of the String is:%d\n",lenghtOfSentence(chrSentence,size));
	printf("The number of words in the sentence is:%d\n",numOfWords(chrSentence,size));



return 0;
}

int lenghtOfSentence(char sentence[],int size){
	int intCounter	=0;
	for(int i=0;i<size;i++){
		if(sentence[i]=='\0'){
			break;
		}
		intCounter++;
	}
	return intCounter;
}

int numOfWords(char sentence[],int size){
	int intCounter	=0;
	for(int i=0;i<size;i++){
		if(sentence[i]=='\0'){
			break;
		}
		else if(sentence[i]==' '){
			intCounter++;
		}
	}
return intCounter+1;
}
