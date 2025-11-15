#include <iostream>
using namespace std;

int main(){
    int rows = 2;
    int columns = 5;
    int games = 0;

    cin >> games;

    int lineLen = 5;
    for(int game = 0; game < games; game++){
        // input 2 lines representing the games
        // in the game, scan for pairs
        bool gameHasOddPair = false;
        int currVal = 0;
        int gameState[2][5];

        // storing values into gamestate
        for(int row = 0; row < rows; row++){
            for(int column = 0; column < columns; column++){
                cin >> currVal;
                gameState[row][column] = currVal;
            }
        }

        // analyzing gamestate for ifOddPair
        for(int topRowColumn = 0; topRowColumn < columns; topRowColumn++){
           for(int bottomRowColumn = 0; bottomRowColumn < columns; bottomRowColumn++){
                if(topRowColumn == bottomRowColumn){continue;}
                if(gameState[0][topRowColumn] == gameState[1][bottomRowColumn]){
                    //cout << "Pair at " << "1," << topRowColumn << ":: 2," << bottomRowColumn;
                    gameHasOddPair = true;
                    break;
                }
            }
            if(gameHasOddPair){break;}
        }

        if(gameHasOddPair){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}