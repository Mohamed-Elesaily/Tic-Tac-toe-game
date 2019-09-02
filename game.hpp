#include <string>
#include<iostream>
#include <sstream>
class Gameboard{
    private:
        std::string gameSpace[4][4];
    public:
        Gameboard();
        void setName(std::string nameIn);
        void setGameSpace(int row,int colum, char value); 
        void printInfo();
        int win(std::string value);
        void position(int pos, std::string value);
};
