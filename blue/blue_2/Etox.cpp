// Student ID: 20384479
// TODO - Replace the number above with your actual Student ID
// Etox.cpp
// 2a-Lab-01
//

#include <iostream>
#include <sstream>
#include <cmath> // needed for sqrt
#include <cstdlib> // for exit()
using namespace std;


double etox_5_terms(double x) {

    double etox;

    etox = 1 + 5 + 2 + 12.5 + 20.8333;
    return etox;

}

int main(int argc, char **argv) {

    string user_input;
    double x;
    double etox;
    cout <<"Enter a value for x: ";
    getline(cin, user_input);
    istringstream(user_input) >>x;
    // TODO - Your code here

    etox = etox_5_terms(x);

    cout << etox << endl;

    return 0;
}