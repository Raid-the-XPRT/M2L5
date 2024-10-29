#include <stdio.h>

int main(){
	int	intA[100][100];
	int	intB			=0;
	int	intRows			=0;
	int	intColumns		=0;
	int	intX[100];
	int	res[100];
	printf("This program calculates the matrix vector multipication based on the input of the user\n");

	printf("\n\t\t\t{a1\ta2\ta3\ta4}\t{x1}\n");
	printf("\t\t\t{b1\tb2\tb3\tb4}\t{x2}\n");
	printf("\t\t\t{c1\tc2\tc3\tc4}\t{x3}\n");
	printf("\t\t\t{d1\td2\td3\td4)\t{x4}\n\n");


	printf("Enter the number of rows: ");
	scanf("%d",&intRows);

	printf("Enter the number of columns: ");
	scanf("%d",&intColumns);


	for(int i=0;i<intRows;i++){
		printf("Enter the values of row %d: \n",i+1);
		for(int j=0;j<intColumns;j++){
	        	scanf("%d",&intA[i][j]);
		}
	}
	printf("Enter the values of X:\n");

	for(int k=0;k<intColumns;k++){
		scanf("%d",&intX[k]);
	}

	for(int x=0;x<intColumns;x++){
		for(int y=0;y<intColumns;y++){
			res[x]=res[x]+(intA[x][y]*intX[y]);
		}
	}
	for(int q=0;q<intRows;q++){
		printf("  %d  \n",res[q]);
	}
return 0;


}
