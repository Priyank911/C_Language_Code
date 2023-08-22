#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    int hh, mm, ss, HH, MM, SS;
    char T, M;
    scanf("%d:%d:%d%c%c", &hh, &mm, &ss, &T, &M);

    if(T=='P')
        {
        if(hh==12)
            {
            printf("12:%.2d:%.2d\n", mm, ss);
        }
        else
            {
            printf("%.2d:%.2d:%.2d\n", hh + 12, mm, ss);
        }
        
    }
    else if(T=='A')
        {
        if(hh==12)
            {
            printf("00:%.2d:%.2d\n", mm, ss);    
        }
        else{
        printf("%.2d:%.2d:%.2d\n", hh, mm, ss);
        }
    }
}

