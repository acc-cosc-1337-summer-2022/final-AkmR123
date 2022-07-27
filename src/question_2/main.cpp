#include "question2.h"
#include <iostream>
#include <vector>

using namespace std;

std::ostream& operator<<(std::ostream& output, Toll toll)
{
  output << "Toll amount is " << toll.get_amount();
  return output;
}

int main()
{
    int exits, time;
    char choice;
    vector<Toll> tolls; 

    do 
    {

    cout << "\nEnter the time: ";
    cin >> time;

    cout << "Enter the amount of exits made: "; 
    cin >> exits;

    Toll bill(exits, time); 
    bill.get_amount(); 
    tolls.push_back(bill); 


    cout << "\nWould you like to try again (y/n)? "; 
    cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << endl;

    for(auto i: tolls){
        cout << i << endl;
    }

    return 0;
}