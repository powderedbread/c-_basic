//works with any set of numbers as long as there are spaces
//also works with numbers with different amounts of digits such as "300 23 79695"
#include <stdio.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>   // To use vector
using namespace std;


int main() {
    char theData[] = "5713   6936   4534  8764   3432  3433";  

    int length = sizeof(theData) ;  
    string entry = "";  //used to add chars until a space is reached
    vector<int> theDataFormatted;  // use vector instead an array to use "dynamic" size


    for (int i = 0; i < length; i++) 
    {
        if (isdigit(theData[i]))                         // Add digit "char" to the current entry text if it is "a digit" 
        {entry += theData[i];}   
        
        else if (!isdigit(theData[i]))   
        {                          
            if (entry != "")                              //if entry is not equal to ""
            {
                theDataFormatted.push_back(stoi(entry));  //convert "entry" to int and append to vector
                entry = "";                             
            }
        }

    // Print the result (the second number, for example)
    cout << "first number:  " << theDataFormatted[0] << endl;
    cout << "Second number: " << theDataFormatted[1] << endl;
    cout << "sixth number: " << theDataFormatted[5] << endl;

    return 0;
}
