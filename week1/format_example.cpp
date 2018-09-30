#include "iostream"
#include "iomanip"
using namespace std;

int main(int argc, char const *argv[])
{
    std::cout<<"\n\nThe text without any formating\n";
    std::cout<<"Ints"<<"Floats"<<"Doubles"<< "\n";
    std::cout<<"\nThe text with setw(15)\n";
    std::cout<<"Ints"<<std::setw(15)<<"Floats"<<std::setw(15)<<"Doubles"<< "\n";
    std::cout<<"\n\nThe text with tabs\n";
    std::cout<<"Ints\t"<<"Floats\t"<<"Doubles"<< "\n";

    double d1 = 3.144444444444444444444;
    cout << "double value formated is " << setw(4)<< d1<<endl;
    return 0;
}
