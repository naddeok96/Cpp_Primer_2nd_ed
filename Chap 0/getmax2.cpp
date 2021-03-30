// Imports
#include <iostream>


// Forward declarations
void read2(int&, int&);
int max(int, int);
void writeMax(int);

//main function
int main(){

    // Declare types
    int val1, val2;

    // Read in two numbers
    read2(val1, val2);

    // Determine max of two numbers
    int maxVal = max(val1, val2);

    // writeMax
    writeMax(maxVal);

    return 0;
}

// Read in two numbers
void read2(int& val1, int& val2){
    std::cout << "Please enter two integers: \n";
    std::cin >> val1 >> val2;
}

// Determine max of two numbers
int max(int val1, int val2){
    if (val1 > val2) 
        return val1;
    else 
        return val2;
}

// Print out max value
void writeMax(int val){
    std::cout << val
         << " is the largest of the two!\n";
}