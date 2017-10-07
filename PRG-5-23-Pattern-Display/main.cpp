//
//  main.cpp
//  PRG-5-23-Pattern-Display
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  Write a program that uses a loop to display Pattern A below, followed by another loop
//  that displays Pattern B.
//
//  PATTERN A
//  +
//  ++
//  ...
//  ++++++++++
//
//  PATTERN B
//  ++++++++++
//  +++++++++
//  ...
//  +


#include <iostream>

using namespace std;

int main()
{
    // Declare and initialize variables
    int intPatternSize = 10,
        intPatternCount = 0;
    
    for(int a = 0 ; a <intPatternSize ; a++)
    {
        // Increment to get increasing number of X's
        for(int b = 0 ; b <= intPatternCount ; b++)
        {
            cout << 'X';
        }
        intPatternCount++;
        cout << endl;
    }
    
    // Divide two patterns
    cout << endl << endl;
    
    for(int i = 0 ; i < intPatternSize ; i++)
    {
        // Decrement to get decreasing number of X's
        for(int k = intPatternCount ; k > 0 ; k--)
        {
            cout << 'X';
        }
        intPatternCount--;
        cout << endl;
    }
    
    return 0;
}


