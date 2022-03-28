#include <stdio.h>
#include "headers.h"
#include <unistd.h>

void prep(char board[10][10]){
    for (int i = 0; i <= 9; i++ ){
        for (int j = 0;j <= 9;j++){
            board[i][j] = ' ';
            board[9][j] = '_'; 
        } 
        board[0][i] = board[i][0] = board[i][9] = '_';
   
    }
    board[5][5] = 'o';
    board[6][5] = board[7][5] = '|';
}

void print_board(char tboard[10][10]){ 
    for (int l= 0; l < 10; l++){
        for (int c = 0; c < 10; c++){
            printf("%c  ", tboard[l][c]);
        }
        printf("\n");
    }
    printf("\n");
}

void move(char board[10][10],int *x,int *y,int *l,int dir){ // chamo o board e a dir, a dir é a direçao para mexer para e as ultimas coords do corpo e cabeça
    system("clear");
    char board2[10][10];
    for (int i = 0; i <=10;i++){
        for (int j = 0;j<=10;j++){
            board2[i][j] = board[i][j];
        }
    }
    clear(board);
    //direction(x,y,dir); aqui devia chamar a direction para modifciar a direção da cabeça, mas depois como mexo o corpo
    
    
}

int decode(char w){
    if (w == 'w'){
        return 1;
    }else if (w == 's'){
        return 2;
    }else if (w == 'd'){
        return 3;
    }else if (w == 'a'){
        return 4;
    }else
        return 0;
}

void direction(int *x,int *y,int dir){
    switch (dir)
    {
    case 1:
        y++;
        break;
    
    case 2:
        y--;
        break;
    
    case 3:
        x++;
        break;
    
    case 4:
        x--;
        break;
    }
}