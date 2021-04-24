#ifndef COMMANDINVOKER_H
#define COMMANDINVOKER_H

#include "command.h"
#include <memory>

class CommandInvoker
{
public:
    CommandInvoker(std::shared_ptr<Command> command);
    void newCommand(std::shared_ptr<Command> command);
    void executeOperation();
private:
    std::shared_ptr<Command> _command;
};

#endif // COMMANDINVOKER_H
