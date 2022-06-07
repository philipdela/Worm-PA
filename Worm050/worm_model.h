// A simple variant of the game Snake
//
// Used for teaching in classes
//
// Author:
// Franz Regensburger
// Ingolstadt University of Applied Sciences
// (C) 2011
//
// The worm model

#ifndef _WORM_MODEL_H
#define _WORM_MODEL_H

#include <stdbool.h>
#include "worm.h"

// Directions for the worm
enum WormHeading {

  WORM_UP,  
  WORM_DOWN,
  WORM_LEFT,
  WORM_RIGHT,
  // WORM_UP_LEFT,
  // WORM_UP_RIGHT,
  // WORM_DOWN_LEFT,
  // WORM_DOWN_RIGHT,

};

extern enum ResCodes initializeWorm(int len_max, int headpos_y, int headpos_x, enum WormHeading dir, enum ColorPairs color);
extern void showWorm();
extern void cleanWormTail();
extern void moveWorm(enum GameStates* agame_state);
extern bool isInUseByWorm(int new_headpos_y, int new_headpos_x);
//Setters
extern void setWormHeading(enum WormHeading dir);

#endif  // #define _WORM_MODEL_H
