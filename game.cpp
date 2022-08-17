#include <cstdlib>
#include <vector>
#include <ctime>
#include <string>
#include <iostream>
using namespace std;
class Player {      //stores player/enemy points
private:
    int score;
public:
    int getScore() {
        return score;
    }
    
    void incrementScore() {
        score++;
    }
    //constructor
    Player(int points);
};
//constructor
Player::Player(int points)
    : score {points} {
}
int convertToInt(string pChoice) {      //converts player input into integers
    if (pChoice == "Rock" || pChoice == "rock") {
        return 0;
    }
    else if (pChoice == "Paper" || pChoice == "paper") {
        return 1;
    }
    else if (pChoice == "Scissor" || pChoice == "scissor") {
        return 2;
    }
    
    return 0;
}
bool inputValidation(const vector <string> choices, string pChoice) {      //validates player input
    bool boolean {};
    for (const string choice : choices) {     //checks vector that contains a list of all possible options
        if (choice == pChoice) {        
            boolean = true;
            break;
        }
        else {
            boolean = false;
        }
    }
    return boolean;
}
void printEnemyChoice(unsigned int &enemyRand, string &enemyChoice) {   //prints enemy choice
//remember that 0, 1 and 2 correspond to rock, paper and scissor respectively
    switch (enemyRand) {
        case 0: {
            enemyChoice = "Rock";
            cout << "Enemy picked: " << enemyChoice << endl;
            break;
        }
        case 1: {
            enemyChoice = "Paper";
            cout << "Enemy picked: " << enemyChoice << endl;
            break;
        }
        case 2: {
            enemyChoice = "Scissors";
            cout << "Enemy picked: " << enemyChoice << endl;
            break;
        }
    }
}
void checkResult(Player &playerScore, Player &enemyScore, unsigned int &playerIChoice, unsigned int &enemyRand) {   //determines the winner
/* a 2D array is used to compared playerIChoice (the player's choice) and the enemy's choice (randomly generated)
 * 0 represents draw
 * 1 represents player's win
 * 2 represents enemy's win
 * remember that 0, 1, 2 is also Rock, Paper and Scissor respectively.. bit confusing. Hope theres a better way to name this properly.
 * for eg. if playerIChoice = 2 (Scissors) and enemyRand = 1 (Paper), this points to "1" on the 2D array (3rd row, column 2)
 * since it points to a "1", therefore the player wins (Scissors beats Paper). 
 * 1 is assigned to result, which is used in a switch statement to print out the winner on case 1 and increments the playerScore.score attribute.
 */ 
    int resultArray[3][3] {
        {0, 2, 1},  
        {1, 0, 2},
        {2, 1, 0}
    };
        
    int result = resultArray[playerIChoice][enemyRand];
    switch (result) {
        case 0: {
            cout << "Result is: Draw" << endl;
            break;
        }
        case 1: {
            cout << "Result is: You win!" << endl;
            playerScore.incrementScore();
            break;
        }
        case 2: {
            cout << "Result is: You lose!" << endl;
            enemyScore.incrementScore();
            break;
        }
    }
}
int main() {
    Player playerScore {0};
    Player enemyScore {0};
    bool gameLoop {true};
    const vector <string> choices {"Rock", "rock", "Paper", "paper", "Scissor", "scissor", "Q", "q"};
    string playerChoice {};
    string enemyChoice {};
    unsigned int playerIChoice {};
    unsigned int enemyRand {};
    
    cout << "======================================" << endl;
    cout << "Rock, Paper, Scissor! - CLI w/ Objects" << endl;
    cout << "======================================" << endl;
    
    while (gameLoop) {
        cout << "\nChoose rock, paper, or scissor: " << endl;
        cout << "Press Q to quit the game." << endl;
        cin >> playerChoice;
        
        if (playerChoice == "Q" || playerChoice == "q") {
            cout << "Thanks for playing." << endl;
            gameLoop = false;
            break;
        }
        
        if (inputValidation(choices, playerChoice) == false) {      //passes vector with valid input and player's input to compare
            cout << "Invalid input, try again!" << endl;
            continue;
        }
        
        cout << "You picked: " << playerChoice << endl;
        playerIChoice = convertToInt(playerChoice);         //converts valid input into integers to compare with enemy's choice
        
        srand (time(NULL));
        enemyRand = rand() % 3;     //generates random number from 0-2
        
        printEnemyChoice(enemyRand, enemyChoice);
        checkResult(playerScore, enemyScore, playerIChoice, enemyRand);
        
        cout << "\nYour score is: " << playerScore.getScore() << endl;
        cout << "Enemy score is: " << enemyScore.getScore() << endl;
    }
    
    return 0;
}