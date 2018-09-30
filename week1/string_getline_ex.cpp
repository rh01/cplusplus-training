/*Goal: practice std::cin for strings
**Write a program that prompts two users for their
**name, address, and phone number. 
**Print the information to the console in the following format:
**name
**\/t\/t address
**\/t\/tphone number
*/
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    string name, address, phone_number;
    cout << "please input your name" << endl;
    getline(cin, name);
    cout << "please input your address" << endl;
    getline(cin, address);
    cout << "please input your phone number" << endl;
    getline(cin, phone_number);

    cout << name << endl;
    cout << "\t\t" << address <<endl;
    cout << "\t\t" << phone_number <<endl;



    return 0;
}
