#include "errors.h"
#include <QMessageBox>

void errorMessage(Errors err)
{
    switch(err)
    {
        case MEMORY_ALLOCATION_ERROR:
            QMessageBox::critical(nullptr, "Ошибка", "Ошибка при выделении памяти.");
            break;
        case OPEN_FILE_ERROR:
            QMessageBox::critical(nullptr, "Ошибка", "Невозможно открыть файл.");
            break;
        case INVALID_FILE_DATA:
            QMessageBox::critical(nullptr, "Ошибка", "Формат файла некорректный.");
            break;
        case UNKNOWN_ERROR:
            QMessageBox::critical(nullptr, "Ошибка", "Неизвестная ошибка.");
            break;
    }
}
