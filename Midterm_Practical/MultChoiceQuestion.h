#pragma once
#include <string>
class MultChoiceQuestion
{
private:
	std::string* mQuestion;
	std::string* mCorrectAnswer;
	std::string* mAnswer2;
	std::string* mAnswer3;
	std::string* mAnswer4;
public:
	MultChoiceQuestion(std::string* _question, std::string* _correctAnswer, std::string* _answer2, std::string* _answer3, std::string* _answer4) : mQuestion(_question), mCorrectAnswer(_correctAnswer), mAnswer2(_answer2), mAnswer3(_answer3), mAnswer4(_answer4) {}
	std::string* GetCorrectAnswer();
};

