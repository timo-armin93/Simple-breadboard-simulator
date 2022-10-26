#include <stdio.h>
#include "menu.h"
#include "resistor.h"


void create_board(char board[x][y])
{
    for(int i = 0; i<x; i++)   // initializing all values of the board
    {
        for(int j = 0; j<y; j++)
        {
            board[i][j] = 'o';        // set each value to 'o'
        }
    }   
}


void show_board(char board[x][y])
{
    printf("\n\n\n\n\n");   
    for(int i = 0; i < x; i++)   // printing all values of the board
    {
        for(int j = 0; j < y; j++)
        {            
            if (board[i][j] == 'X' || board[i][j] == '-')   
                printf("\033[1;33m");           // print with color yellow  

            
            printf("%c",board[i][j]);    // print all values
            printf("\033[0m");  // reset color
        }
        printf("\n"); 
    } 
}

int main() {
    
    char menu_option;
   
    char board[x][y];   // declaring board as 2D array
    create_board(board);
    show_board(board);

    while(1) { 

        menu_option = menu();
        
        if(menu_option == 'a') {
            place_resistor(board);
        }
        else if(menu_option == 'b'){
            remove_resistor(board);
        }
        else if (menu_option == 'c')
        {
            break;
        }
        else {
            printf("Invalid input!\n");
        }
        show_board(board);
    }
}





