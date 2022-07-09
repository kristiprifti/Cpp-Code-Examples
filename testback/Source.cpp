#include <iostream>
#include <string>
using namespace std;

int main () {

    string unformatted_full_name{ "StephenHawking" };
    string formatted_full_name{ };
    string first_name{};
    string last_name{};

    //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
    //----WRITE YOUR CODE BELOW THIS LINE----
    first_name = unformatted_full_name.substr(0, 7);
    last_name = unformatted_full_name.substr(7, unformatted_full_name.size());
    formatted_full_name = first_name + " " + last_name;

    //----WRITE YOUR CODE ABOVE THIS LINE----
    //----DO NOT MODIFY THE CODE BELOW THIS LINE----

    cout << formatted_full_name;

    //His solution 
    //string first_name{ unformatted_full_name, 0, 7 }; // intesrting what is this 
    // 
    //     string s6 {s1, 0, 3};   // App
         //string s7(10, 'X');    // XXXXXXXXXX
    // 
    //string last_name = unformatted_full_name.substr(7, 7);

    //string formatted_full_name = first_name + last_name;

    //formatted_full_name.insert(7, " ");


    return 0;
}