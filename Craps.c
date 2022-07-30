#include <stdio.h>
#include <stdlib.h>



	int main() {
		int i,k;
		
		int tot=0,tot1=0,tot2=0;
		int playerpoints;
		
		srand(time(NULL));
		
		for(i=0 ; i<2 ;i++){
			k=1+rand()%6;
			tot +=k;
		}
		
		printf("Sayi : %d\n",tot);
		
	
		if(tot==7 || tot==11)
		{
			printf("Oyuncu kazandi...");
		}
		else if(tot ==2 || tot ==3 || tot ==12)
		{
			printf("Oyuncu kaybetti...");
		}
	
		else{
			playerpoints = +tot;
		
			do{
				tot1=0;
				for(i=0 ; i<2 ;i++)
			{
				k=1+rand()%6;
				tot1 +=k;
			}	
				printf("Sayi : %d\n",tot1);
				
				if(tot1==7)
				{
					printf("Oyuncu kaybetti...");
					printf("Sayi : %d\n",tot1);
					break;
					
				}
				else if(playerpoints==tot1)
				{
					printf("Oyuncu kazandi...");
					printf("Sayi : %d\n",tot1);
					
				}
				
				
			}
			while(playerpoints != tot1);
				

	}	
	
	
	return 0;
}
