#include "MultChoiceQuestion.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <random>

std::string MultChoiceQuestion::GetCorrectAnswer() {
	return mCorrectAnswer;
}

void MultChoiceQuestion::DisplayQuestion() {
	std::cout << "\n\t" << mQuestion << std::endl;

	std::vector<std::string> answers;
	answers.push_back(mCorrectAnswer);
	answers.push_back(mAnswer2);
	answers.push_back(mAnswer3);
	answers.push_back(mAnswer4);

	std::random_device r;
	std::mt19937 gen(r());
	std::shuffle(answers.begin(), answers.end(), gen);
	for (int i = 0; i < 4; i++) {
		std::cout << "\t" << i+1 << ".\t" << answers[i] << std::endl;
	}

	int userSelection = -1;
	while ((std::cout << "\n\tPlease make your selection: ") && !(std::cin >> userSelection) || userSelection < 1 || userSelection > 4) {
		std::cout << "\tInvalid input! Please enter a number between 1 -4.";
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
	}

	if (answers[userSelection - 1] == mCorrectAnswer)
		std::cout << "\n\tCORRECT - Awesome job!\n\t";
	else
		std::cout << "\n\tINCORRECT - Sorry, better luck next time...\n\t";
	
	system("pause");
}