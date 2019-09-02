#include "game.hpp"
int main(){
    std::string player1;
    std::string player2;
    int pos;
    Gameboard ticTac;
    std::cout <<" player1:";
    std::cin >> player1;
    std::cout <<'\n';
    std::cout <<" player2:";
    std::cin >> player2;
    while(1){
        ticTac.printInfo();
        std::cin >> pos;
        std::cout <<'\n'<<'\n';
        ticTac.position(pos, "X");
       if(ticTac.win("X") == 1){
           std::cout<<player1<<" "<<"is"<<" "<<"win"<<'\n';
           break;
       }
       std::cout <<'\n'<<'\n';
        ticTac.printInfo();
        std::cin >> pos;
        ticTac.position(pos, "O");
       if(ticTac.win("O") == 1){
           std::cout<<player2<<" "<<"is"<<" "<<"win"<<'\n';
           break;
       } 
       std::cout <<'\n'<<'\n';
        
    }
}