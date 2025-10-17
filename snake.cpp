#include <iostream>
#include <conio.h>
using namespace std;

// Global Variables
int x, y, fruitX, fruitY, score;
const int width = 40;
const int height = 20;
bool GameOver;
enum eDirection { STOP, LEFT, RIGHT, UP, DOWN};
eDirection dir;

/*
########
#      #
#      #
########

*/
void Setup()
{
    GameOver = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
}

void Draw()
{
    // Drawing Outline, Player & fruit
    system("clear");
    for(int i=0; i<width; i++){
        cout<<"#";
    }
    cout<<endl;

    for(int i=0; i<height; i++)
    {
        for(int j=0; j<width; j++)
        {
            if(j==0)
                cout<<"#";

            if(i==y && j==x)
                cout<<"O";

            else if(i==fruitY && j==fruitX)
                cout<<"🍎";
            
            else
                cout<<" ";
            
            if(j==width-3)
                cout<<"#";
        }
        cout<<endl;
    }

    for(int i=0; i<width; i++){
        cout<<"#";
    }
    cout<<endl;
    
}

void Input()
{

}

void Logic(){

}

int main(){
    Setup();
    while(!GameOver){
        Draw();
        Input();
        Logic();
    }
    return 0;
}