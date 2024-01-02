#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
    int random_no,attempt=0;
    int user_guess;
    srand(time(NULL));
    random_no=(rand()%100)+1;
    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n                                               Welcome to the number guessing game                                            \n";
    cout<<"------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n\n************************************************************************INSTRUCTION*******************************************************************************";
    cout<<"\nYou have 3 chances to guess the number";
    cout<<"\n------------------------------------------------------------------------------------------------------------------------------------------------------------------";
    cout<<"\n******************************************************************************************************************************************************************";
    cout<<"\nEnter a guess for the number between 1 and 100\n";
    do{
        cin>>user_guess;
    if(user_guess>random_no){
        cout<<"\nThe number you entered is greater than correct guess\n";
        attempt++;
    }
    else if(user_guess < random_no){
        cout<<"\nThe number you entered is smallerr than correct guess\n";
        attempt++;
    }
    else{
        cout<<"\nCorrect Guess\n\n";
    }
    }while(user_guess!=random_no&&attempt<3);
    cout<<"\nThe correct guess is : "<<random_no;
    cout<<"\nThanks for playing\n\nSee you next time\n\nBye!!";
    return 0;
}

