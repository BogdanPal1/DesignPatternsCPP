#include "drawdocument.h"

DrawDocument::DrawDocument()
{
    std::cout << "I am draw document" << std::endl;
}

void DrawDocument::open(const std::string &name)
{
    _name = name;
    std::cout << "Open draw document with name " << _name << std::endl;
}

void DrawDocument::save()
{
    std::cout << "Save draw document with name " << _name << std::endl;
}

void DrawDocument::close()
{
    std::cout << "Close draw document with name " << _name << std::endl;
}
