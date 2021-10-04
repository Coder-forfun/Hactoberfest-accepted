/* Program to split a sentence into vector of strings at the given separator and recombine it. */
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

std::vector<std::string> StringToVector(std::string theString, char separator);
std::string VectorToString(std::vector<std::string> &strVec, char separator);

int main(){
    std::vector<std::string> wordsVec = StringToVector("This is a string", ' ');

    for(int i = 0; i < wordsVec.size(); i++) {
        std::cout << wordsVec[i] << "\n";
    }

    std::vector<std::string> vCusts(3);
    vCusts[0] = "Bob";
    vCusts[1] = "Sue";
    vCusts[2] = "Tom";

    std::string sCusts = VectorToString(vCusts, ' ');
    std::cout << sCusts << "\n";

    return 0;
}

std::vector<std::string> StringToVector(std::string theString, char separator) {
    std::vector<std::string> wordsVec;
    std::stringstream ss(theString);
    std::string indivStr;

    while(getline(ss, indivStr, separator)) {
        wordsVec.push_back(indivStr);
    }

    return wordsVec;
}

std::string VectorToString(std::vector<std::string> &strVec, char separator) {
    std::string str = "";
    for(auto indivStr: strVec)
        str += indivStr + separator;
        
    return str;
}
