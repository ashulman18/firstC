#include <stdio.h>
#include <stdlib.h>

void printAddr(int arg1, int arg2){
    printf("Numbers: 0x%x, 0x%x\n",arg1,arg2);
    return;
}

struct doge_t{
    int color;
    int age;
    char *name;
};

void dogger(struct doge_t *doge)
{
    doge->age=3;
}

int main(int argc, char **argv) {
    /*void *region = malloc(1);
    void *region2 = malloc(1);
    printAddr(&region, &region2);
    free(region);
    free(region2);
    region=malloc(1);
    region2=malloc(1);
    printAddr(&region, &region2);*/
    
    struct doge_t dog;
    dog.color=1;
    dog.age=4;
    printAddr(&dog.age, &dog);
    dogger(&dog);
    printf("%d \n", dog.age);
    return 0;
}