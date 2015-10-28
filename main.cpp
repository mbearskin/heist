//Martha Winger-Bearskin
//Heist.cpp



#include <iostream>
#include "heistFunctions.h"
using namespace std;

int main()
{
    int row;
    int col;
    string * board;
    int startX, startY;
    int countBoard = 0;
    
    
    do
    {
        
        cin >> col;
        cin >> row;
        
        // not nice..... :-(
        if (col == 0)
            break;
        
        cout << endl<< "Map: " << countBoard << endl;
        cin.ignore();
        
        board = new string [row];
        for(int i=0 ; i < row; i++)
            getline(cin, board[i]);
        
        for( int k = 0; k < row; k++)
        {
            for(int j =0; j<col; j++)
            {
                if(board[k][j] == 'B')
                {
                    startX = k;
                    startY = j;
                }
            }
        }
        
        if(step(startX, startY, board, row))
        {
            for(int k=0; k < row; k++)
                cout << board[k] << endl;

        }
        else
            cout << "\nThere is not valid solution. Bender is stuck!!" << endl;
        
        delete [] board;
        countBoard++;
        
    }while(col !=0 && row!= 0);


    
    return 0;
}

