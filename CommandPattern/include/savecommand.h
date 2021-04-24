#ifndef SAVECOMMAND_H
#define SAVECOMMAND_H

#include "command.h"
#include "document.h"

class SaveCommand : public Command
{
public:
    SaveCommand(const Document& doc);
    virtual void execute() override;
private:
    Document _doc;
};

#endif // SAVECOMMAND_H
