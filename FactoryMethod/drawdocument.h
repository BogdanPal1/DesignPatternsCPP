#ifndef DRAWDOCUMENT_H
#define DRAWDOCUMENT_H

#include "document.h"

class DrawDocument : public Document
{
public:
    DrawDocument();
    virtual void open(const std::string& name) override;
    virtual void save() override;
    virtual void close() override;

private:
    std::string _name;
};

#endif // DRAWDOCUMENT_H
