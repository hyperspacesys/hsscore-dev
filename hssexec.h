/* hssexec.h*/
int hssexec(*char action, *char object)
{
    if (action == "run")
    {
        system(object);
    }
    //add more actions
}
