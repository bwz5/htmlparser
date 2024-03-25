#include "HTMLParser.h"
#include <fstream>
#include <iostream>
#include <sstream>

std::string HTMLParser::createHTMLString(std::string fileName) {
    std::ifstream htmlTextFile(fileName, std::ios::in);

    std::string output = "";

    if (htmlTextFile.is_open()){
        std::string line;

        while(std::getline(htmlTextFile,line)){
            std::string token;
            std::stringstream ss(token);

            while (getline(ss, token, ' ')) {
                output += token;
            }
        }
    }
    if (output == ""){
        std::cout << "The returned HTML String was empty." << std::endl;
    } else {
        std::cout << "The HTML String has been made" << std::endl;
    }
    return output;
}

int HTMLParser::parseHTMLString(std::string HTMLString) {
    HTMLTree* current = root;

    
}

HTMLParser::HTMLParser() {
    root->parent = NULL;
}

HTMLParser::~HTMLParser() {}