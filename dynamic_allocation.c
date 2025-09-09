#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int age;
    char *name;
}person;

 
int main(){
   //  person *myPerson = 
   person * myperson =  malloc(sizeof(person));
   myperson->name = "lahcen";
   myperson->age = 25;
   printf("name: %s\n",myperson->name); 
   printf("age: %d\n",myperson->age); 
   free(myperson);// this will free the myperson struct from memory.
   // line below will drop exception
   printf("name: %s\n",myperson->name); 
   printf("age: %d\n",myperson->age); 
    return 0;
} 



