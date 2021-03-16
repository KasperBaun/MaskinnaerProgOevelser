#include <stdio.h>

int main(void)
{

    for (int i=48; i<127;){
        printf("%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\t%c\n",i,i+1,i+2,i+3,i+4,i+5,i+6,i+7,i+8,i+9);
        i=i+10;
    }
}