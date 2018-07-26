#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

void delay( time_t tempo){                           //f(x) para dar o delay para impressao na tela//
	time_t timer0,timer1;
		time(&timer0);
		do{
			time(&timer1);
		}
		while((timer1-timer0)<tempo);	
	
}

int joga_dado(){                                                          //funçao sorteio dados//
	return (1+(rand()%6));
}

void iniciar_jogo(){   									                //f(x) de inicialização//
	printf("\n\n                              inicializando jogo.");
	delay(1);
	printf("\n\n                              inicializando jogo..");
	delay(1);
	printf("\n\n                              inicializando jogo...");
	delay(1);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
	delay(1/2);
	
	
	
	printf("                         ********************");  
	printf("\n                         *  INICIO DO JOGO  *\n");
	printf("                         ********************\n");	 
	printf("\n                                 BOZO");                                                   
	                          	
	printf("\n\n\n\n\n\n");
	printf("                   simples 1|    full    |simples 4\n");
	printf("                     -------|------------|----------\n");
	printf("                 simples 2  |   seguida  | simples 5 ");
	printf("\n                     -------|------------|----------\n");
	printf("                   simples 3|  quadrada  | simples6");
	printf("\n                     -------|------------|----------\n");
	printf("                            |  general   |            ");
	printf("\n                            |            |      ");
	printf("\n\n\n");

return;
}




void f1(void){                                    /*faces do dado*/
	printf("\n     -----\n");
	printf("     \n       o  \n     ");
	printf("\n     -----\n");
	printf("\n      -1- \n\n\n");
return;
}

void f2(void){
	printf("\n     -----\n");
	printf("     o\n\n         o");
	printf("\n     -----\n");
	printf("\n      -2- \n\n\n");
return;
}

void f3(void){
	printf("\n     -----\n");
	printf("     o\n       o\n         o");
	printf("\n     -----\n");
	printf("\n      -3- \n\n\n");
return;
}

void f4(void){
	printf("\n     -----\n");
	printf("     o   o\n\n     o   o");
	printf("\n     -----\n");
	printf("\n      -4- \n\n\n");
return;
}

void f5(void){
	
	printf("\n     -----\n");
	printf("     o   o\n       o\n     o   o");
	printf("\n     -----\n");
	printf("\n      -5- \n\n\n");
return;
}
void  f6(void) {                                //faces do dado//                              
	printf("\n     -----\n");
	printf("     o   o\n     o   o\n     o   o\n");        /*faces do dado*/
	printf("     -----\n");
	printf("\n      -6- \n\n\n");
return;
}




int imprimir_dado(int k){                      //imprimir dados chamando a funçao acima//
    int num=k;
	


	if(num==1){
   		f1();
	}

	if(num==2){
	   f2();
	}

	if(num==3){
   		f3();
	}

	if(num==4){
	   f4();
	}

	if(num==5){
   		f5();
	}

	if(num==6){
  		f6();
	}
		
return 0;
}





