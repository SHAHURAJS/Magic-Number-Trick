#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j;
	int sum=0;
	int n;
	int arr1[8][4]={{01,03,05,07},
					{9,11,13,15},
					{17,19,21,23},
					{25,27,29,31},
					{33,35,37,39},
					{41,43,45,47},
					{49,51,53,55},
					{57,59,61,63}};
					
	int arr2[8][4]={{02,03,06,07},
					{10,11,14,15},
					{18,19,22,23},
					{26,27,30,31},
					{34,35,38,39},
					{42,43,46,47},
					{50,51,54,55},
					{58,59,62,63},};
	
	int arr3[8][4]={{04,05,06,07},
					{12,13,14,15},
					{20,21,22,23},
					{28,29,30,31},
					{36,37,38,39},
					{44,45,46,47},
					{52,53,54,55},
					{60,61,62,63},};
	
	int arr4[8][4]={{8,9,10,11},
					{12,13,14,15},
					{24,25,26,27},
					{28,29,30,31},
					{40,41,42,43},
					{44,45,46,47},
					{56,57,58,59},
					{60,61,62,63},};	
	
	int arr5[8][4]={{16,17,18,19},
					{20,21,22,23},
					{24,25,26,27},
					{28,29,30,31},
					{48,49,50,51},
					{52,53,54,55},
					{56,57,58,59},
					{60,61,62,63},};
					
	int arr6[8][4]={{32,33,34,35},
					{36,37,38,39},
					{40,41,42,43},
					{44,45,46,47},
					{48,59,50,51},
					{52,53,54,55},
					{56,57,58,59},
					{60,61,62,63},};
	
	printf("Choose one number from 1 to 63\n\n\n");
	

	printf("Card No 1\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("%5d",arr1[i][j]);
	       }
	    printf("\n");
	    }
	       
	printf("Is your selected number is in the card 1..... ? then press 1 else prees 2\n");
	scanf("%d",&n);
	if(n==1){
	   	sum=sum+1;
	   }else{
		sum=sum;
		   }
		   
	/*Card no. 2*/
	printf("\n\nCard No 2\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("%5d",arr2[i][j]);
			}
		printf("\n");
		}
			
	printf("Is your selected number is also in this card 2..... ? then press 1 else prees 2\n");
	scanf("%d",&n);
	if(n==1){
		sum=sum+2;
	}else{
		sum=sum;
	}
		   
	/*card no 3*/
	printf("\n\nCard No 3\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("%5d",arr3[i][j]);
			}
		printf("\n");
		}
			
	printf("Is your selected number is also in this card 3..... ? then press 1 else prees 2\n");
	scanf("%d",&n);
	if(n==1){
	   	sum=sum+4;
	}else{
		sum=sum;
	}
		   
	/*card no 4*/
		   
	printf("\n\nCard No 4\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("%5d",arr4[i][j]);
			}
		printf("\n");
		}
			
	printf("Is your selected number is also in this card 4..... ? then press 1 else prees 2\n");
    scanf("%d",&n);
    if(n==1){
	   	sum=sum+8;
	}else{
	  	sum=sum;
	}
		   
	/*card no 5*/
	printf("\n\nCard No 5\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("%5d",arr5[i][j]);
			}
		printf("\n");
		}			
			
	printf("Is your selected number is also in this card 5..... ? then press 1 else prees 2\n");
	scanf("%d",&n);
	if(n==1){
	   	sum=sum+16;
	}else{
	 	sum=sum;
	}	
		   
	/*card no 6*/	
	printf("\n\nCard No 6\n");
	for(i=0;i<8;i++){
		for(j=0;j<4;j++){
			printf("%5d",arr6[i][j]);
			}
		printf("\n");
		}
			
	printf("Is your selected number is also in this card 6..... ? then press 1 else prees 2\n");
	scanf("%d",&n);
	if(n==1){
	  	sum=sum+32;
	}else{
	   	sum=sum;
	}															

	printf("\n\nYour selected number is %d ",sum);
	return 0;
}
