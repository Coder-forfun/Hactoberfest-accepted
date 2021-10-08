/* Julius Caesar */
/* 
    Given a string of alphabets (plain text) as input 
    the text should be encrypted using caesar cipher 
    and output the encrypted text (cipher text).
*/

#include <iostream>
using namespace std;

// A shift value of 3
int key = 3;

// function takes in plain text, and shifts and returns
// the encrpyted text. 
string encrypt(string &plainText) {
    string enc_msg;
    for(auto x:plainText) {
        char add = ( x<='Z' && x>='A' ? 'A' : 'a' );
        // applying transformation to each character
        enc_msg += (x-add+key)%26 + add;
    }
    // return the encoded message
    return enc_msg;
}

// function to input the string
void input(string &s) 
{
    while(1==1) {
        char x = getchar();
        if(x=='\n') break;
        s += x;
    }
    return;
}

int main()
{
    string s; 
    cout << "\nEnter plain text : "; // A string of alphabets
    input(s);
    string cipherText = encrypt(s);
    cout << "\nCipher Text      : " << cipherText;
    return 0;
}
