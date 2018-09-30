#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    string year, month, day;
    cout << "your year is " ;
    cin >>  year;
    cout << "your month is ";
    cin >>  month;
    cout << "your day is ";
    cin >>  day;
    cout << "Your input date is " + year + "-" + month + "-" + day << endl;
    return 0;
}
