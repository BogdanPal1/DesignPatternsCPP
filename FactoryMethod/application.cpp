#include "application.h"

Application::Application()
{

}

void Application::newDocument()
{
    _doc = factoryCreateDocument();
}
void Application::openDocument(const std::string &name)
{
    _doc->open(name);
}
void Application::saveDocument()
{
    _doc->save();
}

void Application::closeDocument()
{
    _doc->close();
}
