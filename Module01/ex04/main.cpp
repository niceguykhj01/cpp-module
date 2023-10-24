#include <string>
#include <fstream>
#include <iostream>

std::string replace(std::string content, std::string s1, std::string s2) {
    std::size_t i = 0;

    while((i = content.find(s1, i)) != std::string::npos) {
        content.erase(i, s1.length());
        content.insert(i, s2);
    }

    return content;
}

int main(int ac, char* av[]) {
    
    if(ac != 4) {
        std::cout << "Invalid number of input elements!" << std::endl;
        return(0);
    }

    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];

    std::ifstream inputFile;
    std::ofstream outputFile;

    inputFile.open((filename + ".txt").data());

    if(!inputFile.is_open()) {
        std::cout << "Invalid file name!" << std::endl;
        return(0);
    }
    std::string content;
    std::getline (inputFile, content);
    inputFile.close();

    outputFile.open((filename + ".replace").data());
    outputFile << replace(content, s1, s2);;
    outputFile.close();
    

    return (0);
}