#include "game.hpp"
Gameboard::Gameboard(){
    int cou=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            std::stringstream ss;
            ss << cou;
           ss >> gameSpace[i][j];
          cou++;
        }
        
    }
}
 void Gameboard::printInfo(){
     for(int i=0;i<4;i++){
        
        for(int j=0;j<4;j++){
            std::cout << gameSpace[i][j]<<'\t';
        }
        std::cout<<'\n';
    }
}
void Gameboard::setGameSpace(int row,int colum, char value){
    if(value == 'X' || value == 'O')
        gameSpace[row][colum]=value;
}
int Gameboard::win(std::string value){
    int cou=0;
    for(int i=0;i<4;i++){
        
        for(int j=0;j<4;j++){
            if(gameSpace[i][j] == value){
                cou++;
                if(cou == 4)return 1;
            }
            
        }
        cou=0;
        for(int j=0;j<4;j++){
            if(gameSpace[j][i] == value){
                cou++;
                if(cou == 4)return 1;
            }
            
        }
        cou=0;
        
    }
    for(int i=0;i<4;i++){
        if(gameSpace[i][i] == value){
            cou++;
            if(cou == 4)return 1;
        }
       
    }
     cou = 0;
    for(int i=3;i>=0;i--){
        if(gameSpace[3-i][i] == value){
            cou++;
            if(cou == 4)return 1;
        }
        
    }
    cou = 0;
    return 0;

}
void Gameboard::position(int pos, std::string value){
    switch (pos)
    {
    case 0:
        gameSpace[0][0]=value;
        break;
    case 1:
        gameSpace[0][1]=value;
        break;
    case 2:
        gameSpace[0][2]=value;
        break;
    case 3:
        gameSpace[0][3]=value;
        break;
    case 4:
        gameSpace[1][0]=value;
        break;
    case 5:
        gameSpace[1][1]=value;
        break;
    case 6:
        gameSpace[1][2]=value;
        break;
    case 7:
        gameSpace[1][3]=value;
        break;
    case 8:
        gameSpace[2][0]=value;
        break;
    case 9:
        gameSpace[2][1]=value;
        break;
    case 10:
        gameSpace[2][2]=value;
        break;
    case 11:
        gameSpace[2][3]=value;
        break;
    case 12:
        gameSpace[3][0]=value;
        break;
    case 13:
        gameSpace[3][1]=value;
        break;
    case 14:
        gameSpace[3][2]=value;
        break;
    case 15:
        gameSpace[3][3]=value;
        break;
    }
}