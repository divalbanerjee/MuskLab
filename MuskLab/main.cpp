//
//  main.cpp
//  MuskLab
//
//  Created by Dival Banerjee on 2/24/19.
//  Copyright © 2019 Dival Banerjee. All rights reserved.
//
/*The Story:
 You find your way to SpaceX the night before the Roadster is mounted atop the rocket which is to send it into space.  The building is dark and the roadster is hidden somewhere in large open dark room (15x15).  In addition to the roadster, two other cars (a Yugo and ford pinto) are being stored in this facility as well.
 BTW: Elon Musk is sleeping somewhere in the same room and you have to avoid waking him to find your way to the roadster. Once awoken he will randomly move through the building looking for you. If he lands next to you, you can get away from him only once. The second time you will be the “Starman” and blasted into space with his roadster. Once he is a awake your only chance to avoid being “Starman” is to make your escape in his roadster. If you get into either of the other two cars you will be caught and become the “Starman”.
 Game Play:
 The goal for the user is to find the roadster before becoming the “Star man”.
 As a programmer you are free to use any method to display game information including (but not limited to) a descriptive menu, a board graphic, a combination of both, etc. If you are showing the room to the user graphically, do not show the location of the cars, or elon musk unless they are in the immediate vicinity (within the 3 by 3 grid area with the user at the center).
 Note: You will need to randomly generate the locations of the sleeping elon musk, the yugo, the pinto, and the roadster. You will probably want to store these directly in your room as special symbols if you are displaying the board to the user.
 The user should start in a random unoccupied location.
 The user should be able to enter w (forward/north), a (left/west), s (backward/south), d (right/east) for movement directions.
 The user can quit at anytime.
 Your goal is to guide the user to the proper location of the roadster by issuing hints. An example, of a hint might be using the phrases “you are getting warmer” or “you are getting colder” or “I think you should turn around you are going the wrong way”, etc.. Try to avoid telling the user to go a specific direction.
 You can decide how Elon Musk wakes up.
 Once the game is over you will ask the user to play again and if so you will generate a new random location for the game elements and go through the same process as before.
 You will need to track statistics about the number of turns it took to find the roadster, the number of times the roadster was found, and the number of times the user become “Starman”.
*/

#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <array>
#include <vector>



std::vector<int> gameRound(){
    int roundOutCome = 0;
    std::vector<int> results;
    results.resize(3);// Results vector contains the outcome of the round, and number of turns
    srand(time(NULL));
    std::vector<std::vector<int>> gameBoard; //2d vector that acts as the game board
    gameBoard.begin();
    gameBoard.resize(15);
    for (int i = 0; i< gameBoard.size();i++){//Sizes the vector properly
        gameBoard.at(i).resize(15);
    }
    return results;
}

void outputBoard(std::vector<std::vector<int>> gameBoard){
    for(int i = 0; i < gameBoard.size(); i++){
        for(int c = 0; c < gameBoard.at(i).size();c++){
            std:: cout << "*";
        }
        std::cout<<std::endl;
    }
}

void game(){
    int turns = 0;
    int roadsterFoundCount = 0;
    int starManCount = 0;
    bool cont = true;
    
    do{//Game loop
        std::vector<int> results;
        results.resize(3);
        results = gameRound();
        
    }while(cont == true);
}

int main() {
    game();
    return 0;
}
