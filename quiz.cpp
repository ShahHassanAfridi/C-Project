#include "quiz.h"
#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

bool askQuestion(const string& question, const string options[4], char correctAnswer) {
    cout << question << endl;
    for (char opt = 'A'; opt <= 'D'; opt++) {
        cout << opt << ") " << options[opt - 'A'] << endl;
    }

    char userAnswer;
    cout << "Your answer (A/B/C/D): ";
    cin >> userAnswer;
    userAnswer = toupper(userAnswer);

    if (userAnswer == correctAnswer) {
        cout << "Correct!\n\n";
        return true;
    } else {
        cout << "Wrong. Correct answer was " << correctAnswer << ".\n\n";
        return false;
    }
}

int startQuiz() {
    int score = 0;

    string q1_opts[4] = {"Pacific Ocean", "Atlantic Ocean", "Indian Ocean", "Arctic Ocean"};
    string q2_opts[4] = {"William Shakespeare", "Charles Dickens", "Mark Twain", "Jane Austen"};
    string q3_opts[4] = {"Oxygen", "Hydrogen", "Carbon Dioxide", "Nitrogen"};
    string q4_opts[4] = {"Mars", "Venus", "Jupiter", "Saturn"};
    string q5_opts[4] = {"1991", "1989", "2000", "1995"};
    string q6_opts[4] = {"Python", "C++", "Java", "HTML"};

    if (askQuestion("1. What is the largest ocean on Earth?", q1_opts, 'A')) score++;
    if (askQuestion("2. Who wrote 'Romeo and Juliet'?", q2_opts, 'A')) score++;
    if (askQuestion("3. What gas do plants absorb from the atmosphere?", q3_opts, 'C')) score++;
    if (askQuestion("4. Which planet is known as the Red Planet?", q4_opts, 'A')) score++;
    if (askQuestion("5. When was the World Wide Web first launched to the public?", q5_opts, 'D')) score++;
    if (askQuestion("6. Which of the following is not a programming language?", q6_opts, 'D')) score++;

    return score;
}
