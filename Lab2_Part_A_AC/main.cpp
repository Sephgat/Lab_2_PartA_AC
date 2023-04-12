#include <iostream>
#include "binarySearch.h"

using namespace std;
//list of functions
int getInteger();
void fillArray(string names[]);
void displayArray(const string names[]);
bool binSearch(const string names[], string name);
//end of list of functions



int main() {
    string names[19];
    string name;
    getInteger();
    fillArray(names);
    displayArray(names);
    binSearch(names,name);

    return 0;
}
