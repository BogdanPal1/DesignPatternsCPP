#include "document.h"

Document::Document(const std::string& fileName) : _fileName(fileName)
{
    std::cout << "Construct document object with name " + fileName << std::endl;
}

void Document::open()
{
    std::cout << "Opened file with name " + _fileName << std::endl;
}

void Document::save()
{
    std::cout << "Saved file with name " + _fileName << std::endl;
}
