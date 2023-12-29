//Section 10
//Challenge
//Substitution Cipher

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    const string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
    
    string msg {};
    cout << "Enter a secret message: ";
    getline(cin, msg);
    
    string msg_crypt {};
    
    for (char c : msg) {
        size_t find_pos = alphabet.find(c);
        if (find_pos != string::npos)
            msg_crypt += key.at(find_pos);
        else
            msg_crypt += c;
    }
    
    cout << "The encrypted message is: " << msg_crypt << endl;
    
    string msg_decrypt {};
    for (char c : msg_crypt) {
        size_t find_pos = key.find(c);
        if (find_pos != string::npos)
            msg_decrypt += alphabet.at(find_pos);
        else
            msg_decrypt += c;
    }
        
    cout << "The decrypted message is: " << msg_decrypt << endl;

    
    cout << endl;
    return 0;
}

