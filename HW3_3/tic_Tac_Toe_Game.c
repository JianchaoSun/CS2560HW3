/*
 * tic_Tac_Toe_Game.c
 *
 *  Created on: Feb 17, 2019
 *      Author: jianchaosun
 */

#include <stdio.h>
int Won(char x[][3]){
	int col = sizeof(x[0]);
	int total = sizeof(x);
	int row = total/col;
	for(int i=0;i<row;i++){
		int won=1;
		for(int j=1;j<col;j++){
			if(x[i][j] != x[i][j-1]){
				won =0;
			}
		}
		if(won ==1){
			if(x[i][0] == 'X'){
				return 1;
			}else if(x[i][0] == 'O'){
				return 2;
			}
		}
	}

	for(int i=0;i<col;i++){
		int won=1;
		for(int j=0;j<row;j++){
			if(x[j][i] != x[j+1][i]){
				won =0;
			}
		}
		if(won ==1){
			if(x[0][i] == 'X'){
				return 1;
			}else if(x[0][i] == 'O'){
				return 2;
			}
		}
	}
	int won =1;
	for(int i=1;i<3;i++){
		if(x[i][i] != x[i-1][i-1]){
			won =0;
		}
	}
	if(won ==1){
				if(x[0][0] == 'X'){
					return 1;
				}else if(x[0][0] == 'O'){
					return 2;
				}
			}
	won =0;
	if(x[1][1]==x[0][2]&&x[1][1]==x[2][0]){
		won =1;
	}

	if(won ==1){
				if(x[1][1] == 'X'){
					return 1;
				}else if(x[1][1] == 'O'){
					return 2;
				}
			}
	return 0;
}
int isFinish(char x[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(x[i][j]=='*'){
				return 0;
			}
		}
	}
	return 1;
}
void printBoard(char x[][3]){
	for(int i=0;i<3;i++){
	   for(int j=0;j<3;j++){
			printf("%c",x[i][j]);
			}
	   printf("\n");
}
}

int main(){
	char board[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			board[i][j] = '*';
		}
	}
	while(!isFinish(board)&&!Won(board)){
		int move11 =0;
		int move12 =0;
		int move21 =0;
		int move22 =0;
		printBoard(board);
		printf("Player 1 move(for example:0 2):\n");
		fflush(stdout);
		scanf("%d %d",&move11,&move12);
		board[move11][move12] = 'X';
		if(!isFinish(board)&&!Won(board)){
			printBoard(board);
			printf("Player 2 move(for example:2 1):\n");
			fflush(stdout);
			scanf("%d %d",&move21,&move22);
			board[move21][move22] = 'O';
		}

	}

		int x =Won(board);

		printBoard(board);
		if(x==0){
			printf("tie");
		}else if(x ==1){
			printf("player 1 wins");
		}else{
			printf("player 2 wins");
		}


}
