#include<stdio.h>
#include<stdlib.h>
typedef struct{
    char name[15];
    long long int enroll;
}student;
void quicksort(long array[],int start,int end)
{
    if(end<=start)
return;
int pivot=partition(array,start,end);
quicksort(array,start,pivot-1);
quicksort(array,pivot+1,end);
}
int partition(long long int array[],int start,int end)
{
    int pivot=array[end];
    int i=start-1;
    for(int j=start;j<=end;j++){
        if(array[j]<pivot){
            i++;
long long int temp=array[i];
array[i]=array[j];
array[j]=temp;
        }
    }
        i++;
        long long int temp=array[i];
        array[i]=array[end];
        array[end]=temp;
        return i;
}
int main(){
int n;student *array;
printf("enter the number of students \n");
scanf("%d",&n);
array=(student*)malloc(n*sizeof(student));

for(int i=0;i<n;i++)
{
    printf("enter the name of the student \n");
    scanf("%c",array[i].name);
    printf("enter the enrollment number of the student \n");
    scanf("%lld",&array[i].enroll);
    
}
quicksort(array[n].enroll,0,n-1);

for(int j=0;j<n;j++){
printf("student name is %c and enrollment ID is %lld",array[j].name,array[j].enroll);
}
return 0;
}