int  cal_pont (int *d1,int *d2,int *d3,int *d4, int *d5, int *cont_boca){     //        f(x) para      //
   int cont2,i,vet[5], pont=0,cont=0,quadra=0,j,cont3=0;                     //   calcular pontuação  //
      vet[0]=*d1;
      vet[1]=*d2;
      vet[2]=*d3;
      vet[3]=*d4;
      vet[4]=*d5;     


for(i=1;i<5;i++){                                              					//   GENERAL //
                                              						// se todos dados forem iguais
	  
	if(vet[0]==vet[i])  {
        cont++;
	}
    if (cont==4){
        if (*cont_boca==1){	
	  	pont=100;
	  	printf("\n\n  FEZ UM GENERAL DE BOCA FERA\n");
	  }
	else{
		pont=40;
		printf("\n\n  FEZ UM GENERAL BRO\n");
	}
	  	
	  	printf("\n\nvc fez %d pontos",pont);
	  
    
	}
}


	cont=0;                                  //zera o contador para prox //
	                                            
for(i=0;i<5;i++){                                           //   QUADRA   //
    for(j=0;j<5;j++){
           if(i!=j){
               if(vet[i]==vet[j]){
               	cont++;
                }
            }
        }
    }           
    
    if (cont==12){
				
       	if (*cont_boca==1){
         	pont=40;	
       	 	printf("\n\nACENTOU UMA QUADRADA EM CHEIO");
		}
	else{
			printf("\n\nACENTOU UMA QUADRADA ");
			pont=30;
	}
		    printf("\n\nvc fez %d pontos",pont);
	}
            
cont=0; 

    for(i=0;i<5;i++){                                 //      FULL     //
        for(j=0;j<5;j++){
            if(vet[i]!=vet[j]){
                cont++;
                cont3++;
            }

        }
    }
    if(cont==12){
    	if(*cont_boca==1){
    		pont=20;
        	printf("\n\nOLHA ESSA FERA AI MEU ACERTOU UM FULL de BOCA\n\n");	
		}
	else{
		printf("\n\nACENTOU UM FULL\n");
        pont=10;	
		
	}



printf("full\n\n%d",pont);        

}




if(cont3!=12){

	cont=0;

	for (i=0;i<5;i++){                                  //       simples 1   //
        
		if(vet[i]==1){
            cont++;           
		}
	}
    
	if(cont==2){
    	printf("\n\nACENTOU SIMPLES DE 1");
        pont= pont+2;
    }
   
    if(cont==3){
   		printf("\n\nACENTOU SIMPLES DE 1");
        pont= pont+3;
    }

cont=0;
	for (i=0;i<5;i++){                                  //       simples 2  //
        
		if(vet[i]==2){
            cont++;
		}		
	}

    if(cont==2){
   		printf("\n\nACENTOU SIMPLES DE 2");
        pont= pont+4;
    }
    if(cont==3){
  		printf("\n\nACENTOU SIMPLES DE 2");
        pont= pont+6;
        
    }


cont=0;


for (i=0;i<5;i++){                                  //       simples 3  //
        
	if(vet[i]==3){
  	    cont++;
	}		
}

if(cont==2){
	printf("\n\nACENTOU SIMPLES DE 3");
    pont= pont+6;
}
if(cont==3){
 	printf("\n\nACENTOU SIMPLES DE 3");
    pont= pont+9;
}


cont=0;


for (i=0;i<5;i++){                                  //       simples 4  //
        
	if(vet[i]==4){
	    cont++;
	}		
}

if(cont==2){
  	printf("\n\nACENTOU SIMPLES DE 4");
    pont= pont+8;
}

if(cont==3){
 		printf("\n\nACENTOU SIMPLES DE 4");
        pont= pont+12;
}

    
cont=0;


for (i=0;i<5;i++){                                  //       simples 5 //
        
	if(vet[i]==5){
	    cont++;
	}		
}

	if(cont==2){
  		printf("\n\nACENTOU SIMPLES DE 5");
    	pont= pont+10;
	}
    if(cont==3){
    	printf("\n\nACENTOU SIMPLES DE 5");
        pont= pont+15;
    }
    
cont=0;


for (i=0;i<5;i++){                                  //       simples 6  //
        
	if(vet[i]==6){
        cont++;
	}
}

    if(cont==2){
		printf("\n\nACENTOU SIMPLES DE 6");
        pont= pont+12;
    }
    
    if(cont==3){
    	printf("\n\nACENTOU SIMPLES DE 6");
        pont= pont+18;
    }


}


cont=0;


for(i=0;i<5;i++){                                       //     SEGUIDA      //
    for(j=0;j<5;j++){
        if(j!=i){
            if(vet[i]+1==vet[j]){
                    cont++;
                    break;
            }
        }
    }
}

	if(cont==4){    
		printf("\n\nACENTOU SEGUIDA");
			if(cont_boca==0){
				pont=21;
			}
			else{
			pont=31;                              //tem 1 a mais para fazer a verificação la na main//
			}                                         //sobre marcar ou nao esta posicao//
	}


return pont;
}
	   	







