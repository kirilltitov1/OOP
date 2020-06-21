#ifndef ERRORS_H
#define ERRORS_H

enum Errors
{
    OK,
    MEMORY_ALLOCATION_ERROR,
    OPEN_FILE_ERROR,
    INVALID_FILE_DATA,
    UNKNOWN_ERROR
};

void errorMessage(Errors err);

#endif // ERRORS_H
