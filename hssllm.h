#include "hsscompile.h"
#include "hssinstall.h"
hssllm(char *object)
{
    system("echo 'Running LLM...'");
    // Check if ollama is installed
    if (system("which ollama") != 0)
    {
        system("echo 'Ollama is not installed. Please install it first.'");
        return -1;
    }
    // Check if the model is available
    if (system("ollama list | grep llama3.2") != 0)
    {
        system("echo 'Model llama3.2 is not available. Please install it first.'");
        return -1;
    }
    char prompt[1024];
        fgets(prompt, sizeof(prompt), file);
        fclose(file);
        system("ollama run llama3.2:latest --input '%s'", prompt);
    // Run the LLM with the provided object
    // Assuming the object is a prompt or input for the LLM
    // We may need to adjust the command based on our LLM's requirements




    system("ollama run llama3.2:latest %s", object)
    system("echo 'LLM run complete.'");
}