int jogada(void){
	
int d1=0, d2=0, d3=0, d4=0, d5=0, resp=0, qual_dado=0, pontos,pont_total,cont=0,cont2=0,i,cont_boca=1;
int safe=0;
srand( (unsigned)time(NULL) );

d1=joga_dado();                                                  //lanca todos os dados//
d2=joga_dado();                                                  // e salva na variavel//
d3=joga_dado();
d4=joga_dado();
d5=joga_dado();

delay(1);                                           //imprime na tela o desenho do dado e o numero dele
printf("   DADO 1:\n\n");
imprimir_dado(d1);
delay(3);
printf("   DADO 2:\n\n");
imprimir_dado(d2);
delay(3);
printf("   DADO 3:\n\n");
imprimir_dado(d3);
delay(3);
printf("   DADO 4:\n\n");
imprimir_dado(d4);
delay(3);
printf("   DADO 5:\n\n");
imprimir_dado(d5);
delay(3);
printf("\n\n seus dados são %d %d %d %d %d\n\n", d1,d2,d3,d4,d5);  //imprime todos os dados


pontos=cal_pont(&d1,&d2,&d3,&d4,&d5,&cont_boca);               //usa a funcao para calc a pont
                                                              // e a salva na varievel

if(pontos==31 || pontos==21){
pontos=pontos--;                                            //subtrai o ponto a mais comentado acima
}
delay(1);
printf("\n\n sua pontuacao na rodada e': %d pontos\n\n",pontos);     


while(cont2<4){                                                  //  nova jogada?  //
delay(3);
printf("\nDesejaste jogar algum dado novamente campeao?  [1 para sim, 0 para nao]\n\n");       //pergunta se vai joga denovo//

scanf("%d", &resp);                       //o while limita a 3 relançamentos dos dados//


  if (resp==0){                                                         //nao quer jogar denovo//
	cont2=33;
printf("\n\n vois desajaste salvar tal grandiosa jogada meu caro?     [ 1 for yes,0 for not]\n\n");
scanf("%d",&safe);

if(safe==0){
	pontos=0;
}
else{
	printf("\n\n boa sorte princesa\n\n");

}
}


  if(resp==1){ 
  cont2++;                                                         //quer jogar denovo//
	cont_boca=0;
delay(2);
		printf("Quantos dados deseja jogar novamente?\n\n\n");      //pergunta quantos dados vai joga//
		scanf("%d",&cont);
		if(cont>5){                                           //restringe a 5 dados a jogar novamente//
			printf("Valor inválido vc so pode jogar 5 dados por vez bb (N <= 5)\n");
	}
		else{                                                  //se tiver ok segue o baile//
		
	for(i=0;i<cont;i++){
			                                 //laço "for" repete a pergunta e relanca os dados
		 delay(1);                                  // quantos dados escolhido acima
		printf("Qual dado jogar?\n");                            //quest what gived play//
		scanf("%d", &qual_dado);
		
		switch (qual_dado){                                            //select which gives played again//
			case 1:
				d1=joga_dado();
				delay(1);
				printf("   DADO 1:\n\n");
				imprimir_dado(d1);

			
			break;
			case 2:
				d2=joga_dado();
				delay(1);
				printf("   DADO 2:\n\n");
				imprimir_dado(d2);

				
			break;
			case 3:
				d3=joga_dado();
				delay(1);
				printf("   DADO 3:\n\n");
				imprimir_dado(d3);

				
			break;
			case 4:
				d4=joga_dado();
				delay(1);
				printf("   DADO 4:\n\n");
				imprimir_dado(d4);

			break;
			case 5:
				d5=joga_dado();
				delay(1);
				printf("   DADO 5:\n\n");
				imprimir_dado(d5);

			break;
		}

	printf("\n\n                     jogando os dados.\n\n");
	delay(1);
	
	printf("                     jogando os dados..\n\n");
	delay(1);
	
	printf("                     jogando os dados...\n\n");
	delay(2);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

printf("   DADO 1:\n\n");
imprimir_dado(d1);
delay(3);
printf("   DADO 2:\n\n");           //imprime cada dado
imprimir_dado(d2);
delay(3);
printf("   DADO 3:\n\n");
imprimir_dado(d3);
delay(3);
printf("   DADO 4:\n\n");
imprimir_dado(d4);
delay(3);
printf("   DADO 5:\n\n");
imprimir_dado(d5);
delay(3);
printf("D1=%d \nD2=%d \nD3=%d \nD4=%d \nD5=%d", d1,d2,d3,d4,d5);	//imprime apenas os numeros		

pontos=cal_pont(&d1,&d2,&d3,&d4,&d5,&cont_boca);

if(pontos==31 || pontos==21){
pontos=pontos--;
}
delay(1);
printf("\n\n         calculando sua pontuacao.\n\n");
delay(1);                                                     //interface//
printf("         calculando sua pontuacao..\n\n");
delay(1);
printf("         calculando sua pontuacao...\n\n");
delay(1);

printf("\n\n sua pontuacao na rodada e': %d pontos\n\n",pontos);		 //pontuação
		
	}
	
}	

}}












return pontos;
}

