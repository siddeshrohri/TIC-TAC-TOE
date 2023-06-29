#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "initGame.h"
#include "playGame.h"
#include "endGame.h"


/*
 * main function: program entry point
 */


int main( int argc, char *argv[] ) 

{

  Game *game;
  // pointer for the game structure


  // allocate memory and assign starting values to the structure

  //Declaration of two variables to accept from the user

  //Accepting the value of boardSize from the user

  //Accepting the value of winLength from the user

  int boardSize, winLength;

  //Inputting the values entered

  //Declaration of the inp variable with a length 100 to accept the two values
  char inp[100];

  //Inputting the values from the user

  printf("Enter the 'BOARDSIZE' and the 'WINLENGTH' for the game to begin  ");

  fgets(inp, 100, stdin);

  //Inputting the value from the user

  sscanf(inp, " %d %d ", &boardSize, &winLength);

  //Allocating the memory of the data structure

  //Then initializing the value of the data structures

  game = (Game*)malloc(sizeof(Game));

  // intialise the Game data structure values 

  // Intializing the game data structure value for winlength 

  //Using winlength for initialization

  //Initializing the value of winlength to 3
  
  //According to the specificiations of PART 1

  game-> winLength = winLength;

  //Initializing the game data structure value for turns

  //Using turns for iniialization

  //Initializing the value of turns to 0

  //According to the specifications of PART 1

  game-> turns = 0;

//Initialise the Game data Structure vales for boardSize

  //Initializing the game data structure value for boardSize

  //Using boardSize for initialization

  //Initializing the boardsize to 3

  //According to the specifications in PART 1

  game-> boardSize = boardSize;

//Intializing the game data structure value for maxturns

  //Using maxTurns for initialization

  //Initializing the value of maxturns to the squared of board size

  //According to the specification of PART 1

  game-> maxTurns = boardSize*boardSize;

  

  // play a full game

 game = initGame( game->boardSize, game->winLength ); 

 playGame( game );  


  free( game ); // free heap memory that was used


  return 0;

}










