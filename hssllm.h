#include "hsscompile.h"
#include "hssinstall.h"
hssllm(char *object)
{
    system("echo 'Running LLM...'");
    system("ollama run llama3.2:latest %s", object)
}
