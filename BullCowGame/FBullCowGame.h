#pragma once
#include <string>

using FString = std::string;
using int32 = int;

class FBullCowGame
{
public:
	//constructors
	FBullCowGame();
	

	//getters
	int32 getMaxTries() const;
	int32 getCurrentTry() const;
	bool isGameWon() const;
	//

	void Reset();
	void Reset( int32 newMaxTries);

	bool checkGuessValidity(FString);

	//TODO add method to check if game is won
private:
	int32 maxTries;
	int32 currentTry;

};