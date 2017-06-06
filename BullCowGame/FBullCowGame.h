#pragma once
#include <string>

class FBullCowGame
{
public:
	//constructors
	FBullCowGame();
	

	//getters
	int getMaxTries() const;
	int getCurrentTry() const;
	bool isGameWon() const;
	//

	void Reset();
	void Reset( int newMaxTries);

	bool checkGuessValidity(std::string);

	//TODO add method to check if game is won
private:
	int maxTries;
	int currentTry;

};