#include <stdio.h>
#include <iostream>
#include "GamblingGame.h"
#include "Player.h"
using namespace std;

int main() {
    GamblingGame game;
    Player player1;
    Player player2;

    bool isJackpot = false;
    Player *players = new Player[2];
    int *gameResult = new int[4];
    int index = 0;

    cout << "첫번째 선수 이름 : ";
    cin >> player1.name;
    players[0] = player1;

    cout << "두번째 선수 이름 : ";
    cin >> player2.name;
    players[1] = player2;

    while (!isJackpot)
    {   
        string input;
        string message;

        cout << endl << players[index].name << ":<Enter>" << endl;
        getline(cin, input);
        if (input.empty())
        {
            gameResult = game.run();
            if (gameResult[3] == 1)
            {
                message = players[index].name + "님 승리!!";
                isJackpot = true;
            }
            else
            {
                message = "아쉽군요!";
            }
            cout << gameResult[0] << "  "<< gameResult[1] << "  " << gameResult[2] << "   " << message << endl; 
        }

        if (index == 0)
        {
            index = 1;
        }
        else
        {
            index = 0;
        }
    }

    return 0;
}