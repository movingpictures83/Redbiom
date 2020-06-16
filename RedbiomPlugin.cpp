#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "RedbiomPlugin.h"

void replaceAll(std::string& str, const std::string& from, const std::string& to) {
    if(from.empty())
        return;
    size_t start_pos = 0;
    while((start_pos = str.find(from, start_pos)) != std::string::npos) {
        str.replace(start_pos, from.length(), to);
        start_pos += to.length();
    }
}

void RedbiomPlugin::input(std::string file) {
 inputfile = file;
}

void RedbiomPlugin::run() {
  std::ifstream infile(inputfile, std::ios::in);
  std::string command;
  while (!infile.eof()) {
     getline(infile, command);
     replaceAll(command, "fetch", "redbiom fetch");
     replaceAll(command, "search", "redbiom search");
     replaceAll(command, "select", "redbiom select");
     replaceAll(command, "summarize", "redbiom summarize");
     std::cout << command << std::endl;
     system(command.c_str());
  }
}

void RedbiomPlugin::output(std::string file) {
}

PluginProxy<RedbiomPlugin> RedbiomPluginProxy = PluginProxy<RedbiomPlugin>("Redbiom", PluginManager::getInstance());
