#include "stdio.h"
#include "stdlib.h"
char matrix[3][3];

void init_matrix(){
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j]=' ';
        }
        
    }
    
}

void player_move(){
    int x,y;
    printf("\nEnter the X and Y coordinates: ");
    scanf("%d%*c%d",&x,&y);
    x--;
    y--;
    if (matrix[x][y]!=' ')
    {
        printf("Invalid move, try again! \n");
        player_move();
    }
    else{
        matrix[x][y]='X';
    }
}

void computer_move(){
    int i,j;
    for (i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            if (matrix[i][j]==' ')
            {
                break;
            }
        }
        if (matrix[i][j]==' ')
        {
                break;
        }
    }
    if (i*j==9)
    {
        printf("Draw\n");
        exit(0);
    }
    else{
        matrix[i][j]='O';
    } 
}

char check(){
    for (int i = 0; i < 3; i++)//rows
    {
        if (matrix[i][0]==matrix[i][1]&& matrix[i][0]==matrix[i][2])
        {
            return matrix[i][0];
        } 
    }
    for (int i = 0; i < 3; i++)//columns
    {
        if (matrix[0][i]==matrix[1][i]&& matrix[0][i]==matrix[2][i])
        {
            return matrix[0][i];
        } 
    }

    if (matrix[0][0]==matrix[1][1]&&matrix[0][0]==matrix[2][2])
    {
        return matrix[0][0];
    }
    if (matrix[0][2]==matrix[1][1]&&matrix[0][2]==matrix[2][0])
    {
        return matrix[0][2];
    }   
    return ' '; 
}

void display_matrix(){
    for (int i = 0; i < 3; i++)
    {
        printf(" %c | %c | %c ",matrix[i][0],matrix[i][1],matrix[i][2]);
        if (i!=2)
        {
            printf("\n---|---|---\n");
        }
        
    }
    
}


int main(){
    char done=' ';
    printf("This is a game of tic tac toe:\n");
    init_matrix();

    do{

        display_matrix();
        player_move();
        done=check();
        if (done!= ' ')
        {
           break;
        }
        computer_move();
        done=check();
    }while (done==' ');
    
    if (done=='X')
    {
        printf("Player Won!\n");
    }
    else{
        printf("AI Won!\n");
    }
    display_matrix();

}