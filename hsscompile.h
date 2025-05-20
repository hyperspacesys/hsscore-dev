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
        system("as -o %s %s", basepointer, filename);
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
        if (system("which python3") != 0)
        {
            system("echo 'python3 is not installed. Please install it first.'");
            return -1;
        }
        system("echo 'Running Python script...'");
        system("python3 %s", filename);
        return 0;
    }
    else if (extpointer == "java")
    {
        system("javac %s", filename);
        
        if (system("which javac") != 0)
        {
            system("echo 'javac is not installed. Please install it first.'");
            return -1;
        }
        system("echo 'Running Java script...'");
        char *className = strtok(filename, "."); // Extract class name from filename
        if (className != NULL)
        {
            system("java %s", className);
        }
        else
        {
            system("echo 'Error: Unable to extract class name from filename.'");
            return -1;
        }
        // Check if the class file was created successfully
        if (system("ls %s.class", className) == 0)
        {
            system("java %s", className);
        }
        else
        {
            system("echo 'Error: Class file not found. Compilation may have failed.'");
            return -1;
        }
        // Clean up the class file after execution
        if (system("rm %s.class", className) != 0)
        {
            system("echo 'Error: Unable to remove class file.'");
            return -1;
        }
        else
        {
            system("echo 'Class file removed successfully.'");
        }
    }
    else if (extpointer == "go")
    {
        if (system("which go") != 0)
        {
            system("echo 'go is not installed. Please install it first.'");
            return -1;
        }
            system("echo 'Running Go script...'");
            system("go run %s", filename);
        return 0;
    }
    else if (extpointer == "php")
    {   
        if (system("which php") != 0)
        {
            system("echo 'php is not installed. Please install it first.'");
            return -1;
        }
        system(echo "'Running PHP script...'");
        system("php %s", filename);
        return 0;
    }
    else if (extpointer == "js")
    {   
        if (system("which node") != 0)
        {
            system("echo 'node is not installed. Please install it first.'");
            return -1;
        }
        system("echo 'Running JavaScript script...'");
        system("node %s", filename);
        return 0;
    }
    else if (extpointer == "rb")
    {   
        if system("which ruby") != 0)
        {
            system("echo 'ruby is not installed. Please install it first.'");
            return -1;
        }
        system("echo 'Running Ruby script...'");
        system("ruby %s", filename);
        return 0;
    }
    else
    {
        printf("Error: Unsupported file extension\n");
        return -1;
    }
}}
}