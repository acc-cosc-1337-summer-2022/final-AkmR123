#include "question1.h"

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int SIZE;
    cout << "Enter how many numbers you want to input: ";
    cin >> SIZE;
    cout << endl;

    double *numbers = new double[SIZE];

    for (int i = 0; i < SIZE; i++){
        do {
        cout << "Score #" << i+1 << ": ";
        cin >> numbers[i];
        } while (numbers[i] < 0);

    }

    double score_average = get_average(numbers, SIZE);

    display_list(numbers, score_average, SIZE);

    return 0;
}