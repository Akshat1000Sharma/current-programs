#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct myArray
{
    int total_size;
    int used_size;
    int*ptr;
};
void createArray(struct myArray*a,int tsize,int usize){
    (*a).total_size=tsize;
    (*a).used_size=usize;
    a->ptr=(int*)malloc(tsize*sizeof(int));
}
void show(struct myArray *a){
    printf("The elements of array are:\n");
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n",(a->ptr)[i]);
    }
}
    
void setvalue(struct myArray *a){
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter the %d element of array:\n",i+1);
        scanf("%d\n",&n);
        (a->ptr)[i]=n;
    }
} 
void indexInsertion(struct myArray *a,int index,int number){

}

int main()
{
struct myArray marks;
createArray(&marks,10,2);
show(&marks);
setvalue(&marks);
show(&marks);
indexInsertion(&marks,4,70);

return 0;
}