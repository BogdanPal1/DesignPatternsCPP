#ifndef APPLICATION_H
#define APPLICATION_H

#include <string>
#include <memory>

#include "document.h"

class Application
{
protected:
    using pDocument = std::shared_ptr<Document>;

public:
    Application();
    virtual ~Application() {}
    virtual void newDocument();
    virtual void openDocument(const std::string& name);
    virtual void saveDocument();
    virtual void closeDocument();

protected:
    virtual pDocument factoryCreateDocument() = 0;

private:
    pDocument _doc;
};

#endif // APPLICATION_H
