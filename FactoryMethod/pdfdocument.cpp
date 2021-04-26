#include "pdfdocument.h"

PdfDocument::PdfDocument()
{
    std::cout << "I am PDF document object" << std::endl;
}

void PdfDocument::open(const std::string &name)
{
    _name = name;
    std::cout << "Open PDF document with name " <<_name << std::endl;
}

void PdfDocument::save()
{
    std::cout << "Saved file with name " << _name << std::endl;
}

void PdfDocument::close()
{
    std::cout << "Closed file with name " << _name << std::endl;
}
