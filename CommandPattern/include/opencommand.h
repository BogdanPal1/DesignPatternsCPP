#ifndef OPENCOMMAND_H
#define OPENCOMMAND_H

#include "command.h"
#include "document.h"

class OpenCommand : public Command
{
public:
    OpenCommand(const Document& doc);
    virtual void execute() override;
private:
    Document _doc;
};

#endif // OPENCOMMAND_H
