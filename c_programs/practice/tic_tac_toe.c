//TIC TAC TOE game from the book "C: The complete reference" by Herbert Schildt chapter: Arrays
#include "stdio.h"
#include "stdlib.h"

char matrix[3][3];

char check(void);
void init_matrix(void);
void get_player_move(void);
void get_computer_move(void);
void disp_matrix(void);

int main(){
    char done;
    printf("A game of tic tac toe\n");
    printf("You will be playing against the computer \n");
    done=' ';
    init_matrix();
    
    do{
        
        disp_matrix();//Display the matrix
        get_player_move();
        done=check();//see if winner
        if (done !=' ')//winner
        {
            break;
        }
        get_computer_move();
        done=check();//See if winner

    }while (done=' ');
   
    if (done=='X')
    {
        printf("You won!\n");
    }
    else{
        printf("I won!\n");
    }
    disp_matrix();//display final positions
    
}

void init_matrix(void){
    int i,j;
    for (i = 0; i < 3; i++)
    {
         printf("Inited\n");
        for (j = 0; i < 3; j++)
        {
           matrix[i][j]=' ';
        }
       
    }
    
    
}

void get_player_move(void){
    int x,y;
    printf("Enter X and Y coordinates: ");
    scanf("%d %d",&x,&y);
    x--;
    y--;
    if (matrix[x][y]!=' ')
    {
        printf("Invalid move start again\n");
        get_player_move();
    }
    else{
        matrix[x][y]='X';
    }
}
void get_computer_move(void){

    int i,j;
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (matrix[i][j])
            {
               break;
            }
        }
        if (matrix[i][j])
        {
               break;
        }
        
    }

    if(i*j==9){
        printf("draw\n");
        exit(0);
    }
    else{
        matrix[i][j]='O';
    }
}

void disp_matrix(void){
    
    for (int i = 0; i < 3; i++)
    {
        printf(" %c  | %c  | %c  ",matrix[i][0],matrix[i][1],matrix[i][2]);
        if (i!=2)
        {
           printf("\n---|---|---\n");
        }
        printf("\n");
    }

}

char check(void){

    for (int i = 0; i < 3; i++)//check rows
    {
        if (matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
        {
            return matrix[i][0];
        }
        
    }
    for (int i = 0; i < 3; i++)//check column
    {
        if (matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
        {
            return matrix[0][i];
        }
        
    }
    if (matrix[0][2]==matrix[1][1]&&matrix[1][1]==matrix[2][0])
    {
        return matrix[0][2];
    }
    
    return ' ';
}