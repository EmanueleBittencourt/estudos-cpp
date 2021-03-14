#include <iostream>

using namespace std;

int main (){

int hostUserNum, guestUserNum;

cout << "Host: " << endl;
cin >> hostUserNum;
system ("cls");

cout << "Guest: " << endl;
cin >> guestUserNum;

//*******ternary operator******

(hostUserNum == guestUserNum)? cout << "Correct!!!": cout << "Failed!!!";


//*******if operator******

/*if (hostUserNum == guestUserNum)
    cout << "Correct!!!" << endl;
else
    cout << "Failed!!!" << endl;
*/
return 0;
}