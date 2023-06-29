#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "initGame.h"


/*
 * Intialise game data for a new game
 */

  //The main purpose of this function is to start a new game

  //It is used to initialize the game data structure at the start of a new game

  //This function accepts two integer arguments

  // allocate the Game data structure

  //Defning the game data structure using struct

  //Memory allocated

Game *initGame( int boardSize, int winLength ) 

{
  //This function accepts two integer arguments

  // allocate the Game data structure

  //Defning the game data structure using struct

  //Memory allocated

  Game *game = (Game*)malloc(sizeof(Game));

  // intialise the Game data structure values 

  // Intializing the game data structure value for winlength 

  //Using winlength for initialization

  //Initializing the value of winlength to 3
  
  //According to the specificiations of PART 1

 game -> winLength = winLength;

  //Initializing the game data structure value for turns

  //Using turns for iniialization

  //Initializing the value of turns to 0

  //According to the specifications of PART 1

  game -> turns = 0;

  //Initialise the Game data Structure vales for boardSize

  //Initializing the game data structure value for boardSize

  //Using boardSize for initialization

  //Initializing the boardsize to 3

  //According to the specifications in PART 1

  game->boardSize = boardSize;

  //Intializing the game data structure value for maxturns

  //Using maxTurns for initialization

  //Initializing the value of maxturns to the squared of board size

  //According to the specification of PART 1

  game -> maxTurns = boardSize*boardSize; 

// for incorrect boardSize or winLength you should return a NULL pointer

  //Checks if the boardsize entered is valid or not

  //Checking validity of boardsize

  if((game->boardSize) >= 3 && (game->boardSize <= 8))
  {

    //If the above condition is true

    //Checks for the validity of winlength

    //Checks of the win length is within the range of boardsize entered

    //Checking validity of winlength

    if(game->winLength >= 3 && game->winLength <= (game->boardSize))
    {

      //If the abovbe condition is true

      //Using loops

      //Increment the values to access the rows and columns

      //The first parameter is boardsize which is incremented by using a for loop accessing the rows

      //Accesing the rows

      for(int i = 0; (i < game->boardSize); i ++)
      {

        //Using another loop

        //The second loop is incremented through the boardsize using a for loop accesing the columns 

        //Accessing the columns

        for(int j = 0; (j < game->boardSize) ; j ++)
        {
          //Intializes the values of the positions to the '.' as per the mentioned specifications on the cw2.pdf file

          //Initializing the values of the positions

          //In the board to '.'

          game->board[i][j] = '.';
        }

      }
      //If all the conditions satisfy, the function returns the value 1 indicating the success in intializing the game 

      return game;

    }

  else

    {

    //If the value of the second parameter including the boardsize is false

    //It prints out the statement according to the program's specifications

    //It returns the value 0 exiting the program


        printf("Incorrect parameter values for board size or win length. Exiting\n");

        //If the above conditions dont comply

        //Returns the value NULL

        exit(0);

        //Exits the program

        return NULL;

    }

  }

  else
  
  {

    //If the value of the first parameter including the boardsize is false

    //It prints out the statement according to the program's specifications

    //It returns the value 0 exiting the program

        printf("Incorrect parameter values for board size or win length. Exiting\n");

    //If the above conditions dont comply

    //Returns the value NULL

    exit(0);

    //Exits the program

        return NULL;
  }  

}