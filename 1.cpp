#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int number=rand()%100+1;
    int guess=0;
    int tries=0;
    cout<<"You are most welcome to the Number Guessing Game!"<<endl;
    cout<<"I have chosen a number between 1 and 100."<<endl;
    cout<<"Can you guess what it is?"<<endl;

    while (guess != number) {
        cout<<"Enter your guess:";
        cin>>guess;
        tries++;

        if (guess<number) {
            cout<<"Too low! Try again."<<endl;
        } else if(guess>number){
            cout<<"Too high! Try again."<<endl;
        } else{
            cout<<"Congratulations! You guessed the number in "<<tries<<" attempts."<<endl;
        }
    }
    return 0;
}
