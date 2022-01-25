#include"WelcomeScreen.h"
#include<string>
#include<ctime>

int main() {

	srand(time(NULL));
	int wordNo = rand() % 5;

	bool gameRunning = true;

	std::string input;
	std::string wordList[] = { "good", "bad", "confusing", "whatever", "cat" };
	std::string pickedWord = wordList[wordNo];

	gameWelcome();

	while (gameRunning == true) {
		std::cin >> input;
		if (input == "q" || input == "Q") {
			gameRunning = false;
		}
		else if (input == pickedWord) {
			std::cout << "Congratulations.\n";
			gameRunning = false;
		}
		else {
			std::cout << "Not correct. Try again.\n";
		}
	}
}

// Next time: refactoring - move most into gameWelcome().