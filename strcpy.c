void strcpy(char* src, char* dst)
{
    memcpy(src, dst, strlen(src)+1);
}
void wstrcpy(char* src, char* dst)
{
    memcpy(src, dst, (wstrlen(src)+1)*2);
}
