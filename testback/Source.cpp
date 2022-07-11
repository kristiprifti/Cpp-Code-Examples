// Section 10
// Challenge - 
// Substitution Cipher

/*
A simple and very old method of sending secret messages is the substitution cipher.
You might have used this cipher with your friends when you were a kid.
Basically, each letter of the alphabet gets replaced by another letter of the alphabet.
For example, every 'a' get replaced with an 'X', and every 'b' gets replaced with a 'Z', etc.

Write a program thats ask a user to enter a secret message.

Encrypt this message using the substitution cipher and display the encrypted message.
Then decryped the encrypted message back to the original message.

You may use the 2 strings below for  your subsitition.
For example, to encrypt you can replace the character at position n in alphabet
with the character at position n in key.

To decrypt you can replace the character at position n in key
with the character at position n in alphabet.

Have fun! And make the cipher stronger if you wish!
Currently the cipher only substitutes letters - you could easily add digits, puncuation, whitespace and so
forth. Also, currently the cipher always substitues a lowercase letter with an uppercase letter and vice-versa.
This could also be improved.

Remember, the less code you write the less code you have to test!
Reuse existing functionality in libraries and in the std::string class!
*/

#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {

    string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key{ "XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr" };

    string message{};
    //const char x = 'a';
    //const char y = 'Z';

    cout << "Please eneter your String:";
    getline(cin, message);




    //replace(message.begin(), message.end(), );
    //replace(message.begin(), message.end(), 'b', 'Z');

    for (auto i : message) {
        int index = message.find(i);
        if (index != std::string::npos) {
            std::cout << "Character found at index " << index << std::endl;
        }
        else {
            std::cout << "Character not found" << std::endl;
        }


    }



    //for (int i{ 0 }; i < alphabet.size();i++) {
    //    char x = alphabet.at(i);
    //    int j{ i };
    //    for (j; j < key.size(); j++) {
    //        char p = key.at(j);
    //        replace(message.begin(), message.end(), x, p);
    //    }
    //}
    //replace(message.begin(), message.end(), i, j);


    //size_t pos{};
    //while ((pos = message.find('a')) != string::npos) {
    //    message.replace(pos, 1,"Z");
    //}

    cout << message << endl;
    //for (auto i : message) {
    //    
    //}

    

    cout << endl;
    return 0;
}

