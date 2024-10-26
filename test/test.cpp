#include <iostream>
#include "minimalistic_translation_system.h"

int main() {
    load_translation("en.txt");
    std::cout << translate("start") << "\n";

    load_translation("pt_BR.txt");
    std::cout << translate("start") << "\n";

    return 0;
}