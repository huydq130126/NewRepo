#include <iostream>
using namespace std;
int main () {
    int day;
    cout << "Enter day ";
    cin >> day;
    switch (day){
        case 1 : cout << "Monday"; break;
        case 2 : cout << "Tuesday"; break;
        default : cout << "Invalid day.";
    }
    return 0;
}
