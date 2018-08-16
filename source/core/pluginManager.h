#ifndef PLUGINMANAGER_INCLUDE   
#define PLUGINMANAGER_INCLUDE  
  
#include "export.h" 
#include "pluginInstance.h"
#include "dynamicLib.h" 
#include <vector>
#include <map>
class PluginInstance;  
class DynamicLib;  
  
class PLUGINCORE_API PluginManager  
{  
public:  
    static PluginManager &GetInstance();  
  
    PluginInstance* Load(const std::string &strName,int &errCode);  
  
    bool UnLoadAll();  
  
    bool UnLoad(const std::string &strName);  
  
    bool UnLoadPlugin(PluginInstance *pPlugin);  
  
    std::vector<PluginInstance *> GetAllPlugins();  
  
private:  
    PluginManager(void);  
    ~PluginManager(void);  
    PluginManager(const PluginManager &rhs);  
    const PluginManager &operator=(const PluginManager &rhs);  
  
    std::vector<PluginInstance *> m_vecPlugins;   //插件实例句柄  
    std::map<std::string,DynamicLib *> m_vecPluginLibs;   //插件模块句柄  
};  
  
#endif 