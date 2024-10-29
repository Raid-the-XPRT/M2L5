#include <stdio.h>

int main(){
	int	intArr[4];
	double	dblArr[4];
	char	chrArr[4];
	short	srtArr[4];

	printf("The Addresses for the Integer array are:\n");

	for(int i=0;i<4;i++){
		printf("%p\n",&intArr[i]);
	}

        printf("The Addresses for the Double array are:\n");

        for(int i=0;i<4;i++){
                printf("%p\n",&dblArr[i]);
        }

        printf("The Addresses for the Charachter array are:\n");

        for(int i=0;i<4;i++){
                printf("%p\n",&chrArr[i]);
        }

        printf("The Addresses for the Short array are:\n");

        for(int i=0;i<4;i++){
                printf("%p\n",&srtArr[i]);
        }

return 0;
}
