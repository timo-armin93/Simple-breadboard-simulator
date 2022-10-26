#include <stdio.h>
#include "resistor.h"
#include "size.h"

    void place_resistor(char board[x][y]){
    
    int x1, x2, y1, y2;
    
    
    printf("Enter starting point, in the order x y: ");
    scanf("%i %i", &x1, &y1);
    
    printf("Enter ending point, in the order x y: ");
    scanf("%i %i", &x2, &y2);
    
    getchar();  // remove the new line character from input stream 

    x1--; x2--; y1--; y2--;
    
    if (x1 > x || y1 > y || x2 > x || y2 > y) { 
        
        printf("Coordinates do not exist!\n"); 
        return; 
    }
        
    
    if (x1 != x2){
        printf("Different rows specified!\n");
        return;
    }
    
    if (y1 > y2){
        printf("The ending point should not be less than the starting point!\n");
        return;
    }
    
    for (int i = y1; i <= y2; i++) {
        
        if (board[x1][i] == 'X' || board[x1][i] == '-'){
            printf("Coordinates already have existing resistor!\n");
            return;
        }
    } 
    
    
    board[x1][y1] = 'X';
    board[x2][y2] = 'X';

    for(int i = y1+1; i <= y2-1; i++){
        board[x1][i] = '-';
  
    }
}
    
    


    void remove_resistor(char board[x][y]){
    int x1, y1;

    printf("Enter starting point of resistor you want to remove, in the order x y: ");
    scanf("%i %i", &x1, &y1);

    getchar();  // remove the newline character from input stream 

    x1--; y1--;

    if (board[x1][y1] == 'X'){
        board[x1][y1] = 'o';

        int i;
        for(i = y1+1; board[x1][i] != 'X'; i++) {
            board[x1][i] = 'o';
                 
        }
    board[x1][i] = 'o';
    
    }
}  