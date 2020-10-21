typedef unsigned int length;
length strlen(char* str)
{
    length l = 0;
    while (*str!=0)
    {
        l++;
        str++;
    }
    return l;
}
length wstrlen(wchar_t* str)
{
    length l = 0;
    while (*str!=0)
    {
        l++;
        str+=2;
    }
    return l;
}
