#pragma once
#include "minimalistic_translation_system.cpp"
#include <fstream>
#include <string>

void load_translation(std::string path);

std::string translate(std::string tag);