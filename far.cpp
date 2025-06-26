#include <iostream>
#include <iomanip>
#include <fstream>

int main() {

//Variable declarations

    std::string userFPath;
    std::string findWord;
    std::string replaceWord;
    std::string outputFPath = "./out.txt";
    std::string word;
    std::string fileWord;
    int wordCount = 0;
    int replaceCount = 0;

    //Getting user input
    std::cout << "Welcome to F.A.R." << std::endl;
    std::cout << "File path: ";
    std::cin >> userFPath;
    std::cout << "Output Path: ";
    std::cin >> outputFPath;
    std::cout << "Find: ";
    std::cin >> findWord;
    std::cout << "Replace: ";
    std::cin >> replaceWord;

    //Opening and checking the validity of the user provided file
    std::ifstream inputFile;
    inputFile.open(userFPath);

    if (!inputFile.is_open()) {
        std::cerr << "Error: Could not open input file." << std::endl;
        return 0;
    }

    //Opening and checking the validity of the output file
    std::ofstream outputFile;
    outputFile.open(outputFPath);

    if (!outputFile.is_open()) {
        std::cerr << "Error: Could not open output file." << std::endl;
        return 0;
    }

    //Finding and replacing
    while (inputFile >> fileWord) {
    if (fileWord == findWord) {
        std::cout << " " << replaceWord;
        replaceCount++;
        wordCount++;
    } else {
        std::cout << " " << fileWord;
        wordCount++;
        }
    }
    inputFile.close();
    outputFile.close();

    std::cout << "Process Compleat!" << std::endl;
    std::cout << "Total Words Checked: " << wordCount << std::endl;
    std::cout << "Total Words Replaced: " << replaceCount << std::endl;
    std::cout << "The output file is located at: " << outputFPath << std::endl;
    return 0;
}