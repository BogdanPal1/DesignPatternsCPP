#include "pdfapplication.h"

PdfApplication::PdfApplication()
{
    std::cout << "I am PDF appication object" << std::endl;
}

Application::pDocument PdfApplication::factoryCreateDocument()
{
    return std::make_shared<PdfDocument>();
}
