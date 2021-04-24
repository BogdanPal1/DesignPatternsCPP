#include "commandinvoker.h"

CommandInvoker::CommandInvoker(std::shared_ptr<Command> command) : _command(command)
{
}

void CommandInvoker::newCommand(std::shared_ptr<Command> command)
{
    _command.reset();
    _command = command;
}

void CommandInvoker::executeOperation()
{
    _command->execute();
}
