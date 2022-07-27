#include "question1.h"

#include <iostream>
#include <string>

using namespace std;

double get_average(double* array, int size){
    double avg;
    for (auto i = 0; i < size; i++){
        avg += array[i];
    }
    
    return avg / size;
}

void display_list(double* array, double avg, int size){
    cout << "\nThe list of scores is as follows: ";
    for (int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
    cout << "\nThe average is: " << avg << endl;
    
}