#include <iostream>
#include <cstdlib>
#include <ctime>
// #include <ctype.h>

using namespace std;

int play(char comp, char player){
    if (comp == player){
        return 0;
    }
    else if (comp == 'R' && player == 'P'){
        return -1;
    }
    else if (comp == 'R' && player == 'S'){
        return 1;
    }
    else if (comp == 'P' && player == 'S'){
        return -1;
    }
    else if (comp == 'P' && player == 'R'){
        return 1;
    }
    else if (comp == 'S' && player == 'R'){
        return -1;
    }
    else if (comp == 'S' && player == 'P'){
        return 1;
    }
}

int main(){
    int compVal;
    char comp, player;

    cout << "Enter the choice between rock paper and seasor" << endl;
    cin >> player;

    // For computer generating a random number
    srand(time(NULL));
    compVal = rand() % 3 + 1;
    cout << compVal << endl;

    if (compVal == 1){
        comp = 'R';
    }
    else if (compVal == 2){
        comp = 'P';
    }
    else if (compVal == 3){
        comp = 'S';
    }
    cout << comp << endl;

    // Match
    int result = play(comp, player);
    cout << result << endl;
    if(result == 0){
        cout << "Draw" << endl;
    }
    else if(result == -1){
        cout << "Player wins" << endl;
    }
    else {
        cout << "Computer wins" << endl;
    }

    return 0;
}