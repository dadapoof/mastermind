// Secret code is v v g b

#include <iostream>
#include <string>

using namespace std;

int main()
{

// declaring the char variables for the pegs and the yes or no question

char peg_one, peg_two, peg_three, peg_four;
char yes_or_no;

// Introduction

cout << "Welcome to Mastermind! This is a very fun game!\n";
cout << "I have chosen 4 colors out of red, orange, yellow, green, blue and violet!\n";
cout << "Try to guess them by using 'r', 'o', 'y', 'g', 'b', and 'v'.\n";

// The whole code is a do while loop

do
{

// Prompting the first peg

 cout << "What do you think is the first peg?\n";
 cin >> peg_one;

// while loop to only have the user input the wanted characters

 while ( !(peg_one == 'r' || peg_one == 'o' || peg_one == 'y' || peg_one == 'g' || peg_one == 'b' || peg_one == 'v'))
 {
  cout << "Sorry! That isn't one of the colors! Try again:\n";
  cin >> peg_one;
 }

// Prompting the second peg

 cout << "What do you think is the second peg?\n";
 cin >> peg_two;
while ( !(peg_two == 'r' || peg_two == 'o' || peg_two == 'y' || peg_two == 'g' || peg_two == 'b' || peg_two == 'v'))
 {
  cout << "Sorry! That isn't one of the colors! Try again:\n";
  cin >> peg_two;
 }

// Prompting the third peg

 cout << "What do you think is the third peg?\n";
 cin >> peg_three;

 while ( !(peg_three == 'r' || peg_three == 'o' || peg_three == 'y' || peg_three == 'g' || peg_three == 'b' || peg_three == 'v'))
 {
  cout << "Sorry! That isn't one of the colors! Try again:\n";
  cin >> peg_three;
 }

// Prompting the fourth peg

 cout << "What do you think is the fourth peg?\n";
 cin >> peg_four;

 while (!(peg_four == 'r' || peg_four == 'o' || peg_four == 'y' || peg_four == 'g' || peg_four == 'b' || peg_four == 'v'))
 {
  cout << "Sorry! That isn't one of the colors! Try again:\n";
  cin >> peg_four;
 }

// Declaring the variables for the point system

int black_pegs = 0, white_pegs = 0;

// If and else if statements to award points for correct answers

 if (peg_one == 'v')
 black_pegs += 1;

 else if ((peg_one == 'g') && !(peg_four == 'g') && !(peg_two == 'g') && !(peg_three == 'g'))
 white_pegs += 1;

 else if ((peg_one == 'b') && !(peg_four == 'b') && !(peg_three == 'b') && !(peg_two == 'b'))
 white_pegs += 1;

 if (peg_two == 'v')
 black_pegs += 1;

 else if ((peg_two == 'g') && !(peg_four == 'g') && !(peg_one == 'g') && !(peg_three == 'g'))
 white_pegs += 1;

 else if ((peg_two == 'b') && !(peg_four == 'b') && !(peg_three == 'b') && !(peg_one == 'b'))
 white_pegs += 1;

 if (peg_three == 'g')
 black_pegs += 1;

 else if ((peg_three == 'v') && !(peg_two == 'v') && !(peg_one == 'v'))
 white_pegs += 1;

 else if ((peg_three == 'b') && !(peg_four == 'b') && !(peg_two == 'b') && !(peg_one == 'b'))
 white_pegs += 1;

 if (peg_four == 'b')
 black_pegs += 1;

 else if ((peg_four == 'g') && !(peg_one == 'g') && !(peg_two == 'g') && !(peg_three == 'g'))
 white_pegs += 1;

 else if ((peg_four == 'v') && !(peg_one == 'v') && !(peg_two == 'v'))
 white_pegs += 1;

// If statement if the user guesses correctly

 if (black_pegs == 4)
 {
  cout << "Congratulations! You have guessed my secret code correctly! Well done!\n";
        return 0;
 }

// Printing the results if they don't guess correctly

 else
 {
  cout << "Results:\n";
  cout << "White_Pegs = " << white_pegs << endl;
  cout << "Black_Pegs = " << black_pegs << endl;
 }

// Prompting to play again

 cout << "You can always try to guess it again! Press Y if you want to keep going and N if you give up.\n";
 cin >> yes_or_no;

// Making sure they don't answer anything other than Y or N

 while ( !(yes_or_no == 'Y' || yes_or_no == 'N'))
 {
  cout << "Sorry, that's not a valid answer. Please try again.\n";
  cin >> yes_or_no;
 }

// If they don't want to play again

 if (yes_or_no == 'N')
 {
  cout << "Secret Code was v v g b\n";
  cout << "Thanks for playing!\n";
        return 0;
 }

// End of the do part of the do while loop

}

// The second par of the do while loop

while (yes_or_no == 'Y');


        return 0;
}
