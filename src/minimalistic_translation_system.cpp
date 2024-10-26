#include <iostream>
#include <fstream>
#include <string>
#include <map>

std::map<std::string, std::string> translation;

void load_translation(std::string path)
{
    translation = {};
    std::ifstream MyReadFile(path);

    std::string line;

    std::string tag;
    std::string text;

    while (getline(MyReadFile, line))
    {

        if (line[0] == '#')
        {

            if (text.size() > 0)
            {
                text.pop_back();
            }
            translation.insert(std::pair<std::string, std::string>(tag, text));

            line.erase(line.begin());
            tag = line;
            text = "";
        }
        else
        {
            text += line += '\n';
        }
    }

    if (text.size() > 0)
    {
        text.pop_back();
    }

    translation.insert(std::pair<std::string, std::string>(tag, text));

    MyReadFile.close();
}

std::string translate(std::string tag)
{
    if (translation.find(tag) != translation.end())
    {
        return translation[tag];
    }
    return "";
}