struct players{                              //STRUCT PARA SALVAR A PONTUAÇÃO E A TABELA DE JOGADAS//
	int pont=0;
	int simples=0;
	int simples2;
	int simples3;
	int simples4;
   	int simples5;
   	int simples6;
   	int full;
	int seguida;
	int quadra;
	int general;
};







int main(int argc,char*argv[]){                    //PROGRAMA PRINCIPAL//
int	i,j,k,x=0,cont_boca,pont_rodada=0;
struct players player[5];
char w;



  
	



printf("\n\n\n\n\n\n                  aperte o enter para iniciar o jogo\n\n");
scanf("%c",&w);

printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

iniciar_jogo();



delay(2);
printf("quantos jogadores vao jogar ?  (2 a 6)\n\n");             //SALVA A OPÇAO EM UMA VARIAVEL
scanf("%d",&x);


printf("\n\n          loading game.");
delay(1);
printf("\n          loading game..");
delay(1);
printf("\n          loading game...");
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
delay(1);

switch(x){                                //ENCAMINHA O PROGRAMA DE ACORDO COM O NUMERO DE JOGADORES
	case 2:
      for(i=0;i<2;i++){                 // LIMITA O NUMERO RODADADAS DO JOGO

        printf("\n\n\nNOW IS PLAYER 1\n\n       --> %d jogada\n\n\n",i+1);	    //PLAYER ONE//  
	
	//printf("\n\n\n\n\n\n                  digite qualquer letra para jogar os dados\n\n");
	//scanf("%c",&w);
	
	
	
	printf("\n\n                     jogando os dados.\n\n");
	delay(1);
	
	printf("                     jogando os dados..\n\n");
	delay(1);
	
	printf("                     jogando os dados...\n\n");
	delay(2);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	
pont_rodada=jogada();               //CHAMA A FUNCAO JOGADA PARA REALIZAR TODA A AÇAO E 
                                   // RETORNAR A PONTUAÇÃO DO PLAYER NA RODADA


 	    
	    
	//VERIFICA QUAL JOGADA VC JA FEZ E COMPARA COM AQUELAS QUE VC JA FEZ NAS PASSADAS
   // SE JA REALIZOU ESTA JOGADA NAO MARCA PONTUAÇÃO
  // SE NAO FEZ AINDA MARCA  QUE AGR FEZ E CALCULA A PONTUAÇÃO TOTAL DO PLAYER

	    if (pont_rodada==100 || pont_rodada==40){												//GENERAL
		    if (player[0].general!=1){
		    player[0].pont=pont_rodada+player[0].pont;
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		}
		}
		if (pont_rodada==30 ||  pont_rodada==40){                   					    //QUADRA
		    if (player[0].quadra!=1){
		    player[0].pont=(pont_rodada+player[0].pont);
	        }
	
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
			    
		if (pont_rodada==31|| pont_rodada==21){                      						//seguida
		    if (player[0].seguida!=0){
		    player[0].pont=(pont_rodada-21+player[0].pont);
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		
		if (pont_rodada==20||pont_rodada==10){                      //FULL
		    if (player[0].full!=0){
		    player[0].pont=pont_rodada+player[0].pont;
	        }
	        
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		                               
		                               
		                               
else{                     
		if(player[0].simples<7){
			player[0].simples++;
		    player[0].pont=pont_rodada+player[0].pont;
	}
	  
}



                       //PLAYER TWO


	
	 	
	printf("\n\n\n NOW IS PLAYER 2\n\n       --> %d jogada\n\n",i+1);	
    
//	printf("\n\n\n\n\n\n                  digite qualquer letra para jogar os dados\n\n");
//	scanf("%c",&w);
	delay(4);
	
	
	printf("\n\n                     jogando os dados.\n\n");
	delay(1);
	
	printf("                     jogando os dados..\n\n");
	delay(1);
	
	printf("                     jogando os dados...\n\n");
	delay(2);
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

 pont_rodada=jogada();


 
 
	    if (pont_rodada==100 || pont_rodada==40){												//GENERAL
		    if (player[1].general!=1){
		    player[1].pont=pont_rodada+player[1].pont;
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		}
		}
		if (pont_rodada==30 ||  pont_rodada==40){                   					    //QUADRA
		    if (player[1].quadra!=1){
		    player[1].pont=(pont_rodada+player[1].pont);
	        }
	
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
			    
		if (pont_rodada==31|| pont_rodada==21){                      						//seguida
		    if (player[1].seguida!=0){
		    player[1].pont=(pont_rodada-21+player[1].pont);
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		
		if (pont_rodada==20||pont_rodada==10){                      //FULL
		    if (player[1].full!=0){
		    player[1].pont=pont_rodada+player[1].pont;
	        }
	        
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		
else{                     
		if(player[1].simples<7){
			player[1].simples++;
		    player[1].pont=pont_rodada+player[1].pont;
	}
	  
}



	printf("\n\n                         calculando pontuacoes.");
	delay(1);
	printf("\n\n                         calculando pontuacoes.");
	delay(1);
	printf("\n\n                         calculando pontuacoes.");
	delay(1);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

	    	   
			
	printf("\n\n ------->pontuacao total do player 1= %d\n\n\n",player[0].pont);	
	printf("\n\n ------->pontuacao total do player 2= %d\n\n\n",player[1].pont);	
    
    
}
if(player[0].pont > player[1].pont){                   //ken ganhou//

    	printf("\n\n\n          ***********************\n");
    	printf("          *   player 1 WINNER   * \n");
    	printf("          ***********************\n");
	}
    if ( player[0].pont < player[1].pont ){
	
    	printf("\n\n\n          ***********************\n");
    	printf("          *   player 2 WINNER   * \n");
    	printf("          ***********************\n");
	}
    
    
break;



// AGORA PARA 3 JOGADORES

	case 3:
      for(i=0;i<10;i++){
        printf("\n\n       ****%d* jogada\n\n****",i+1);	  
	
	    pont_rodada=jogada();
	    if (pont_rodada==100 || pont_rodada==40){												//GENERAL
		    if (player[0].general!=1){
		    player[0].pont=pont_rodada+player[0].pont;
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		}
		}
		if (pont_rodada==30 ||  pont_rodada==40){                   					    //QUADRA
		    if (player[0].quadra!=1){
		    player[0].pont=(pont_rodada+player[0].pont);
	        }
	
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
			    
		if (pont_rodada==31|| pont_rodada==21){                      						//seguida
		    if (player[0].seguida!=0){
		    player[0].pont=(pont_rodada-1+player[0].pont);
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		
		if (pont_rodada==20||pont_rodada==10){                      //FULL
		    if (player[0].full!=0){
		    player[0].pont=pont_rodada+player[0].pont;
	        }
	        
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		                               
else{                     
		if(player[0].simples<7){
			player[0].simples++;
		    player[0].pont=pont_rodada+player[0].pont;
	}
	  
}
	      
 printf("\n\nNOW IS PLAYER 2\n\n");
     
 pont_rodada=jogada();
	    if (pont_rodada==100 || pont_rodada==40){												//GENERAL
		    if (player[1].general!=1){
		    player[1].pont=pont_rodada+player[1].pont;
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		}
		}
		if (pont_rodada==30 ||  pont_rodada==40){                   					    //QUADRA
		    if (player[1].quadra!=1){
		    player[1].pont=(pont_rodada+player[1].pont);
	        }
	
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
			    
		if (pont_rodada==31|| pont_rodada==21){                      						//seguida
		    if (player[1].seguida!=0){
		    player[1].pont=(pont_rodada-1+player[1].pont);
	        }
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}
		
		if (pont_rodada==20||pont_rodada==10){                      //FULL
		    if (player[1].full!=0){
		    player[1].pont=pont_rodada+player[1].pont;
	        }
	        
	    else {
	    	printf("espaco ja ocupado desta jogada sorry not points for you");
		     }
		}

		
else{                     
		if(player[1].simples<7){
			player[1].simples++;
		    player[1].pont=pont_rodada+player[1].pont;
	}
	  
}
	    	     
	

		


	printf("\n\n **pontuacao total do player 1= %d",player[0].pont);	

	printf("\n\n **pontuacao total do player 2= %d",player[1].pont);	

	printf("\n\n **pontuacao total do player 3= %d",player[2].pont);	
}
   if(player[0].pont>player[1].pont && player[0].pont>player[2].pont){
    
    	printf("\n\n\n          ***********************\n");
    	printf("          *   player 1 WINNER   * \n");
    	printf("          ***********************\n");
	}
   if(player[2].pont>player[1].pont && player[2].pont>player[0].pont){
    
    	printf("\n\n\n          ***********************\n");
    	printf("          *   player 2 WINNER   * \n");
    	printf("          ***********************\n");
	} 
	else{
    	
    	printf("\n\n\n          ***********************\n");
    	printf("          *   player 3 WINNER   * \n");
    	printf("          ***********************\n");
	}




break;




	case 4:
      for(i=0;i<10;i++){
        printf("\n\n       ****%d* jogada\n\n****",i+1);	  
		player[0].pont=jogada()+player[0].pont;
		player[1].pont=jogada()+player[1].pont;
		player[2].pont=jogada()+player[2].pont;
		player[3].pont=jogada()+player[3].pont;
	printf("\n\n **pontuacao total do player 1= %d",player[0].pont);	

	printf("\n\n **pontuacao total do player 2= %d",player[1].pont);	

	printf("\n\n **pontuacao total do player 3= %d",player[2].pont);	

	printf("\n\n **pontuacao total do player 4= %d",player[3].pont);	
}
break;
	case 5:
      for(i=0;i<10;i++){
        printf("\n\n       ****%d* jogada\n\n****",i+1);	  
		player[0].pont=jogada()+player[0].pont;
		player[1].pont=jogada()+player[1].pont;
		player[2].pont=jogada()+player[2].pont;
		player[3].pont=jogada()+player[3].pont;
		player[4].pont=jogada()+player[4].pont;		
	
	
	printf("\n\n **pontuacao total do player 1= %d",player[0].pont);	

	printf("\n\n **pontuacao total do player 2= %d",player[1].pont);	

	printf("\n\n **pontuacao total do player 3= %d",player[2].pont);	

	printf("\n\n **pontuacao total do player 4= %d",player[3].pont);	
	
	printf("\n\n **pontuacao total do player 5= %d",player[4].pont);
}
break;
	case 6:
      for(i=0;i<10;i++){
        printf("\n\n       ****%d* jogada\n\n****",i+1);	  
        
		player[0].pont=jogada()+player[0].pont;
		player[1].pont=jogada()+player[1].pont;
		player[2].pont=jogada()+player[2].pont;
		player[3].pont=jogada()+player[3].pont;
		player[4].pont=jogada()+player[4].pont;
		player[5].pont=jogada()+player[5].pont;

	

	printf("\n\n **pontuacao total do player 1= %d",player[0].pont);	

	printf("\n\n **pontuacao total do player 2= %d",player[1].pont);	

	printf("\n\n **pontuacao total do player 3= %d",player[2].pont);	

	printf("\n\n **pontuacao total do player 4= %d",player[3].pont);	
	
	printf("\n\n **pontuacao total do player 5= %d",player[4].pont);
	
	printf("\n\n **pontuacao total do player 6= %d",player[5].pont);
}
break;











return 0;

}


}
	
	










