// Midterm_Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "MultChoiceQuestion.h"
#include <vector>
#include <algorithm>
#include <random>

int main()
{
    std::vector<MultChoiceQuestion> questions;
    questions.push_back(MultChoiceQuestion("Which of these best describes an array?", "Container of objects of similar types", "A data structure that shows a hierarchical behavior", "Arrays are immutable once initialised", "Array is not a data structure"));
    questions.push_back(MultChoiceQuestion("Advantages of linked list representation of binary trees over arrays?", "Both dynamic size and ease in insertion/deletion", "Dynamic size", "Ease of insertion/deletion", "Ease in randomly accessing a node"));
    questions.push_back(MultChoiceQuestion("What is a hash table?", "A structure that maps keys to values", "A structure that maps values to keys", "A structure used for storage", "A structure used to implement stack and queue"));
    questions.push_back(MultChoiceQuestion("What is the time complexity of inserting at the end in dynamic arrays?", "Either O(1) or O(n)", "O(1)", "O(n)", "O(logn)"));

    std::random_device r;
    std::mt19937 gen(r());
    std::shuffle(questions.begin(), questions.end(), gen);
    for (auto iter = questions.begin(); iter != questions.end(); iter++) {
        if (iter == questions.end())
            break;
        iter->DisplayQuestion();
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
