#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int totalPoints = 0;
    string correctAnswer;
    
    // Soal 1
    cout << "Question 1" << endl;
    cout << "Who is Cristiano Ronaldo?" << endl;
    cout << "a) Football Player" << endl;
    cout << "b) Basketball Player" << endl;
    cout << "c) Film Actor" << endl;
    cout << "d) President" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 2
    cout << "\nQuestion 2" << endl;
    cout << "What is the capital of France?" << endl;
    cout << "a) Paris" << endl;
    cout << "b) London" << endl;
    cout << "c) Berlin" << endl;
    cout << "d) Rome" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points";
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 3
    cout << "\nQuestion 3" << endl;
    cout << "What is the chemical symbol for water?" << endl;
    cout << "a) H2O" << endl;
    cout << "b) CO2" << endl;
    cout << "c) O2" << endl;
    cout << "d) NaCl" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 4
    cout << "\nQuestion 4" << endl;
    cout << "Who wrote 'Romeo and Juliet'?" << endl;
    cout << "a) William Shakespeare" << endl;
    cout << "b) Jane Austen" << endl;
    cout << "c) Charles Dickens" << endl;
    cout << "d) F. Scott Fitzgerald" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 5
    cout << "\nQuestion 5" << endl;
    cout << "What is the largest mammal?" << endl;
    cout << "a) Elephant" << endl;
    cout << "b) Blue Whale" << endl;
    cout << "c) Giraffe" << endl;
    cout << "d) Lion" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "b") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 6
    cout << "\nQuestion 6" << endl;
    cout << "Who painted the Mona Lisa?" << endl;
    cout << "a) Leonardo da Vinci" << endl;
    cout << "b) Vincent van Gogh" << endl;
    cout << "c) Pablo Picasso" << endl;
    cout << "d) Michelangelo" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 7
    cout << "\nQuestion 7" << endl;
    cout << "What is the chemical symbol for gold?" << endl;
    cout << "a) Au" << endl;
    cout << "b) Ag" << endl;
    cout << "c) Fe" << endl;
    cout << "d) Cu" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 8
    cout << "\nQuestion 8" << endl;
    cout << "What is the tallest mountain in the world?" << endl;
    cout << "a) Mount Everest" << endl;
    cout << "b) K2" << endl;
    cout << "c) Kilimanjaro" << endl;
    cout << "d) Mount McKinley" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 9
    cout << "\nQuestion 9" << endl;
    cout << "What is the largest planet in our solar system?" << endl;
    cout << "a) Earth" << endl;
    cout << "b) Jupiter" << endl;
    cout << "c) Saturn" << endl;
    cout << "d) Mars" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "b") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    std::cout << endl;
    // Soal 10
    cout << "\nQuestion 10" << endl;
    cout << "Who invented the telephone?" << endl;
    cout << "a) Alexander Graham Bell" << endl;
    cout << "b) Thomas Edison" << endl;
    cout << "c) Nikola Tesla" << endl;
    cout << "d) Guglielmo Marconi" << endl;
    cout << "Enter your answer: ";
    cin >> correctAnswer;
    
    if (correctAnswer == "a") {
        cout << "Your answer is correct" << endl;
        cout << "You got 10 points" << endl;
        totalPoints += 10;
    }
    else{
      cout << "Your answer is inccorect, try again!!";
    }
    
    // Output nilai total
    cout << "\nTotal points: " << totalPoints << endl;
    
    return 0;

}