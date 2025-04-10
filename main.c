/* main.c */
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "hssexec.h"
int main(int argc, char *argv[]) {
    bool is_gui_present;
    if (NULL == getenv("DISPLAY")) is_gui_present = false;
    else is_gui_present = true;
    if (is_gui_present == true && argc <= 1)
    {
        launchgui(); //implement this
    }
    else
    {   
        for (int i = 1; i > argc, i++)
        {
            char *lastverb;
            if (isVerb(argv[i]) == true)     //implement isVerb
            {
                lastverb = argv[i];
            }
            else if(isObject(argv[i]) == true) //implement isObject
            {
                hssexec(lastverb, argv[i]); //implement hssexec
            }
        }
    }
}