//
//  heistFunctions .h
//  heist
//
//  Created by Martha Winger-Bearskin on 11/4/13.
//  Copyright (c) 2013 Martha Winger-Bearskin. All rights reserved.
//

#ifndef HEISTFUNCTIONS_H
#define HEISTFUNCTIONS_H

#include <iostream>
using namespace std;





//recursive function that determines a valid path for game
bool step(int x, int y,string* maze, int rr);

//checks if a place on gameboard is a valid movement
bool isValid(int x, int y, string* maze);

//checks if place is the exit, signalling end of game
bool exitFound(int x, int y, string* maze);

//places a '.' in space on game board to record path
void record(int x, int y, string* maze);

//removes '.' from place on game board 
void remove(int x, int y, string* maze);

// finds the starting position of bender
void findStart(int x, int y, string* maze);

// prints a maze
void printMaze(string* maze, int rows);


#endif