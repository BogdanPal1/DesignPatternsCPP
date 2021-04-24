#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <iostream>

class Document
{
public:
    Document(const std::string& fileName);
    void open();
    void save();
private:
    std::string _fileName;
};

#endif // DOCUMENT_H
