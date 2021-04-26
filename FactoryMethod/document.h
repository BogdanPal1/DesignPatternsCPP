#ifndef DOCUMENT_H
#define DOCUMENT_H

#include <string>
#include <iostream>

class Document
{
public:
    virtual void open(const std::string&) = 0;
    virtual void save() = 0;
    virtual void close() = 0;
    virtual ~Document() {}
};

#endif // DOCUMENT_H
