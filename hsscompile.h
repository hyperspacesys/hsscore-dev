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
    }
    char *basepointer = &base;
    char *extpointer = &ext;
    if (extpointer == "c")
    {
        //compile .c
        //call compile function
        system("gcc -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "asm")
    {
        //compile to .asm
        //call compile function
        system("as -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "cpp")
    {
        //compile .cpp
        //call compile function
        system("g++ -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "h")
    {
        //compile .h
        //call compile function
        system("gcc -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "hss")
    {
        //compile .hss
        //call compile function
        system("gcc -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "hssasm")
    {
        //compile .hssasm
        //call compile function
        system("gcc -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "hsscpp")
    {
        //compile .hsscpp
        //call compile function
        system("g++ -o %s %s", basepointer, filename);
        return 0;
    }
    else if (extpointer == "py")
    {
        system("python3 %s", filename);
        return 0;
    }
    else if (extpointer == "js")
    {
        system("node %s", filename);
        return 0;
    }
    else if (extpointer == "java")
    {
        system("javac %s", filename);
        return 0;
    }
    
    else if (extpointer == "sh")
    {
        system("bash %s", filename);
        return 0;
    }
    else if (extpointer == "swift")
    {
        system("swift %s", filename);
        return 0;
    }
    else
    {
        printf("Error: Unsupported file extension\n");
        return -1;
    }
}}
}