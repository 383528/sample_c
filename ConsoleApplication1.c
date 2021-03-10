#include <stdio.h>
#include <math.h>

struct person{
    char *name;
    int age;
};

int main(){
    struct person matsumoto = {"matsumoto",30};
    struct person *p_matsumoto;

    p_matsumoto = &matsumoto;
    p_matsumoto->name = "komatsu";

    printf("%s\n",matsumoto.name);
    printf("%p\n",p_matsumoto);

    return 0;
}