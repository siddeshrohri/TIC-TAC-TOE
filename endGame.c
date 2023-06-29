#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "endGame.h"
/*
 * Functions in this module check for wins and draws
 */

// test all possible ways the game can be won for one player
//Various fucntion to test the winning condition
  /*Winning conditions can include:
  Horizontal
  Vertical
  Diagonal and
  Anti-Diagonal*/

  //This function is used to check whether there exists consecutive symbols in a vertical line
  //Used to check if the player has won the game by forming vertical lines of the symbol they are using
  //The first parameter here is the player's symbol which could either be 'X' or 'O'
  //The second parameter is the required length for a player to win the game




int winGame(Game *game, char symbol)

{

  int verticals(char symbol, Game *game)

  {
    //Looping variables

    int r,c,i;

    int cnt = 0;

    //Introduction of a new variable counter to check for the winability of the player

    //Using a first loop to access the rows

    //Extracting each element of the row

    //Accessing the rows

    for (r = 0; (r < game->boardSize); r ++)

    {

      //Using a second loop to access the columns

      //Extracting each element of the columns

      //Accessing the columns

      for (c = 0; (c <= game->boardSize - game->winLength); c ++)

      {

        //Checks whether the symbol exists on the board at the specific position 

          //If the symbvol on the board exists

          //Increments the value of the counter by 1


        for (i = 0; (i < game->winLength); i ++)

        {

         //Using a third loop

        //Loop is used to increment the value of the column

        //Incrementation of the column by 1

          if ((game->board[i+c][r] == symbol))

          {


            //if the above condition of the symbol at a specific position is true

            //Increment the value by 1

            //Counter variable is incremented by 1

            cnt ++;

            //Checks whether the value of the counter variable is equal to the winning length entered

            //If the condition is true

            //Returns the value 1

            //Else returns the value 0

            if ((cnt == game->winLength))

            {         
              //If the above condition of the winning length of the board is true

              //returns 1

              //Returning the value 1

              return 1;

            }

          }

        }

        //Resets the value

        //Counter value becomes 0

        //If the condition is false

        cnt = 0;

      }

    }

    //If all of the conditions are false

    //Returns the value 0

    //Returning the value 0

    return 0;

  }

    int anti_diagonals(char symbol, Game *game)

  {
    //Looping variables

    int r,c,i;

    //Declaration of an extra variable

    int extra = (game->boardSize - 1);

    int cnt = 0;

    //Introduction of a new variable counter to check for the winability of the player

    //Using a first loop to access the rows

    //Extracting each element of the row

    //Accessing the rows

    for (r = 0; (r < game->boardSize); r ++)

    {

      //Using a second loop to access the columns

      //Extracting each element of the columns

      //Accessing the columns


      for (c = extra; c >= (game->boardSize-game-> winLength); c --)

      {

      //Using a second loop to access the columns

      //Extracting each element of the columns

      //Accessing the columns

        for (i = 0; (i < game->winLength); i ++)

        {

        //Using a third loop

        //Loop is used to increment the value of the column

        //Incrementation of the column by 1


          if ((game->board[i+r][c - i] == symbol))

          {

            //if the above condition of the symbol at a specific position is true

            //Increment the value by 1

            //Counter variable is incremented by 1

            cnt ++;

            //Checks whether the value of the counter variable is equal to the winning length entered

            //If the condition is true

            //Returns the value 1

            //Else returns the value 0

            if ((cnt == game->winLength))

            {
              //If the above condition of the winning length of the board is true

              //returns 1

              //Returning the value 1


              return 1;

            }

          }

        }

        //Resets the value

        //Counter value becomes 0

        //If the condition is false

        cnt = 0;

      }

    }

    //If all of the conditions are false

    //Returns the value 0

    //Returning the value 0


    return 0;

  }

  int horizontals(char symbol, Game *game)
  {
    
    //Looping variables

    int r,c,i;

      int cnt = 0;

    //Introduction of a new variable counter to check for the winability of the player

    //Using a first loop to access the rows

    //Extracting each element of the row

    //Accessing the rows

    for (r = 0; (r < game->boardSize); r ++)

    {
      //Using a second loop to access the columns

      //Extracting each element of the columns

      //Accessing the columns

      for (c = 0; c <= (game->boardSize - game->winLength); c ++)

      {

        //Using a third loop

        //Loop is used to increment the value of the column

        //Incrementation of the column by 1

        for (i = 0; (i < game->winLength); i ++)

        {
          //Checks whether the symbol exists on the board at the specific position 

          //If the symbvol on the board exists

          //Increments the value of the counter by 1

          if ((game->board[r][i+c] == symbol))

          {
            //if the above condition of the symbol at a specific position is true

            //Increment the value by 1

            //Counter variable is incremented by 1

            cnt ++;

            //Checks whether the value of the counter variable is equal to the winning length entered

            //If the condition is true

            //Returns the value 1

            //Else returns the value 0

            if ((cnt == game->winLength))

            {
              //If the above condition of the winning length of the board is true

              //returns 1

              //Returning the value 1

              return 1;

            }

          }

        }

        //Resets the value

        //Counter value becomes 0

        //If the condition is false
        cnt = 0;

      }

    }
    //If all of the conditions are false

    //Returns the value 0

    //Returning the value 0
    return 0;

  }


  int diagonals(char symbol, Game *game)

  {
    //Looping variables

    int r,c,i;

    int cnt = 0;

    //Introduction of a new variable counter to check for the winability of the player

    //Using a first loop to access the rows

    //Extracting each element of the row

    //Accessing the rows

    for (r = 0; (r < game->boardSize); r ++)

    {
      //Using a second loop to access the columns

      //Extracting each element of the columns

      //Accessing the columns

      for (c = 0; c <= (game->boardSize - game->winLength); c ++)

      {

      //Using a second loop to access the columns

      //Extracting each element of the columns

      //Accessing the columns

        for (i = 0; i < (game->winLength); i ++)

        {

        //Using a third loop

        //Loop is used to increment the value of the column

        //Incrementation of the column by 1

          if ((game->board[i+r][i+c] == symbol))

          {

            //if the above condition of the symbol at a specific position is true

            //Increment the value by 1

            //Counter variable is incremented by 1

            cnt ++;

            //Checks whether the value of the counter variable is equal to the winning length entered

            //If the condition is true

            //Returns the value 1

            //Else returns the value 0

            if ((cnt == game->winLength))

            {
              
              //If the above condition of the winning length of the board is true

              //returns 1

              //Returning the value 1


              return 1;

            }

          }

        }

        //Resets the value

        //Counter value becomes 0

        //If the condition is false


        cnt = 0;

      }

    }

    //If all of the conditions are false

    //Returns the value 0

    //Returning the value 0

    return 0;

  }

  //To check for the player that has won the game
  
    //Checks for the condition for the winability

    //Checks each condition of the above functions

  if ((verticals(symbol, game)) == 1 || (anti_diagonals(symbol, game)) == 1 || (diagonals(symbol, game)) == 1 || (horizontals(symbol, game)) == 1)

  {

    //If the above condition of the winability is true

    //return 1

    //Returning the value 1

    return 1;

  }


  else

  {

    //If the above condition of the winability is false

    //return 0

    //Returning the value 0

    return 0;

  }

  

}


// Tests if the game is a draw

//If the game is a draw then the value 1 is returned 

//If the game is not a draw then the value 0 is returned


int drawGame(Game *game)

{

  //Checks if the game is a draw or not

  //If the game is draw

  //returns the value 1

  if ((game-> turns == game-> maxTurns))

  {

    //If the above condition is true

    //Game is a draw

    //Returns 1

    //Returning the value 1

    return 1;

  }

  else

  {

    //If the above condition is not true

    //Game is not a draw and has a specified winner

    //Returns 0

    //Returning the value 0

    return 0;

  }

}

