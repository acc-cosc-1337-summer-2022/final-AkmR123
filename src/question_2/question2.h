#include <iostream>

using namespace std;

class Toll {
public:
    Toll(int exit, int times){
        exits = exit;
        time = times;
    }
    double get_amount();

private: 
    int exits;
    int time;

};