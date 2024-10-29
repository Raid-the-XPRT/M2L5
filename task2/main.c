#include <stdio.h>

int main(){
	unsigned int	intVar=255;
	unsigned char	*chrLSB;
	int	architecture;

	chrLSB=(char *)&intVar;

	if(*chrLSB==255){
		printf("This machine uses Little Endian architecture\n");
	}
	else {
		printf("This machine uses big Endian architecture\n");
	}
	architecture=sizeof(int *)*8;
	printf("This machine uses %d-bit architecture\n",architecture);


return 0;
}
