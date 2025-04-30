/* hssexec.h*/
#include "hsscompile.h"
int hssexec(*char action, *char object)
{
    if (action == "run")
    {
        system(object);
    }
    else if (action == "compile")
    {
        hsscompile(object);
    }
    else if (action == "install")
    {
        hssinstall(object);
    }
    else if (action == "uninstall")
    {
        hssuninstall(object);
    }
    else if (action == "LLM")
    {
        hssllm(object); //need to implement hssllm.h
    }
    else if (action == "test")
    {
        system("echo 'Testing...'");
    }
    else
    {
        printf("Unknown action: %s\n", action);
        return -1;
    }
    return 0;
    //add more actions
}
