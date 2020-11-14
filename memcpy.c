typedef unsigned int size;
typedef char* memptr;
void memcpy(memptr src, memptr dst, size length)
{
    for (size i = 0; i < length; i++)
    {
        *(dst+i) = *(src+i);
    }
}
