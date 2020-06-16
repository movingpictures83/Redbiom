#ifndef REDBIOMPLUGIN_H
#define REDBIOMPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>

class RedbiomPlugin : public Plugin
{
public: 
 std::string toString() {return "Redbiom";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;

};

#endif
