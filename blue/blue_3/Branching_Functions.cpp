// Student ID: 20384479
// Replace the number above with your Student ID
//
// Branching-Functions.cpp
// 2a-Lab-03
//
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm> 
#include <climits>
// Forward declarations of functions that will be used in this file
// before their definitions are encountered by the compiler
double mean_of_3(int n1, int n2, int n3);
int max_of_5(int n1, int n2, int n3, int n4, int n5);
int min_of_5(int n1, int n2, int n3, int n4, int n5);
bool sides_make_triangle(int a, int b, int c);
bool angles_make_triangle(int A, int B, int C);
bool is_a_leap_year(int year);

using namespace std;

// This function returns the mean the three numbers passed
// in as parameters. Note that the mean may not be a round
// number. So you must use the double datatype for it.
double mean_of_3(int n1, int n2, int n3) {
    double mean;

    mean = (n1 + n2 + n3)/double(3);
    return mean;
}

// This function returns the maximum of the 5 given numbers
int max_of_5(int n1, int n2, int n3, int n4, int n5) {

    int vect[5] = {n1, n2, n3, n4, n5};
    int max;

    max = *max_element(vect, vect + 5);

    return max;

}

// This function returns the minimum of the 5 given numbers
int min_of_5(int n1, int n2, int n3, int n4, int n5) {
    
    int vect[5] = {n1, n2, n3, n4, n5};
    int min;

    min = *min_element(vect, vect + 5);

    return min;
}

// Given three lengths, this function should return whether they can be the
// sides of some triangle. The heuristic you code should check if the
// sum of the two smallest sides is greater than or equal to the third side.
// Treat extreme cases as valid trianges. E.g. a+b == c means valid triangle.
// The challenge is to do it without using arrays
bool sides_make_triangle(int a, int b, int c) {

    int arr[3] = {a,b,c};

    int first = INT_MAX, sec = INT_MAX;
    int largest;
    for (int i = 0; i < 3; i++) {
        if (arr[i] < first) {
            sec = first;
            first = arr[i];
        }else if (arr[i] < sec) {
            sec = arr[i];
        }
    }

    for (int i = 0; i< 3; i++) {
        if (arr[i] != first && arr[i] != sec) {
            largest = arr[i];
        }
    }

    if ((first + sec) >= largest) {
        return true;
    }
    else {
        return false;
    }

}

// Given three angles as integer degrees, this function should return whether
// they can be internal angles of some triangle. Treat extreme cases as
// valid triangles. E.g. (0, 0, 180) is a valid triangle
bool angles_make_triangle(int A, int B, int C) {

    if (A + B + C == 180) {
        return true;
    }
    else {
        return false;
    }

}

// Return true if the year yyyy is a leap year and false if not.
bool is_a_leap_year(int yyyy) {

    if (((yyyy % 4 == 0) && (yyyy % 100 != 0)) || (yyyy % 400 == 0)) {
        return true;
    }
    else {
        return false;
    }

}

// int main() {

//     bool hello;
//     hello = sides_make_triangle(8,5,10);
//     cout << hello << endl;
// }