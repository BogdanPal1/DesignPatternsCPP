#ifndef DRAWAPPLICATION_H
#define DRAWAPPLICATION_H

#include "application.h"
#include "drawdocument.h"

class DrawApplication : public Application
{
public:
    DrawApplication();
protected:
    virtual pDocument factoryCreateDocument() override;

private:
    std::shared_ptr<DrawDocument> _doc;
    std::string _name;
};

#endif // DRAWAPPLICATION_H
