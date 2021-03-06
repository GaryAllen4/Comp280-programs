/*
 * Author: Gary Allen
 * Date: 02/24/2018
 * Assignment: Program #2: Linked List
 * File: main.cpp
 * Description: This file is used to execute the program and call the methods
 */
#include "LinkedList.h"
#include <iostream>


int main() {
    //variable used to hold the user's option selection to access the corresponding method
    int optionNumber = 0;
    //variable used to say if the program should continue to run or end
    bool running = true;
    //List object created to access methods
    LinkedList list;

    //loop keeps running until the user wants to exit the program
    while (running) {
        cout << endl;
        cout << "MENU" << endl;
        cout << "1. Insert" << endl;
        cout << "2. Reverse Display" << endl;
        cout << "3. Show Value at Location" << endl;
        cout << "4. Delete Value" << endl;
        cout << "5. Display Values (All, Even, or Odd)" << endl;
        cout << "6. Sort" << endl;
        cout << "7. Median" << endl;
        cout << "8. Shuffle" << endl;
        cout << "9. Exit" << endl;
        cout << "Select an option number from above:" << endl;
        cin >> optionNumber;

        if (optionNumber == 1) {
            cout << "What value would you like to put into the list?" << endl;
            string userInput;
            cin >> userInput;
            list.InsertAtEnd(userInput);
        } else if (optionNumber == 2) {
            list.ReverseDisplay();
        } else if (optionNumber == 3) {
            if (list.isEmpty() == true) {
                cout << "The list is currently empty. Select Option 1 to insert some items into the list." << endl;
            } else {
                cout << "Which location's value would you like to see ? Use a number to indicate your selected position." << endl;
                int userChoice = 0;
                cin >> userChoice;
                list.GetValueAt(userChoice);
            }
        } else if (optionNumber == 4) {
            if (list.isEmpty() == true) {
                cout << "The list is currently empty. Select Option 1 to insert some items into the list." << endl;
            } else {
                string userString;
                cout << "What string value would you like to remove?" << endl;
                cin >> userString;
                list.DeleteAll(userString);
            }
        } else if (optionNumber == 5) {
            if (list.isEmpty() == true) {
                cout << "The list is currently empty. Select Option 1 to insert some items into the list." << endl;
            } else {
                cout << "Display all string lengths, strings of even length, or strings of odd length? (Type All, Even, Odd)" << endl;
                string input;
                cin >> input;
                list.Display(input);
            }
        } else if (optionNumber == 6) {
            list.Sort();
        } else if (optionNumber == 7) {
            double median = list.Median();
            cout << median << endl;
        } else if (optionNumber == 8) {
            list.Shuffle();
        } else if (optionNumber == 9) {
            running = false;
        } else {
            cout << "You did not use a correct input value." << endl;
            running = false;
        }
    }
}