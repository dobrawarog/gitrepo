/*
 * ana5.cpp
 */


#include <stdio.h>
#include <string.h>
void main(void)
{
    int i;
    char zdanie[100];
    get(zdanie);
    put(zdanie);

    for(i=0;i<100;++i)
    {
        if (zdanie[i]>='A'&&zdanie[i]<='Z')
        {
            zdanie[i]=zdanie[i]+32;

        }
        else if(zdanie[i]>='a'&&zdanie[i]<='z')
        {
            zdanie[i]=zdanie[i]-32;
        }
    }
     put(zdanie);

}
