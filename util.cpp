#include "util.h"

int util::byteArrToInt(QByteArray &ba, int index)
{
    int result = 0;
    int shift = 0;
    int end = index+4;
    if(end > ba.size()) end = ba.size();
    for(int i = index; i < end; i++)
    {
        result = result | ((unsigned char)ba[i] << (shift*8));
        shift++;
    }
    return result;
}
