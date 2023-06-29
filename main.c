#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "initGame.h"
#include "playGame.h"
#include "endGame.h"


/*
 * main function: program entry point
 */

//This function is used to call all the other functions

//Controls the flow of the game thorugh various function calls
int main( int argc, char *argv[] ) 



{

//This a pointer for the game structure

//Allocating the memory for the game data structure
  Game *game;
  // pointer for the game structure

  // allocate memory and assign starting values to the structure

  game = (Game*)malloc(sizeof(Game));

  // intialise the Game data structure values 

  // Intializing the game data structure value for winlength 

  //Using winlength for initialization

  //Initializing the value of winlength to 3
  
  //According to the specificiations of PART 1
  game-> winLength = 3;

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
  game-> boardSize = 3;
 
 //Intializing the game data structure value for maxturns

  //Using maxTurns for initialization

  //Initializing the value of maxturns to the squared of board size

  //According to the specification of PART 1
  game-> maxTurns = 9;


  // play a full game

 game = initGame( 3, 3 ); 

 playGame( game );  


  free( game ); // free heap memory that was used


  return 0;

}











