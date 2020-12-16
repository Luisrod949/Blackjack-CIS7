#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int playerhandsize;
int dealerhandsize;
string cardname[52];
 int playerhandnumber = 0;
int value[] = {1,2,3,4,5,6,7,8,9,10,10,10,10};
const string card[] = {"Sace", "S2", "S3", "S4", "S5", "S6", "S7", "S8","S9", "S10","SKing","Sjack", "Squeen","Hace","H2", "H3", "H4","H5","H6", "H7","H8","H9","H10","Hking", "Hjack","Hqueen","Dace","D2","D3","D4","D5", "D6","D7","D8", "D9","D10","Dking", "Djack", "Dqueen", "Cace","C2","C3","C4","C5","C5","C6","C7","C8","C9","C10","Cking","Cjack","Cqueen"};
double percentage;
string playerhand[13];
string dealerhand[13];

double playertotalpoints;
int dealertotalpoints;
int selection;
struct Card{
  int value;
  string name[52];
};

void addPlayerCard()
{
  srand(time(NULL));
  Card newcard;
  string tempcard;
 
  tempcard = card[rand() % 52];
  
    playerhand[playerhandnumber] = tempcard;

  
  if ((tempcard == "Hace") || (tempcard == "Dace") || (tempcard == "Cace") || (tempcard == "Sace"))
  {
    newcard.value = 11; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H2") || (tempcard == "D2") ||(tempcard == "C2") || (tempcard == "S2")){
    newcard.value = 2; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H3") || (tempcard == "D3") ||(tempcard == "C3") || (tempcard == "S3")){
    newcard.value = 3; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H4") || (tempcard == "D4") ||(tempcard == "C4") || (tempcard == "S4")){
    newcard.value = 4; cout << "The type of card you drew is!... " << tempcard << endl;
  }     
  else if ((tempcard == "H5") || (tempcard == "D5") ||(tempcard == "C5") || (tempcard == "S5")){
    newcard.value = 5; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H6") || (tempcard == "D6") ||(tempcard == "C6") || (tempcard == "S6")){
    newcard.value = 6; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H7") || (tempcard == "D7") ||(tempcard == "C7") || (tempcard == "S7")){
    newcard.value = 7; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H8") || (tempcard == "D8") ||(tempcard == "C8") || (tempcard == "S8")){
    newcard.value = 8; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H9") || (tempcard == "D9") ||(tempcard == "C9") || (tempcard == "S9")){
    newcard.value = 9; cout << "The type of card you drew is!... " << tempcard << endl;
  }else if ((tempcard == "H10") || (tempcard == "D10") ||(tempcard == "C10") || (tempcard == "S10")){
    newcard.value = 10; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "Hking") || (tempcard == "Dking") ||(tempcard == "Cking") || (tempcard == "SKing")){
    newcard.value = 10; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "Hjack") || (tempcard == "Djack") ||(tempcard == "Cjack") || (tempcard == "Sjack")){
    newcard.value = 10; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "Hqueen") || (tempcard == "Dqueen") ||(tempcard == "Cqueen") || (tempcard == "Squeen")){
    newcard.value = 10; cout << "The type of card you drew is!... " << tempcard << endl;
  }
  cout << "The value of your card is!... " << newcard.value << endl;
  
  playertotalpoints += newcard.value;
  playerhandnumber++;
}
void addDealerCard()
{
srand(time(0));

  Card newcard;
  string tempcard;
  tempcard = card[rand() % 52];
  for(int i = 0; i < 5; i++){
    playerhand[i] = tempcard;
   
    break;
  }
  if ((tempcard == "Hace") || (tempcard == "Dace") || (tempcard == "Cace") || (tempcard == "Sace"))
  {
    newcard.value = 11; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H2") || (tempcard == "D2") ||(tempcard == "C2") || (tempcard == "S2")){
    newcard.value = 2; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H3") || (tempcard == "D3") ||(tempcard == "C3") || (tempcard == "S3")){
    newcard.value = 3; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H4") || (tempcard == "D4") ||(tempcard == "C4") || (tempcard == "S4")){
    newcard.value = 4; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }     
  else if ((tempcard == "H5") || (tempcard == "D5") ||(tempcard == "C5") || (tempcard == "S5")){
    newcard.value = 5;cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H6") || (tempcard == "D6") ||(tempcard == "C6") || (tempcard == "S6")){
    newcard.value = 6; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H7") || (tempcard == "D7") ||(tempcard == "C7") || (tempcard == "S7")){
    newcard.value = 7; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H8") || (tempcard == "D8") ||(tempcard == "C8") || (tempcard == "S8")){
    newcard.value = 8; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "H9") || (tempcard == "D9") ||(tempcard == "C9") || (tempcard == "S9")){
    newcard.value = 9; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }else if ((tempcard == "H10") || (tempcard == "D10") ||(tempcard == "C10") || (tempcard == "S10")){
    newcard.value = 10; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "Hking") || (tempcard == "Dking") ||(tempcard == "Cking") || (tempcard == "SKing")){
    newcard.value = 10; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "Hjack") || (tempcard == "Djack") ||(tempcard == "Cjack") || (tempcard == "Sjack")){
    newcard.value = 10; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  else if ((tempcard == "Hqueen") || (tempcard == "Dqueen") ||(tempcard == "Cqueen") || (tempcard == "Squeen")){
    newcard.value = 10; cout << "The type of card the dealer drew is!... " << tempcard << endl;
  }
  cout << "The value of the dealers card is!... " << newcard.value << endl;
  dealertotalpoints += newcard.value;

}
void printmenu(){
cout << "Welcome to Rodriguez casino & welcome to Black jack! " << endl;
cout << "Here are the buttons you will use to play! " << endl;
cout << "Press '1' to pass & press '2' to hit." << endl;
cout << "Press'3' if you'd like to exit the game!" << endl; 
cout << "Here are your first two cards" << endl;
cout<< "\n\n" << endl;
addPlayerCard();
addPlayerCard();
cout << "Your total points so far are!... " << playertotalpoints << endl;
cout << "\n" << endl;
addDealerCard();
addDealerCard();
cout << "The dealer points so far are! " << dealertotalpoints << endl;
}
void checkwin(){
if (playertotalpoints == 21){cout << "Black jack! Contrats on winning!" << endl;selection = 3;}
else if (playertotalpoints > 21) {cout << "Sorry you went over 21! You lose! The points you had were! " << playertotalpoints << endl;selection = 3;}
else if(dealertotalpoints == 21) {cout << "Black jack! The dealer has won!" << endl;selection = 3;}
else if (dealertotalpoints > 21) {cout << "The dealer has now lost! The dealer had " << dealertotalpoints << " You had " << playertotalpoints << endl; selection = 3;}
else if(dealertotalpoints && playertotalpoints > 21) {cout << "Both players went over 21!" << endl; selection = 3;}
}

void gameControl(){

do{
printmenu();
cout << "\n" << endl;
if( playertotalpoints >= 12 && playertotalpoints <= 15){cout << "The average bust out for a hand value of 12-15 is... 41%" << endl;}
else if(playertotalpoints >= 15 && playertotalpoints <= 17){cout << "The average bust out for a hand value of 15-17 is... 63%" << endl;}
else if(playertotalpoints >= 18 && playertotalpoints <= 21){cout << "The average bust out for a hand value of 18-21 is... 84%" << endl;}
cout << "choose wizely! " << endl;
cin >> selection;
if(selection == 2){
addPlayerCard();
for (int i =0; i < playerhandnumber; i++){cout << "The cards you have are... " << playerhand[i] << endl;}
checkwin();
}
else if(selection == 1) {cout << "You chose to skip! Your total card points are! " << playertotalpoints; 
for (int i =0; i < playerhandnumber; i++){cout << "The cards you have are... " << playerhand[i] << endl;}
checkwin();}

}while(selection != 3);
cout << "Thanks for playing! " << endl;
}

int main() {
gameControl();
return 0;
}
