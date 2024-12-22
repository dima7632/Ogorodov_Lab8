#include <iostream>

char* copyString(const char* source) {
    int length = 0;
    while (source[length] != '\0') {
        length++;
    }

    char* destination = new char[length + 1];

    for (int i = 0; i <= length; ++i) {
        destination[i] = source[i];
    }

    return destination;
}

int main() {
    char inputString[100];

    std::cout << "Введіть рядок: ";
    std::cin.getline(inputString, 100);

    char* newString = copyString(inputString);

    std::cout << "Скопійований рядок: " << newString << std::endl;

    delete[] newString;

    return 0;
}
