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
        hsscompile(object); //need to implement hsscompile.h
    }
    //add more actions
}
