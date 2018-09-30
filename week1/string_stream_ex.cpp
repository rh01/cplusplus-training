/*Goal: practice using stringstream
/*Goal: practice getting string inputs and 
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room. 
 **Then prompt for the width of the room.
 **Print out the area of the room. 
 */

#include <iostream>
#include <string>
#include <sstream>

int main(int argc, char const *argv[])
{
    float length, width;
    std::string l, w;
    std::cout << "please input lenth of room." << "\n";
    std::getline(std::cin, l);
    std::cout << "please input width of room." << "\n";
    std::getline(std::cin, w);
    std::stringstream(l) >> length;
    std::stringstream(w) >> width;
    std::cout << "Area of your room is " << length * width << "\n";
    return 0;
}
