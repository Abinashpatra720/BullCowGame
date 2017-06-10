/*
	This is the console executable that make use of the FBullCowGame class
*/
#include <iostream>
#include <string>
#include "FBullCowGame.h"

using FText = std::string;
using Int32 = int;


void printIntro(Int32 NUMBER_TRIES);
void playGame(Int32 number_guesses);
FText getGuess();
bool askToPlayAgain();

FBullCowGame BCGame; //instantiate a game

int main()
{
	
	Int32 number_guesses = BCGame.getMaxTries();
	
	//introduce the game
	printIntro(number_guesses);

	do {
				
		playGame(number_guesses);

		
	} while (askToPlayAgain());
	
	return 0;
	
}

void printIntro(Int32 NUMBER_TRIES) {
	constexpr Int32 WORD_LENGHT = 5;
	
	std::cout << "Welcome to Bulls and Cows !" << std::endl;
	std::cout << "guess what " << WORD_LENGHT << " word isogram I'm thinking about" << std::endl;
	std::cout << "You have " << NUMBER_TRIES << " tries" << std::endl;
	return;
}

FText getGuess() {
	
	FText String = "";
	
	std::cout << "what is you guess: ";
	
	std::getline(std::cin, String);

	

	return String;
}


bool askToPlayAgain()
{
	std::cout << std:: endl << "want to play again ?" << std::endl;
	FText response = "";
	std::getline(std::cin, response);
	
	return (response[0] == 'y' || response[0] == 'Y');
}

void playGame(Int32 number_guesses) {
	
	BCGame.Reset();

	// loop for answering the question
	//TODO change in WHILE loop and add the validation of imputs and a checker for the answer
	for (Int32 count = 0; count < number_guesses; count++) {
		
		std::cout << std::endl <<"Guess number " << BCGame.getCurrentTry() << ". ";
		
		//get guess from player
		FText Guess = getGuess();
		

		// TODO fix and use validation from FBullCowGame class
		//repeat a guess
		std::cout << std::endl << "your guess is " << Guess << std::endl;;
		
		//TODO add checker for answer
	}
}