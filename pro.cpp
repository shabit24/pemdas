#include <iostream>

using namespace std;

int main()
{ // Begin
    // numeric
    int bil;
    // character status
    string status;
    // Display "Masukkan bilangan"
    cout << "Masukkan bilangan = ";
    // accept bil
    cin >> bil;
    // if (bill == 0)
    if (bil == 0)
        // status = "nol";
        status = "nol";
    // else
    else if (bil % 2 == 0)
        // status = "ganjil"
        status = "ganjil";
    // display "billangnya = " + status

    cout << "billangnnya = " << status;

} // end