#include <iostream>
#include <string>

int main() {



    std::string player1,player2;

    std::cout << "Player 1: Enter R,P or S:" << std::endl;
    std::cin >> player1;

    
    std::cout << "Player 2: Enter R,P or S:" << std::endl;
    std::cin >> player2;

    char p1 = std::tolower(player1[0]);
    char p2 = std::tolower(player2[0]);

    if ((player1 == "R" || player1 == "r") and (player2 == "S" || player2 == "s")){
        std::cout << "Player 1 is winner, congrats!";
    }

    else if ((player1 == "S" || player1 == "s") and (player2 == "R" || player2 == "r")){
        std::cout << "Player 2 is winner, congrats!";
    }

    else if ((player1 == "R" || player1 == "r") and (player2 == "P" || player2 == "p")){
        std::cout << "Player 2 is winner, congrats!";
    }

    else if ((player1 == "P" || player1 == "p") and (player2 == "R" || player2 == "r")){
        std::cout << "Player 1 is winner, congrats!";
    }

    else if ((player1 == "P" || player1 == "p") and (player2 == "S" || player2 == "s")){
        std::cout << "Player 2 is winner, congrats!";
    }

    else if ((player1 == "S" || player1 == "s") and (player2 == "P" || player2 == "p")){
        std::cout << "Player 1 is winner, congrats!";
    }





    else if (p1 == p2){
        std::cout << "It is tie!";
    }



    else {
        std::cout << "Invalid input! Please enter R, P, or S next time." << std::endl;
    }





    return 0;
}