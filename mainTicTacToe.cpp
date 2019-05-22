#include <iostream>
#include <ctime>		//date and time
#include <iomanip>		//manipulators
#include <cmath>		//math library functions		
#include <cstdlib>		//standard library
using namespace std;
void display_board();  

char board[3][3] = {{'1','2','3'},
                    {'4','5','6'},
                    {'7','8','9'}};
int main()
{
  
  
 // int ticTacToe[3][3]
  
  //Write a program that will create the Tic Tac Toe Board
  
   cout << "Let's play Tic Tac Toe!\n"<<endl;
  
  

display_board(); //to initialize screen with board. see method.
char mark; // user input for space choice.
int counter=0; // this is the exit int. stay tuned 
while (counter<4){

cout << "Player 1: Enter your mark (1-9)"<<endl;
cin>>mark;

           switch(mark){ // very clever and efficient. i like it. 
               
               case '1': board[0][0] = 'X';
               break;
               case '2': board[0][1] = 'X';
               break;
               case '3': board[0][2] = 'X';
               break;
               case '4': board[1][0] = 'X';
               break;
               case '5': board[1][1] = 'X';
               break;
               case '6': board[1][2] = 'X';
               break;
               case '7': board[2][0] = 'X';
               break;
               case '8': board[2][1] = 'X';
               break;
               case '9': board[2][2] = 'X';
               break;
               default: cout<<"Please enter valid location"<<endl;
               }
               display_board();
               // the following checks for winners. sonisder making method called win that executes this. 
                          if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5; 
                   break;
                   } else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X') {
                   cout<< "Player 1 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else {}
               
               cout << "Player 2: Enter your mark (1-9)"<<endl;
cin>>mark;

           switch(mark){
               
               case '1': board[0][0] = 'O';
               break;
               case '2': board[0][1] = 'O';
               break;
               case '3': board[0][2] = 'O';
               break;
               case '4': board[1][0] = 'O';
               break;
               case '5': board[1][1] = 'O';
               break;
               case '6': board[1][2] = 'O';
               break;
               case '7': board[2][0] = 'O';
               break;
               case '8': board[2][1] = 'O';
               break;
               case '9': board[2][2] = 'O';
               break;
               default: cout<<"Please enter valid location"<<endl;
               }
               display_board();
               
                          if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else if (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O') {
                   cout<< "Player 2 WINS!!"<<endl;
                   counter = 5;
                   break;
                   } else {}
                   
               counter++; }

    }

void display_board(){
   
    cout <<"       "<< board[0][0] <<"|"<<board[0][1]<<"|"<<board[0][2]<<endl;
    cout <<"       "<<"------"<<endl;
    cout <<"       "<< board[1][0] <<"|"<<board[1][1]<<"|"<<board[1][2]<<endl;
    cout <<"       "<<"------"<<endl;
    cout <<"       "<< board[2][0] <<"|"<<board[2][1]<<"|"<<board[2][2]<<endl;
}

