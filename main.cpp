#include <iostream>
#include "conio.h"
#include <random>
#include <string>


class Player{
  public:
    char token;
    int position[4]; //são quatro tokens, cada uma das posições desse vetor armazena a posição de um deles;
    bool player; //é o computador ou é um jogador?
    int numberOfTokensOut;
    std::string name;
};

void DisplayBoard(char Ludo[]){
    gotoxy(0, 0);

    std::cout << " ____________________________________________________________" << std::endl;

    std::cout << "|          |          |_"<<Ludo[26]<<"__|_"<<Ludo[27]<<"__|_"<<Ludo[28]<<"__|           |           |" << std::endl;

    std::cout << "|    "<<Ludo[0]<<"     |    "<<Ludo[1]<<"     |_"<<Ludo[25]<<"__|_"<<Ludo[73]<<"__|_"<<Ludo[29]<<"__|    "<<Ludo[4]<<"      |    "<<Ludo[5]<<"      |"<< std::endl;

    std::cout << "|__________|__________|_"<<Ludo[24]<<"__|_"<<Ludo[74]<<"__|_"<<Ludo[30]<<"__|___________|___________|" << std::endl;

    std::cout << "|          |          |_"<<Ludo[23]<<"__|_"<<Ludo[75]<<"__|_"<<Ludo[31]<<"__|           |           |" << std::endl;

    std::cout << "|    "<<Ludo[2]<<"     |    "<<Ludo[3]<<"     |_"<<Ludo[22]<<"__|_"<<Ludo[76]<<"__|_"<<Ludo[32]<<"__|    "<<Ludo[6]<<"      |    "<<Ludo[7]<<"      |" << std::endl;

    std::cout << "|__________|__________|_"<<Ludo[21]<<"__|_"<<Ludo[77]<<"__|_"<<Ludo[33]<<"__|___________|___________|" << std::endl;

    std::cout << "|_"<<Ludo[67]<<"_|_"<<Ludo[16]<<"_|"<<Ludo[17]<<"_|"<<Ludo[18]<<"_|"<<Ludo[19]<<"_|_"<<Ludo[20]<<"_|    "<<Ludo[92]<<" "<<Ludo[93]<<" "<<Ludo[94]<<" "<<Ludo[95]<<"     |_"<<Ludo[34]<<"_|_"<<Ludo[35]<<"_|_"<<Ludo[36]<<"_|_"<<Ludo[37]<<"_|"<<Ludo[38]<<"_|_"<<Ludo[39]<<"_|" << std::endl;

    std::cout << "|   |   |  |  |  |   |                |   |   |   |   |  |   |" << std::endl;

    std::cout << "| "<<Ludo[66]<<" | "<<Ludo[68]<<" |"<<Ludo[69]<<" |"<<Ludo[70]<<" |"<<Ludo[71]<<" | "<<Ludo[72]<<" |  "<<Ludo[88]<<Ludo[89]<<Ludo[90]<<Ludo[91]<<"    "<<Ludo[99]<<Ludo[98]<<Ludo[97]<<Ludo[96]<<"  | "<<Ludo[82]<<" | "<<Ludo[81]<<" | "<<Ludo[80]<<" | "<<Ludo[79]<<" |"<<Ludo[78]<<" | "<<Ludo[40]<<" |" << std::endl;

    std::cout << "|___|___|__|__|__|___|    "<<Ludo[100]<<" "<<Ludo[101]<<" "<<Ludo[102]<<" "<<Ludo[103]<<"     |___|___|___|___|__|___|" << std::endl;

    std::cout << "|_"<<Ludo[65]<<"_|_"<<Ludo[64]<<"_|"<<Ludo[63]<<"_|"<<Ludo[62]<<"_|"<<Ludo[61]<<"_|_"<<Ludo[60]<<"_|________________|_"<<Ludo[46]<<"_|_"<<Ludo[45]<<"_|_"<<Ludo[44]<<"_|_"<<Ludo[43]<<"_|"<<Ludo[42]<<"_|_"<<Ludo[41]<<"_|" << std::endl;

    std::cout << "|          |          |_"<<Ludo[59]<<"__|_"<<Ludo[87]<<"__|_"<<Ludo[47]<<"__|           |           |" << std::endl;

    std::cout << "|    "<<Ludo[12]<<"     |    "<<Ludo[13]<<"     |_"<<Ludo[58]<<"__|_"<<Ludo[86]<<"__|_"<<Ludo[48]<<"__|    "<<Ludo[8]<<"      |    "<<Ludo[9]<<"      |" << std::endl;

    std::cout << "|__________|__________|_"<<Ludo[57]<<"__|_"<<Ludo[85]<<"__|_"<<Ludo[49]<<"__|___________|___________|" << std::endl;

    std::cout << "|          |          |_"<<Ludo[56]<<"__|_"<<Ludo[84]<<"__|_"<<Ludo[50]<<"__|           |           |" << std::endl;

    std::cout << "|    "<<Ludo[14]<<"     |    "<<Ludo[15]<<"     |_"<<Ludo[55]<<"__|_"<<Ludo[83]<<"__|_"<<Ludo[51]<<"__|    "<<Ludo[10]<<"      |    "<<Ludo[11]<<"      |" << std::endl;

    std::cout << "|__________|__________|_"<<Ludo[54]<<"__|_"<<Ludo[53]<<"__|_"<<Ludo[52]<<"__|___________|___________| " << std::endl;

}

