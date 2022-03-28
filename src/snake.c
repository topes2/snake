#include <stdio.h>
#include <unistd.h>
#include "headers.h"

void main(){
    int x = 5, y = 5, l =  2, dir = 0, end = 0;
    char w;
    char board[10][10];
    prep(board);
    while (dir == 0){
        scanf("%c",&w);
        dir = decode(w);
        printf("%d isto é o dir\n",dir);
    }
    while (dir != 0 && end != 1){
        print_board(board);
        sleep(1);
        move(board,x,y,l,dir);
    }
}