// BONIFACIO M. DE ROBLES JR.
#include <iostream> // supports input and output function
#include <time.h> // date and time information, i used it by using NULL
#include <cstdlib> // defines the random number
#include <string> // part of std namespace
using namespace std;

int main()
{
	cout << "This is a simple number guessing game. Each time you will be given a number range 0-10."<< endl;
	cout << "The objective of the game is to guess whether the next number is going to be higher or not. As simple as that." << endl;
	cout << "You have the abiliy to make no more than 3 mistakes before you lose, so guess wisely." <<  endl << endl;
	cout << "You are starting with number 50. Is the next number higher (write H) or lower(write L) ?" << endl;
	

	int mistakes = 0;
	int correctGuesses;
	int prevNum = 50, nextNum;
	char choice;
	
	srand (time (NULL) ); // seeds the pseudo random number used by the rand()
	do
	{
		do
			nextNum = rand () % 101;  // this is to randomly pick a number from 0-10. % this is the modula which provides us with the ramainder equation "randomValue/11" which is 0-100.
		while (nextNum == prevNum);
		
		cin >> choice;
		
	if (choice == 'H') // this condition is going to be true if the choice is equal to H
	{
		if (prevNum < nextNum) // this condition is going to be true if the previous number is less than the next number
		{
			cout << " Correct! The new number is " << nextNum << endl;
			correctGuesses++; // add 1 points every correct guess
		}
		else if ( prevNum > nextNum) // this condition is going to be true if the previous number is greater than the next number
		{
			cout << " Wrong, you made a mistake! The new number is " << nextNum << endl;
			mistakes ++; // add 1 for every mistake
		}
}
		if (choice == 'L') // this condition is going to be true if the choice is equal to L
		{
			if (prevNum > nextNum) // this condition is going to be true if the previous number is greater than the next number
			{
				cout << " Correct! The new number is " << nextNum << endl;
			correctGuesses++; // add 1 points every correct guess
			}
			else if ( prevNum > nextNum) // this condition is going to be true if the previous number is greater than the next number
			{
			 cout << " Wrong, you made a mistake! The new number is " << nextNum << endl;
			 mistakes ++; // add 1 for every mistake
			}
		
		}


	prevNum = nextNum; 
	
}
 
 while ( mistakes < 3); // this condition stop the program when the player made 3 mistakes
 
 cout << " You've made 3 mistakes ! Game is now over!" << endl; 
 cout << " You had " << correctGuesses << " correct guesses before the game was over" << endl;

 return 0;
 
}

