#include <iostream>
#include "Header.h"
int main() {
    std::string unencrypted_text;
    int key = 0;
    std::cout << "Enter some string and key!" << std::endl;
    std::cin >> unencrypted_text >> key;
    std::cout << "Cesar cipher: "  << CesarEncryptor(unencrypted_text, key);
    return 0;
}

std::string CesarEncryptor(std::string text, int key) {
    for (char & i : text) {
        i += key;
    }
    return text;
}
