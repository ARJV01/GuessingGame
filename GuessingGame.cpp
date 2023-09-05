//Arjun Vinsel
//9/5/2023
//This program is a guessing game. The game will have anumber to guess and will tell you if you guess is too low or too high. Then it will ask you to restart the game


//No global varibles (Global contriants are alright)
// NO strings. Not ever. (you can use cstrings/charecter arrays, and the cstring and the cctype libaries are okay, infact I would recomend using strcmp and strlen in you projects.)
// You should includee <iostream>, not stdio(this applies more to C programers.) also, use "new" and "delete" instead of "malloc" and "free".

# include <iostream>

using namespace std;

int main ()
{
  bool stillrunning = true; // a booloen that determines if the game is still running
  while (stillrunning == true) { // a while loop used to keep the game going or stop it
  int input =0; // what the users current guess is 
  int guesses =0; // the number of times a user has guessed
  char play = ' '; // the varible that continas the user answer to play or not play
  srand(time(NULL));
  int number = (rand() % 100); // the random number
  cout << "Enter in a number between 0 and 100 inclusive" << endl;
  cin >> input;
  while (input != number) { // resets if the guess is wrong
    if (input >= 0 && input <= 100) {// stermines if the input is betwen o and 100
      guesses++;
      if (input > number) {// if the guess is too high it will tell the user and ask for a new input
	cout << "too high:" << endl;
	cout << "enter a new number" << endl;
	cin >> input;
      }
      if (input < number) { // if guess is too low it will tell user and ask for a new input
	cout << "too low:" << endl;
	cout << "enter a new number" << endl;
	cin >> input;
      }
    }
  }
  stillrunning == false;
  cout << "guessed the right number" << endl; // tells when user is correct
  cout << "it took this many guesses " << guesses + 2 << endl; // a guess that is right is still a guess
  cout << "play again enter y or n" << endl; // the user will enter ethier y or n to end the game or play again 
  cin >> play;
  cin.clear();
  cin.ignore(100,'\n');
  if (play == 'y') { // if the player wants to play again set still running to true
      stillrunning = true;
	}
  else { // set sill running too false
    stillrunning = false;
  }
  }
  return 0;
}
