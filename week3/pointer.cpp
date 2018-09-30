/*Goal: Examine pointers!*/

#include <iostream>

int main()
{
    int a = 54;
    std::cout<<"a = "<<a<<"\n";
    std::cout<<"address of a is at &a = "<< &a<<"\n";
    int b = 55;
    std::cout<<"b = "<<b<<"\n";
    std::cout<<"address of b is at &b = "<< &b<<"\n";
    
    std::cout << *(&b) << "\n";
    
    return 0;
}