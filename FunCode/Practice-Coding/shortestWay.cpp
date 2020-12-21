//ZEPHER4
#include<iostream>
#include<string>
#include<set>

int shortestWay(std::string source, std::string target) {
    bool condition = true;
    int start = 0;
    int num_subsequences = 0;

    std::string CAT = source + target;
    std::set<char> checker(CAT.begin(), CAT.end());
    if (checker.size() > source.length())
       return -1;

    while (condition) {
        char temp = target.at(start);       //should grab 'a' from target
        std::string::iterator itrS;              //iterates through the source string
        int count = 0; 
                
        for (itrS = source.begin(); itrS != source.end(); itrS++) {
            if (*itrS == temp) {                       
                count++;

                if (start + count < target.length())
                    temp = target.at(start + count);        //iterates over the target the string
                }
            }

        num_subsequences++;
        start += count;

        if (start == target.length()) 
            condition = false;
    }

    return num_subsequences;
}

int main() {
    std::string source = "xyz";     //xyz
    std::string target = "xzyxz";   //xzyxz

    int result = shortestWay(source, target);

    std::cout << result << std::endl;

    return 0;
}