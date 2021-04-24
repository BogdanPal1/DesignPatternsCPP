#include "opencommand.h"

OpenCommand::OpenCommand(const Document& doc) : _doc(doc)
{
}

void OpenCommand::execute()
{
    _doc.open();
}
