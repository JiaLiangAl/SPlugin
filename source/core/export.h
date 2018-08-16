#ifndef EXPORT_INCLUDE   
#define EXPORT_INCLUDE

#define PLUGINCORE_EXPORTS
#ifdef PLUGINCORE_EXPORTS         
    #ifdef __GNUC__  
            #define PLUGINCORE_API __attribute__((dllexport))  
        #else  
            #define PLUGINCORE_API __declspec(dllexport)  
    #endif  
    #else  
        #ifdef __GNUC__  
            #define PLUGINCORE_API __attribute__((dllimport))  
        #else  
            #define PLUGINCORE_API __declspec(dllimport)  
    #endif  
#endif  
  
//extern "C" PLUGINCORE_API PluginInstance *StartPlugin();  
  
//extern "C" PLUGINCORE_API void StopPlugin();  
#endif