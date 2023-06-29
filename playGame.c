#include <stdio.h>
#include "game.h"
#include "playGame.h"
#include "endGame.h"

/*
 * Controls the game logic from start to end
 */


void playGame(Game *game)

{

  //There are two symbols

  //Players could either be X or O

  //Player X starts first

  char symbols[2] = {'X', 'O'};


  // player 'X' plays first


  int player = 0;




  // starting board

  //Starting a new game

  //New board

  printf("New game starting\n");

  showGame(game);


  // Your game should be controlled by an outer loop

  //Game is being controlled by an outer loop

  //Outer loop increments the value of the player

  //Changes the chance of the player

  // Each pass through the loop is one completed move by a player

  //While the condition is true

while(1)

{
  //Resets the players value

  //If the players value increments, it resets the value to the player
  
  //When its the player's move

  player = player%2;

  // Request a move from the next player and check it is valid (an unused square within the board)

  printf("Player %c: Enter your move as row column values:\n", symbols[player]); // use this to request the player move

  //Accepts the value from the user

  //Checks if the move is valid

  //Checks whether the move is valid on the board

  //Checks whether the move is done on an empty space

  //This condition checks 

  //Whether the move entered by the user is invalid

  while ((makeMove(game, symbols[player]) == 0))

  {

    // If the move is invalid you should repeat the request for the current player

    //Move entered is invalid and prints out the statement

    //According to the specificiations

    printf("Move rejected. Please try again\n"); 
    
    // use this message if move cannot be made. You must repeat the request for a move


  }

  // If the move is valid update the board


  // After each completed move display the board

  //Displaying the board after updating the valid move
    showGame(game);




  // After each valid move you can test for win or draw using functions you implement in endGame.c

  //Checks for the condition 

  //Whether the move is a winning move

  //Checks the condition for a draw as well

  //If the condition of winning is true

  //Prints the value of player

  //Prints the winning statement

  if ((winGame(game, symbols[player]) == 1))

  {
    //Returns the value of the winner

    //Along with the symvbol used by the player

    printf("Player %c has won\n", symbols[player]); 
    
    // use to announce a winner - game is over
    
    //Breaks the loop after the winning statement

    break;

  }

  //Checks for the condition being a draw

  //Checks if the number of turns by the user

  //Is equal to the max turns

  //If the condition is equal

  //Returns a statement according to the specifications

  //Else increments the value of the player by 1

  if ((game->turns == game->maxTurns))

  //Checks if the number of turns by the user

  //Is equal to the max turns

  //If the condition of max turns is true

  //Checks for the condtion of drawgame

  {
    //Checks for the condition of a drawgame

    //If the condition is true 

    //Returns a print statement according to the program specification

    if ((drawGame(game) == 1))

    {

      //If the condition is equal

     //Returns a statement according to the specifications


      printf("Match is drawn\n"); // use to announce a draw - game is over

      break;

    }

  }

  //Else increments the value of the player by 1

  player ++;

}

  return;

}

//Displaying the board on the screen

//According to the user input of winLength and the boardSize

//Printing the board using the function showGame 


/*

 * Display the game board - do not adjust the formatting

 */

//Prints the board according to the programs inputs

void showGame(Game *game)

{
//Begins to print using a new line 

//After the input from the user

  printf("\n");

  //Prints a tab space on the new line to input 

  //The positions of the characters

  printf("\t");

  //Accessing the value of the boardsize

  //Incrementing a variable in a loop from 0 till the boardsize less than 1

  for(int row = 0; row < game->boardSize; row++)
  {

    //Printing the position values of the board

    printf("%i  ", row);
  }

//Printing a new line 

//A new line to print the row positions of the elements

//Printing a new line
  printf("\n");


//Accesing the value of the boardsize from the user

//Incrementing a loop to access the values of the boardsize

//Printing the values including a tab space 
  for(int row = 0; (row < game->boardSize) ;row ++)
  {

    //Printing the positions of the rows

    //Printing a tab space as well

    printf("%i\t", row);
    

    //Accesssing the value of the boardsize entered by the user

    //Incrementing a loop to access the values of the boardsize
    for(int col = 0; (col < game->boardSize) ; col ++)
    {
      //Prints the dots on the board

      //According to the boardsize entered by the user

      //Printing the dots on the screen
      printf("%c  ", game->board[row][col]);
    }
    //Printing a new line
    printf("\n");
  }

  //Printing a new line

  printf("\n");


  return;

}


/*
 * Read in the players chosen location
 * Check that the input is a valid empty square
 * If valid then update the board (return 1)
 * If invalid reject the move (return 0)
 */


int makeMove(Game *game, char symbol)
{

  // read the players move from the keyboard, expected as two integers coordinates as shown on the board

  // int row,col;

   //Declaring two variables row and column

   //Declaring the variable inp with a length of 100

   //Character variable which accepts the values from the user



  char inp[100];

  //Inputting the values entered

  fgets(inp, 100, stdin);

  //Stores if in a different variable

  //Declaring a variabvle ex

  //Inputting the values

  int rows,cols;

  int ex = sscanf(inp, " %d %d ", &rows, &cols);

  // test that the chosen location is a valid empty space

  //Checks if the input is a valid input

  //If the input is not valid

  //returns the statement 0

if(ex != 2 || (cols >= game->boardSize) || rows >= game->boardSize)

{

  //If the above condition is false

  //Returns the value 0

  return 0;

}

else if ((game->board[rows][cols] == 'X') || (game->board[rows][cols] == 'O'))

  {

    // if we do not accept the move return 0

    return 0;

  }

  // if we accept then update the board and return 1

  else

  {

    //If the move is accepted

    //Updating the board with the value

    //Incrementing the turns in total by 1

    game->board[rows][cols] = symbol;

    game->turns ++;

    //Returning the value 1

    return 1;

  }
}