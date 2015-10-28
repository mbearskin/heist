# heist
Data Structures Assigmnet 6 (Fall 2013) 
Prompt:
HOMEWORK #6:
Heist!
Due Thursday, November the 7th, 11:59pm
For this assignment, submit as many files as you need, but let your  ‘main()’  function be in a file called : ‘heist.cpp’.
 
Remember to put your name and section at the top of all files.
Your simulation program should expect all input to come from ‘cin’, and all your output should be to ‘cout’.   
Problem
Bender is trapped in the middle of a heist! Suppose the bank Bender is robbing can be mapped in a 2 dimensional grid. Some cells are occupied by walls, so Bender cannot enter them. There is also traps in some of the cells that will do terrible things to Bender if disturbed. 

Your job is to write a program that finds, for every map, a path to the exit.


Smooth Criminal.
Input
The input will consist of a sequence of maps. Each map input starts with the number of columns and the number of rows of the map. In a map, a ‘#’ character denotes a wall. A character ‘T’ denotes a trap. A ‘ ‘ (blank space) character denotes a clear section. ‘B’ marks Bender’s starting point and ‘E’ marks the exit. The input is finished when a map of size 0 by 0 is indicated.
Output
Output each map with a path from the “Start point” to the “Exit” . Mark the path using cookie crumbles (character ‘.’). Follow the format in the sample output.
Details:
Use Recursive Backtracking.
Bender can move in any of the cardinal directions (North, East, West and South). No diagonal moves are possible.
Each map will have only one path from Start to Exit, but loops are possible.
Sample

Input
Output
11 4
###########
#   #T#   #
#B#     #E#
########### 
16 10
################
#      #    # T#
# # #### ##   ##
# #      #######
# ###### #E    #
# #T#B # ### ###
# # ## #     #T#
# # ## ####### #
#              #
################
0 0


Map : 0
###########
#...#T#...#
#B#.....#E#
########### 

Map : 1
################
#...   #    # T#
#.#.#### ##   ##
#.#......#######
#.######.#E..  #
#.#T#B.#.###.### 
#.# ##.#.....#T#
#.# ##.####### #
#......        #
################




Implementation Guidelines:
Build your own simple test cases. 
Print plenty of status messages to track the progress of your algorithm.
Start with the Recursive Backtracking algorithm, and refine it into your implementation as done in class.


Recursive Backtracking Algorithm:

try i’th step
    Initialize possible choices
    DO
        select choice
        IF choice acceptable
            record choice
            IF solution complete
                return success
            ELSE
                solved = try i+1’th step
                IF solved
                    return success
                ELSE
                    cancel choice recording    
    WHILE more choices available.
    
Reading Lines with White-Space
In this assignment, you are required to read lines with white spaces.
You may attempt to use something like:
cin >> maze[i][j];
But that would NOT work.. as the extraction operator ‘>>’ ignores white spaces.

You will therefore be forced to one of the following library functions:
string function getline() to read string objects.
stream function getline() to read “null terminated character arrays”.
stream function get() to read character by character. 
