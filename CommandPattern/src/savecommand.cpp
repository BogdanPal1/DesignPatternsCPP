#include "savecommand.h"

SaveCommand::SaveCommand(const Document& doc) : _doc(doc)
{
}

void SaveCommand::execute()
{
    _doc.save();
}
