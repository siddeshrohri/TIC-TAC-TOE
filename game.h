
/*
 * data structure for the game
 */

typedef struct _game {
  char board[3][3];    // board for storing the game state
  int boardSize;       // board size 
  int winLength;       // length of a winning line
  int maxTurns;        // maximum possible moves
  int turns;           // current number of moves
} Game;

