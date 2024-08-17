#include <stdio.h>
int main(){
    int number = 12;
    printf("%d\n\n", number);

    char char1 = 'c', char2 = 'd';
    printf("%c\n\n",char1);

    char array[] = "array", array2[] = "array2";
    printf("%s %s\n\n",array,array2);

    char numc = 100;
    printf("%c\n\n",numc);

    unsigned char g = 255;
    printf("%u\n\n",g);

    short int h = 32767; // 2bytes overflow happens when this (-32,768 to +32,767) is passed, and the minimum value is returned instead.
    printf("%d\n\n", h);

    unsigned short int i = 65535; // 2bytes (0 to +65,535)
    printf("%d\n\n",i);

    unsigned int k = 4000000000;
    printf("%u\n\n",k);

    long long int longo = 9223372036854775807;
    unsigned long long int muitolongo = 2; //to +18 quintillion
}