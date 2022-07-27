#include "question2.h"
#include <iostream>

using namespace std;

double Toll::get_amount(){
    double bill;

    if (time >= 0 && time < 7) {
        bill = exits * 0.25;
    }
    else if (time >= 7 && time < 9) {
        bill = exits * 2.5;
    }
    else if (time >= 9 && time < 12) {
        bill = exits;
    }
    else if (time >= 12 && time < 15) {
        bill = exits * 1.5;
    }
    else if (time >= 15 && time < 18) {
        bill = exits * 2.5;
    }
    else if (time >= 18 && time < 23) {
        bill = exits;
    }

    return bill;

}