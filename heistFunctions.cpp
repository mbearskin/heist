//
//  heistFunctions .cpp
//  heist
//
//  Created by Martha Winger-Bearskin on 11/4/13.
//  Copyright (c) 2013 Martha Winger-Bearskin. All rights reserved.
//

#include "heistFunctions.h"
using namespace std;
#include <iostream>



bool step(int x, int y, string* maze, int rr)
{
    bool solve;
    int newX;
    int newY;
    char choice;
    char choices[4] = {'N','E','S','W'};
    
    
    
    for (int i = 0; i < 4; i++)
    {
        choice = choices[i];
        switch (choice)
        {
            case 'N':
                newX = x;
                newY = (y-1);
                break;
            case 'E':
                newX = (x+1);
                newY = y;
                break;
            case 'S':
                newX = x;
                newY = (y+1);
                break;
            case 'W':
                newX = (x-1);
                newY = y;
                break;
        }
        
        if (isValid(newX, newY, maze))
        {
            if(exitFound(newX,newY, maze))
                return true;
            else
            {
                record(newX,newY, maze);
                solve = step(newX, newY, maze,rr);
                if (solve)
                    return true;
                else
                    remove(newX, newY, maze);
                
            }
        }
    }
    return false;
}

bool isValid(int x, int y, string* maze )
{
    if(maze[x][y] == ' ' || maze[x][y] == 'E' )
        return true;
    else
        return false;
}

bool exitFound(int x, int y,string* maze )
{
    if(maze[x][y] == 'E')
        return true;
    else
        return false;
}

void record(int x, int y,string* maze )
{
    maze[x][y]= '.';
}

void remove(int x, int y, string* maze )
{
    maze[x][y]= ' ';
}

void printMaze(string* maze, int rows)
{
    for(int k=0; k < rows; k++)
        cout << maze[k] << endl;
}


