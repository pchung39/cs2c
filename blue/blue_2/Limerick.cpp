// Student ID: 20384479
// Limerick.cpp
// 2a-Lab-01

#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib> 

using namespace std;

double eval_limerick(int dozen, int gross, int score) {

    double limerick;
    limerick = (dozen + gross + score + (3 * sqrt(4))) / 7 + (5 * 11);
    //limerick = ((dozen + gross + score + 3) * sqrt(4)) / (7 + (5 * 11)) ;
    return limerick;


}

int main(int argc, char **argv) {
    int dozen, gross, score;
    double limerick;
    if (argc < 4) {
        cerr <<"Usage: limerick dozen-val gross-val score-val\n";
        exit(1);
    }
    istringstream(argv[1]) >>dozen;
    istringstream(argv[2]) >>gross;
    istringstream(argv[3]) >>score;
    // Invoke the eval_limerick function correctly and print the result
    // with a single newline at the end of the line.
    // TODO - Your code here

    // gross is 144 
    // dozen is 12 
    // score is 20

    limerick = eval_limerick(dozen, gross, score);
    cout << limerick << endl;

    return 0;
}