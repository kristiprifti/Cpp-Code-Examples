// Section 9
// Challenge
/*
    This challenge is about using a collection (list) of integers and allowing the user
    to select options from a menu to perform operations on the list.

    Your program should display a menu options to the user as follows:

    P - Print numbers
    A - Add a number
    M - Display mean of the numbers
    S - Display the smallest number
    L - Display the largest number
    Q - Quit

    Enter your choice:

The program should only accept valid choices from the user, both upper and lowercase selections should be allowed.
If an illegal choice is made, you should display, "Unknown selection, please try again" and the menu options should be
displayed again.


If the user enters 'P' or 'p', you should display all of the elements (ints) in the list.
If the list is empty you should display "[] - the list is empty"
If the list is not empty then all the list element should be displayed inside square brackets separated by a space.
For example, [ 1 2 3 4 5 ]

If the user enters 'A' or 'a' then you should prompt the user for an integer to add to the list
which you will add to the list and then display it was added. For example, if the user enters 5
You should display, "5 added".
Duplicate list entries are OK

If the user enters 'M' or 'm'  you should calculate the mean or average of the elements in the list and display it.
If the list is empty you should display, "Unable to calculate the mean - no data"

If the user enters 'S' or 's' you should display the smallest element in the list.
For example, if the list contains [2 4 5 1],  you should display, "The smallest number is 1"
If the list is empty you should display, "Unable to determine the smallest number - list is empty"

If the user enters 'L' or 'l' you should display the largest element in the list
For example, if the list contains [2 4 5 1], you should display, "The largest number is 5"
If the list is empty you should display, "Unable to determine the largest number - list is empty"

If the user enters 'Q' or 'q' then you should display 'Goodbye" and the program should terminate.

Before you begin. Write out the steps you need to take and decide in what order they should be done.
Think about what loops you should use as well as what you will use for your selection logic.

This exercise can be challenging! It may likely take a few attempts before you complete it -- that's OK!

Finally, be sure to test your program as you go and at the end.

Hint: Use a vector!

Additional functionality if you wish to extend this program.

- search for a number in the list and if found display the number of times it occurs in the list
- clearing out the list (make it empty again) (Hint: the vector class has a .clear() method)
- don't allow duplicate entries
- come up with your own ideas!


Test
Good luck!

*/
#include <iostream>
#include <vector>

using namespace std;

int main() {

    char v{ 'w' };
    vector<int> numbers{10,20};

    //    numbers.push_back(1);

    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "C - Clear the list" << endl;
        cout << "N - Find The number" << endl;
        cout << "Q - Quit" << endl;
        cout << endl;
        cout << endl;
        cin >> v;



        // print the numbers 
        if (v == 'p' || v == 'P') {
            cout << "[";
            for (int i{ 0 }; i < numbers.size(); i++) {
                cout << numbers.at(i) << " ";
            }
            cout << "]";
            if (numbers.size() == 0) {
                cout << " -- List is empty";
            }
        }
        // add the numbers
        else if (v == 'A' || v == 'a') {
            int add_number{};
            cout << "Enter a number to the list" << endl;
            cin >> add_number;
            numbers.push_back(add_number);
            cout << add_number << " added";

        }

        // the mean 
        else if (v == 'm' || v == 'M') {
            if (numbers.size() == 0) {
                cout << "Unable to calculate the mean - no data";
            }
            else {
                int total{ 0 };
                for (int i{ 0 }; i < numbers.size(); i++) {
                    total += numbers.at(i);
                }
                cout << "The mean is :" << total << " / " << numbers.size() << " = " << total/numbers.size();
            }
        }

        // smallest number on the list
        else if (v == 's' || v == 'S') {
            if (numbers.size() == 0) {
                cout << "Unable to determine the smallest number - list is empty";
            }
            else {
                int smalles_nr {numbers.at(0)};
                for (int i{ 0 }; i < numbers.size(); i++) {
                    if (numbers.at(i) < smalles_nr) {
                        smalles_nr = numbers.at(i);
                    }
                }
                cout << "Smallest number is: " << smalles_nr;
            }
        }

        // largest number on the list
        else if (v == 'l' || v == 'L') {
            if (numbers.size() == 0) {
                cout << "Unable to determine the largest number - list is empty";
            }
            else {
                int largest_nr{ numbers.at(0) };
                for (int i{ 0 }; i < numbers.size(); i++) {
                    if (numbers.at(i) > largest_nr) {
                        largest_nr = numbers.at(i);
                    }
                }
                cout << "Largest number is: " << largest_nr;
            }
        }

        // clean the list 
        else if (v == 'c' || v == 'C') {
            numbers.clear();
            cout << "List is cleared";
        }

        // dispaly the number of times number is on the list
        else if (v == 'n' || v == 'N') {
            if (numbers.size() == 0) {
                cout << "Unable to find the  number - list is empty";
            }
            else {
                int number_to_find{};
                cout << "Enter the number you want to find";
                cin >> number_to_find;
                int counter{ 0 };
                for (int i{ 0 }; i < numbers.size(); i++) {
                    if (numbers.at(i) == number_to_find) {
                        counter++;
                    }
                }
                cout << number_to_find << " is found " << counter << " times " << endl;

            }
        }


        else if (v != 'Q' && v != 'q') {
            cout << "Unknown selection, please try again";
        };

        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;

    } while (v != 'Q' && v != 'q');
    cout << "GoodBye";

    return 0;
}

