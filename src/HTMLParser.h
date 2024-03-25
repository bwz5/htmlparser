#include "HTMLTree.h"
#include <string>

class HTMLParser {
private:
    HTMLTree* root;
public:
    HTMLParser();

    ~HTMLParser();

    int parseHTMLString(std::string HTMLString);

    std::string createHTMLString(std::string fileName);
};