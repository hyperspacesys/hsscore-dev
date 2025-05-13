#include "hsscompile.h"
hssinstall(char *object)
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
    // Check if the object is a valid package
    if (is_valid_package(object))
    {
        // Install the package
        system("echo 'Installing package...'");
        // Add installation logic here
        if (extpointer == "hss")
        {
            system("unzip %s -d %s", object, "./hss");
            if= (system("ls ./hss") == 0)
            {
                system("echo 'Package installed successfully.'");
            }
            else
            {
                system("echo 'Package installation failed.'");
            }
        }
        else if (extpointer == "c")
        {
            system("gcc -o %s %s", basepointer, object);
            system("echo 'Package installed successfully.'");
        }
        else if (extpointer == "cpp")
        {
            system("g++ -o %s %s", basepointer, object);
            if (system("ls ./hss") == 0)
            {
                system("echo 'Package installed successfully.'");
            }
            else
            {
                system("echo 'Package installation failed.'");
            }
        }
        else
        {
            {
                printf("Unsupported package type: %s\n", extpointer);
                return -1;`
            }
            system("echo 'Package installed successfully.'");
        }
    }
    else
    {
        printf("Invalid package: %s\n", object);
        return -1;
    }
    return 0;
}
// Function to check if the package is valid
int is_valid_package(char *object)
{
    // Add logic to check if the package is valid
    // For example, check if the package file exists
    FILE *file = fopen(object, "r");
    if (file)
    {
        fclose(file);
        return 1; // Package is valid
    }
    return 0; // Package is invalid
}
// Function to uninstall a package
hssuninstall(char *object)
{
    // Check if the object is a valid package
    if (is_valid_package(object))
    {
        // Uninstall the package
        system("echo 'Uninstalling package...'");
        // Add logic to uninstall the package
    }
    else
    {
        printf("Invalid package: %s\n", object);
        return -1;
    }
    return 0;
}
// Function to check if the package is valid
int is_valid_package(char *object)
{
    // Add logic to check if the package is valid
    // For example, check if the package file exists
    FILE *file = fopen(object, "r");
    if (file)
    {
        fclose(file);
        return 1; // Package is valid
    }
    return 0; // Package is invalid
}