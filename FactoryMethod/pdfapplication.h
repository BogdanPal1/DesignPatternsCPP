#ifndef PDFAPPLICATION_H
#define PDFAPPLICATION_H

#include "application.h"
#include "pdfdocument.h"

class PdfApplication : public Application
{
public:
    PdfApplication();

protected:
    virtual pDocument factoryCreateDocument() override;

private:
    std::shared_ptr<PdfDocument> _doc;
    std::string _name;
};

#endif // PDFAPPLICATION_H