void RollDice(int &num){
    num = (rand()%6) + 1;
    std::cout << "\n\n" << num;
}

int main()
{
    clrscr();
    Player Player1, Player2, Player3, Player4;

    char Board[104];

    for(int i = 0; i < 104; i++){
        Board[i] = ' ';
    }

    for(int i = 0; i < 4; i++){
        Player1.token = '@';
        Player2.token = '#';
        Player3.token = '$';
        Player4.token = '%';
    }

    Player1.position[0] = 0;
    Player1.position[1] = 1;
    Player1.position[2] = 2;
    Player1.position[3] = 3;

    Player2.position[0] = 4;
    Player2.position[1] = 5;
    Player2.position[2] = 6;
    Player2.position[3] = 7;

    Player3.position[0] = 8;
    Player3.position[1] = 9;
    Player3.position[2] = 10;
    Player3.position[3] = 11;

    Player4.position[0] = 12;
    Player4.position[1] = 13;
    Player4.position[2] = 14;
    Player4.position[3] = 15;

    for(int i = 0; i < 4; i++){
        Board[Player1.position[i]] = Player1.token;
        Board[Player2.position[i]] = Player2.token;
        Board[Player3.position[i]] = Player3.token;
        Board[Player4.position[i]] = Player4.token;
    }

    Player1.player = false;
    Player2.player = false;
    Player3.player = false;
    Player4.player = false;

    Player1.numberOfTokensOut = 0;
    Player2.numberOfTokensOut = 0;
    Player3.numberOfTokensOut = 0;
    Player4.numberOfTokensOut = 0;

    int numberOfPlayers;
    char chosenToken;

    std::string NAME;

    Player1.name = "COMPUTER";
    Player2.name = "COMPUTER";
    Player3.name = "COMPUTER";
    Player4.name = "COMPUTER";

    int rep[4], F[4];
    rep[0]=0; rep[1]=0; rep[2]=0; rep[3]=0;
    F[0]=88; F[1]=92; F[2]=96; F[3]=100;

    std::cout << "\t\t\t" << "WELCOME TO LUDINHOOO!!!!!!!!!\n\n";
    std::cout << "# @ & % are the tokens" << "\n\n";
    std::cout << "No: of players: ";
    std::cin >> numberOfPlayers;

    for(int i = 0; i < numberOfPlayers; i++){
        std::cout<< i+1 << ") Name of the Player: ";
        std::cin >> NAME;
        bool chosen = false;
        while(!chosen){
            std::cout << "Choose your token: ";
            std::cin >> chosenToken;
            if(chosenToken == '#' || chosenToken == '@' || chosenToken == '&' || chosenToken == '%'){
                if(chosenToken == '#'){
                    Player1.player = true;
                    Player1.name = NAME;
                    chosen = true;
                }
                if(chosenToken == '@'){
                    Player2.player = true;
                    Player2.name = NAME;
                    chosen = true;
                }
                if(chosenToken == '&'){
                    Player3.player = true;
                    Player3.name = NAME;
                    chosen = true;
                }
                if(chosenToken == '%'){
                    Player4.player = true;
                    Player4.name = NAME;
                    chosen = true;
                }
            }else{
                std::cout << "Choose a valid token!" << std::endl;
            }
        }
    }

    sleep(1);

    DisplayBoard(Board);

    bool gameRunning = gameRunning;
    int whoseTurn = 1;

    while(gameRunning){
        if(whoseTurn == 1){
            gotoxy(20,20);
            std::cout << Player1.name;
            std::cout << "\t\t\t's Turn" << std::endl;

            char c;
            bool enterPressed = false;
            int diceOutput;

            if(Player1.player){
                while(!enterPressed){
                    std::cout << "Press ENTER to roll the dice: ";
                    std::cin >> c;
                    if( c == '\n'){
                        enterPressed = true;
                        RollDice(diceOutput);

                        if(diceOutput >=2 && diceOutput <=5 ){
                            if(Player1.numberOfTokensOut != 0){
                                std::cout << "Choose your token: " << std::endl;
                                for(int i = 0; i < 4; i++){
                                    if( Player1.position[i] >= 16 && Player1.position[i] <= 87 ){
                                        std::cout << "Token: " << i+1 << std::endl;
                                    }
                                }
                            }
                        }else{

                        }
                    }
                }
            }
        }

    }


    return 0;
}
