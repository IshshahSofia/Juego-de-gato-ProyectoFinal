#include <stdio.h>
int main()
{
	
	char matriz[3][3], opc;
	int i, j;
	
	printf("Juego del gato!c:\n");
	
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			matriz[i][j]=' ';
			printf("[%c]", matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nPresione S para jugar / N para salir: ");
	scanf("%c", &opc);
	
	int fila, col, ganador=0, turno=1;
	
	if(opc == 'S' || opc == 's'){
		
		do{
			if(turno%2==1){
				do{
					printf("\nJugador tachecito: \n");
					printf("Digite fila, arriba hacia abajo de 0 a 2: ");
					fflush(stdin);
					scanf("%d", &fila);
					printf("Digite columna, izquierda a derecha de 0 a 2: ");
					fflush(stdin);
					scanf("%d", &col);
					
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2){
						//Caracter de alarma
						printf("---Caracter de alarma---\a");
						printf("\nTe equivocaste, intenta de nuevo.\n");
					}
				}while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
				
				matriz[fila][col]='x';
				
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			} else if(turno%2==0){
				do{
					printf("\nJugador bolita: \n");
					printf("Digite fila, arriba hacia abajo de 0 a 2: ");
					fflush(stdin);
					scanf("%d", &fila);
					printf("Digite columna, izquierda a derecha de 0 a 2: ");
					fflush(stdin);
					scanf("%d", &col);
					
					if(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2){
						//Caracter de alarma
						printf("---Caracter de alarma---\a");
						printf("\nTe equivocaste intenta de nuevo.\n");
					}
				} while(matriz[fila][col] == 'x' || matriz[fila][col] == 'o' || fila > 2 || col > 2);
				
				matriz[fila][col]='o';
				
				for(i=0; i<3; i++){
					for(j=0; j<3; j++){
						printf("[%c]", matriz[i][j]);
					}
					printf("\n");
				}
				turno++;
			}
			
			if(matriz[0][0] == 'x' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'x' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'x' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
			
			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'x' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
			
			|| matriz[0][0] == 'x' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'x' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;
				//Caracter de alarma
		printf("---Caracter de alarma---\a");
				printf("\nFelicidades! Gano el jugador tachecito.\n");
			}
			
			if(matriz[0][0] == 'o' && matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2]
			|| matriz[1][0] == 'o' && matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2]
			|| matriz[2][0] == 'o' && matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2]
			
			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0]
			|| matriz[0][1] == 'o' && matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2]
			
			|| matriz[0][0] == 'o' && matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2]
			|| matriz[0][2] == 'o' && matriz[0][2] == matriz[1][1] && matriz[0][2] == matriz[2][0]){
				ganador=1;	
				//Caracter de alarma
		printf("---Caracter de alarma---\a");
				printf("\nFelicidades! Gano el jugador bolita.\n");
			}
			
		} while(ganador != 1);
	} else {
		//Caracter de alarma
		printf("---Caracter de alarma---\n");
		printf("espera!!!\a");
		printf("No te vayas!!!\n");
	
		printf("\nRegresa a mi juego, es mi proyecto final!.\n");
	}
	
	return 0;
}