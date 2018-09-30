/*Find the min and max and average of 15 numbers that a user will input.
**The numbers range from 0 to 100. 
**We will do it now for practice and again later when we learn arrays and 
**functions. So you do not have to keep all fifteen numbers stored in memory.
**HINT: you will need to use scanf for input text.
*/
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
    int sumTotal = 0;
    float average = 0;

    // get number from the user
    
    for(int i = 0; i < 15; i++)
    {
        cout << "Enter a number: ";
        cin >> userInput;
        if (userInput > maxNumber){
            maxNumber = userInput;
        }
        
        if (userInput < minNumber) {
            minNumber = userInput;
        }
        sumTotal += userInput;
        
        
    }
    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";
    average = sumTotal / 15.0;
    std::cout << "Average = " << average << "\n";
        
    
    return 0;
}
