/*The goal of this quiz is to practice writing and reading files.
**Read the contents of input.txt and then write to it. 
**
**We are using input.txt as our file. This is not an ideal
**situation, because when we write to it, we cannot
**see the changes. We can manually write in input.txt and
**we can also use the program to write to the file. 
**Then we can read what we wrote using our program.
**
**Your assignment for this quiz**
**Change the contents of the file called input.txt
**Change the ifstream and ofstream to fstream

*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
    string line;
    //create an output stream to write to the file
    //append the new lines to the end of the file
    ifstream myfileI ("input.txt");
    if (myfileI.is_open()){
        while(getline(myfileI, line)){
            cout << line << endl;
        }
        myfileI.close();
    }

    ofstream myfileO ("input.txt", ios::app);

    string line1 = "This is a line 1";
    string line2 = "This is a line 2";
    string line3 = "This is a line 3";
    if(myfileO.is_open())
    {
        myfileO << endl;
        myfileO << line1;
    }
    myfileO.close();


    return 0;
}