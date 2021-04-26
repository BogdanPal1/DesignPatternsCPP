#ifndef PDFDOCUMENT_H
#define PDFDOCUMENT_H

#include "document.h"

class PdfDocument : public Document
{
public:
    PdfDocument();
    virtual void open(const std::string& name) override;
    virtual void save() override;
    virtual void close() override;

private:
    std::string _name;
};


#endif // PDFDOCUMENT_H
