#include "HTMLTree.h"

void HTMLTree::addChild(HTMLTree *child) {
    children.push_back(child);
}