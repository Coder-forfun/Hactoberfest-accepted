// Return all codes - String

// Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.
// Note : The order of codes are not important. And input string does not contain 0s.
// Input format :
// A numeric string
// Constraints :
// 1 <= Length of String S <= 10
// Sample Input:
// 1123
// Sample Output:
// aabc
// kbc
// alc
// aaw
// kw

#include <iostream>
#include <string.h>
using namespace std;

int getCodes(string input, string output[10000]) {
    if(input.empty()){
        output[0]="";
		return 1;
    }
    string output1[1000],output2[1000];
  	int size1=0 , size2 =0;
    int n = input[0] - '0';
    char ch = (char)n +'a' -1;
   	size1 = getCodes(input.substr(1),(output1));
    for(int i = 0; i<size1;i++){
		output[i] = ch+output1[i];
    }
    
    n = stoi(input.substr(0,2));
    if(n>=10 && n<=26)
    {
        
        ch = (char)n +'a' -1;
   		size2 =	getCodes(input.substr(2),(output2));
        for (int i =0;i< size2;i++)
        {
            output[i+size1] = ch+output2[i];
        }
    }
    return size1 + size2;
}


//predefined main
int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}
