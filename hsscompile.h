#include <string.h>
#include <stdbool.h>
int hsscompile(char *filename)
{
    bool dotflag = false;
    char base[64]; //base filename
    char ext[16]; //file extension
    int baseIndex = 0;
    int extIndex = 0;
    for (int i = 0; i < strlen(filename); i++)
    {
        if (filename[i] == '.') //check for file dot
        {
            flag = true;
        }
        else if (flag == false)
        {
            base[baseIndex] = filename[i];
            baseIndex++;
        }
        else if(flag == true)
        {
            ext[extIndex] = filename[i];
            extIndex++;
        }
        char *basepointer = &base;
        char *extpointer = &ext;
        if (extpointer == "c")
        {
            //run C compiler here
        }
    }
}