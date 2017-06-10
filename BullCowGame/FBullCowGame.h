#pragma once
#include <string>

using FString = std::string;
using Int32 = int;

class FBullCowGame
{
public:
	//constructors
	FBullCowGame();
	

	//getters
	Int32 getMaxTries() const;
	Int32 getCurrentTry() const;
	bool isGameWon() const;
	//

	void Reset();
	void Reset( Int32 newMaxTries);

	bool checkGuessValidity(FString);

	//TODO add method to check if game is won
private:
	Int32 maxTries;
	Int32 currentTry;

};