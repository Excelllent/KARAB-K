#include <stdio.h>
#include <stdlib.h>







int main() {
	int i,k;
	time_t t;
	int tot=0,tot1=0,tot2=0;
	int playerpoints;
	
	srand((unsigned)time(&t));
	
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
	
	else if(tot ==4||tot ==5||tot ==6||tot ==8||tot ==9||tot ==10){
		playerpoints = +tot;
		
		
			for(i=0 ; i<2 ;i++)
			{
				k=1+rand()%6;
				tot1 +=k;
			}
			printf("Sayi : %d\n",tot1);
			
			if(tot1=="7")
				{
					printf("Oyuncu kaybetti...");
					printf("Sayi : %d\n",tot1);
					
				}
			else if(playerpoints==tot1)
				{
					printf("Oyuncu kazandi...");
					printf("Sayi : %d\n",tot1);
					
				}
			else
			{
				for(i=0 ; i<2 ;i++)
				{
					k=1+rand()%6;
					tot2 +=k;
				}
				printf("Sayi : %d\n",tot2);
				
				if(tot2=="7")
					{
						printf("Oyuncu kaybetti...");
						printf("Sayi : %d\n",tot2);
						
					}
				else if(playerpoints==tot2)
					{
						printf("Oyuncu kazandi...");
						printf("Sayi : %d\n",tot2);
						
					}
				else{
					printf("Oyuncu kaybetti...");
					
				}	
							
			}
				
		

	}	
	
	
	return 0;
}
