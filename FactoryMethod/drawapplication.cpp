#include "drawapplication.h"

DrawApplication::DrawApplication()
{
    std::cout << "I am draw application object" << std::endl;
}

Application::pDocument DrawApplication::factoryCreateDocument()
{
    return std::make_shared<DrawDocument>();
}
