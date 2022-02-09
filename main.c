#include <stdio.h>
#include <stdlib.h>
#include "string.h"
// C Program to store information (name, roll and marks) for a student using structure and display it. 
/*
int main()
{
    struct  student {
    char name[10];
    int roll;
    float marks;
    }s;
    printf("Enter your name ");
    scanf("%s",s.name);
    printf("Enter your roll ");
    scanf("%d",&s.roll);
    printf("Enter your marks ");
    scanf("%f",&s.marks);
    puts(s.name);
    printf("roll=%d\n",s.roll);
    printf("marks=%.1f",s.marks);
    return 0;
}
*/
// C Program to add two distances (inch-feet) using structure and display the result. 
/*
struct Distance
{
    int feet;
    float inch;
} d1, d2, sumOfDistances;

int main()
{
    printf("Enter information for 1st distance\n");
    printf("Enter feet: ");
    scanf("%d", &d1.feet);
    printf("Enter inch: ");
    scanf("%f", &d1.inch);

    printf("\nEnter information for 2nd distance\n");
    printf("Enter feet: ");
    scanf("%d", &d2.feet);
    printf("Enter inch: ");
    scanf("%f", &d2.inch);


    sumOfDistances.feet = d1.feet+d2.feet;
    sumOfDistances.inch = d1.inch+d2.inch;

    // If inch is greater than 12, changing it to feet.

    if (sumOfDistances.inch>12.0)
    {
        sumOfDistances.inch = sumOfDistances.inch-12.0;
        ++sumOfDistances.feet;
    }

    printf("\nsumofDistance=%d feet - %.f inch",sumOfDistances.feet,sumOfDistances.inch);
    return 0;
}
*/
// C function to add two complex numbers by passing two structure to a function and display the results. 
/*
typedef struct complex
{
    float real;
    float imag;
}s;
//prototype
s add(s ,s );
// int add(int ,int );
int main()
{
    s n1, n2, temp;

    printf("For 1st complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n1.real, &n1.imag);

    printf("\nFor 2nd complex number \n");
    printf("Enter real and imaginary part respectively:\n");
    scanf("%f %f", &n2.real, &n2.imag);

    temp = add(n1, n2);
    printf("Sum = %.1f + %.1fi", temp.real, temp.imag);

    return 0;
}

s add(s n1, s n2)
{
      s tempp;

      tempp.real = n1.real + n2.real;
      tempp.imag = n1.imag + n2.imag;

      return(tempp);
}
*/
// C Function to calculate the difference between two time periods using structures. 
/*
typedef struct time {
float sec;
int min;
int hours;
}s;
//*diff
s dif(s ,s);
int main()
{
s time1,time2,diff_time;
printf("Enter start time\n");
scanf("%d",&time1.hours);
scanf("%d",&time1.min);
scanf("%f",&time1.sec);
printf("Enter stop time\n");
scanf("%d",&time2.hours);
scanf("%d",&time2.min);
scanf("%f",&time2.sec);
diff_time=dif(time1,time2);
printf("hours=%d\t",diff_time.hours);
printf("min=%d\t",diff_time.min);
printf("sec=%.f",diff_time.sec);
}
s dif(s start ,s stop)
{
s n3;
if(start.sec > stop.sec){
        --stop.min;
        stop.sec += 60;
    }
if(start.min > stop.min){
        --stop.hours;
        stop.min += 60;
    }
n3.sec=stop.sec-start.sec;
n3.min=stop.min-start.min;
n3.hours=stop.hours-start.hours;
return n3;
}
*/
/*
typedef struct time {
float sec;
int min;
int hours;
}s;
void print_struct(s);
void dif(s ,s,s *);
int main()
{
s time1,time2,diff_time;
printf("Enter start time\n");
scanf("%d",&time1.hours);
scanf("%d",&time1.min);
scanf("%f",&time1.sec);
printf("Enter stop time\n");
scanf("%d",&time2.hours);
scanf("%d",&time2.min);
scanf("%f",&time2.sec);
dif(time1,time2,&diff_time);
printf("hours=%d\t",diff_time.hours);
printf("min=%d\t",diff_time.min);
printf("sec=%.f\n",diff_time.sec);
print_struct(time1);
}
void dif(s start ,s stop,s *ptr)
{
if(start.sec > stop.sec){
        --stop.min;
        stop.sec += 60;
    }
if(start.min > stop.min){
        --stop.hours;
        stop.min += 60;
    }
ptr->sec=stop.sec-start.sec;
ptr->min=stop.min-start.min;
ptr->hours=stop.hours-start.hours;
}
void print_struct(s print_time)
{
printf("%d\t",print_time.hours);
printf("%d\t",print_time.min);
printf("%.2f\t",print_time.sec);
}
*/
// C Function to store information (name, id and grade) for 10 students in array of structures using pointers and another function to print all the structures using pointers. 
/*
typedef  struct {
    char  name[10];
    int id;
    float grade;
    }s;
void fill_struct(s *,int);
void print(s *,int);
int main()
{
s arr[3];
fill_struct(arr,3);
print(arr,3);
}

void fill_struct(s *st_ptr,int size)
{
int i;
for (i=0;i<size;i++)
{
printf("Please Enter Name, Id and Grade for student number %d :",i+1);
scanf("%s %d %f",st_ptr->name,&(st_ptr->id),&(st_ptr->grade));
    st_ptr++;
}
}

void print(s *ptr,int size)
{
    int i;
    	for(i=0; i<size; i++)
	{
    printf("Student Number %d Information : \n",i+1);
		printf("Name : %s \n",ptr[i].name);
		printf("Id : %d \n",ptr[i].id);
		printf("Grade : %f \n",ptr[i].grade);

//  printf("Student Number %d Information : \n",i+1);
//  printf("%s\n",ptr->name);
//  printf("%d\n",ptr->id);
//  printf("%.2f\n",ptr->grade);
//   ptr++;

	}
}
*/
// Create Union type called family_name it shall have two members first_name and last_name. The two members are array of characters with same size 30. Try to write string in the first member first_name then print the second member last_name plus print the size of the union.  
/*
typedef union {
char first_name[30];
char second_name[30];
}s;
int main()
{
    s try ;
    strcpy(try.first_name,"ahmed");
    printf("%s\n",try.second_name);
    printf("size of union =%d",sizeof(s));
}
*/
// Create enum type called fan_level it shall have three values Level1, Level2 and Level3. This enum shall be used to control the level of the fan. 
/*
enum fan_level{
	Level1,
	Level2,
	Level3
}fan1;

int main()
{
   fan1 = Level1;

	printf("Level1 = %d\n",fan1);

	if(fan1 == Level1)
	{
		fan1 = Level2;
	}

	printf("Level2 = %d\n",fan1);

	if(fan1 == Level2)
	{
		fan1 = Level3;
	}

	printf("Level3 = %d\n",fan1);

	return 0;
}

 */
 
 
// C Program to compute sum of the array elements using pointers. 
/*
int main()
{
    int i,temp=0;
   int arr[10]={1,2,3,4,5,6,7,8,9,10};
   int *ptr=arr;
   for(i=0;i<10;i++)
   {
       temp+=ptr[i];
   }
   printf("the sum of array = %d",temp);
    return 0;
}
*/
// C Program to find length of a given string using pointer. 
/*
int main()
{
    int counter=0,i;
    char str[20]="ahmed helmy";
    char *ptr=str;
    for(i=0;ptr[i]!=NULL;i++)
    {
        counter++;
    }
    printf("the length = %d",counter);
}
*/
//C Program to read 10 integers into an array from user and print them in reversing order using pointers.  
/*

int main()
{
    int i,temp=0;
    int arr[10];
    for(i=0;i<10;i++)
    {
        printf("Enter your %dst number=",i);
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
       for(i=9;i>=0;i--)
    {
        printf("\n%d",ptr[i]);
    }
}
*/
// C function to get the value of the smallest element in array using pointers. 
/*
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,0};
    int i,temp=100,*ptr=arr;
    for(i=0;i<10;i++)
    {
        if(ptr[i]<temp)
            temp=ptr[i];
    }
    printf("the smallest element=%d",temp);
}
*/
// C function to copy all elements of an array into another array using pointers. The two arrays have the same length and types. 
/*
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10],i;
    int *ptr1=arr;
    int *ptr2=arr2;
    for(i=0;i<10;i++)
        ptr2[i]=ptr1[i];
      for(i=0;i<10;i++)
        printf("%d\t",arr2[i]);
}
*/
// C Program to print all the array elements and the maximum number in array using array of pointers. 
/*
int main()
{
int arr[10] = {10, 100, 200, -1, 1000, 500, 20, 60, -50, 26};
int *ptr[10],i;
int **ptr_max=ptr,temp=0;
for(i=0;i<10;i++)
{
ptr[i]=&arr[i];
}
for(i=0;i<10;i++)
{
if(*ptr_max[i]>temp)
temp=*ptr_max[i];
}
for(i=0;i<10;i++)
printf("%d\t",arr[i]);
printf("%d\n",temp);
}
*/
// C function to swap two numbers using bitwise operation and call it using pointer to function. 
/*
void swap(int *m,int *n)
{
    *m=*m^*n;
    *n=*m^*n;
    *m=*m^*n;
}
int main ()
{
    int x=10,y=15;
    void (*ptr)(int*,int*)=swap;
    (*ptr)(&x,&y);
    printf("x=%d\ty=%d",x,y);

}
*/
// Write a C function to swap the contents of two arrays with the same length using pointers. 
/*
void swap(int *ptr1,int *ptr2,int size)
{
    int i,temp=0;
    for(i=0;i<size;i++)
    {
       temp= ptr1[i];
       ptr1[i]=ptr2[i];
       ptr2[i]=temp;
    }
}
int main()
{
int arr1[10]={1,2,3,4,5,6,7,8,9,10};
int arr2[10]={11,12,13,14,15,16,17,18,19,20};
void (*p_1)(int *,int *,int)=swap;
 int i,temp=0;
 (*p_1)(arr1,arr2,10);
    for(i=0;i<10;i++)
    {
        printf("%d\t",arr1[i]);
    }
}
*/
// Given a string, create a new string made up of its last two letters, reversed and separated by a space, the word is “bat”. Return string contains ”t a” 
/*
char new_str[5];
char *make(char *ptr,char size)
{
    char i,x=0;
    for(i=0;i<size;i++)
    {
        if(ptr[i+1]=='\0')
        {
            new_str[x]=ptr[i];
            x++;
            new_str[x]=' ';
            x++;
            new_str[x]=ptr[i-1];
            x++;
            new_str[x]=NULL;
            return new_str;
        }
    }
}
int main(){
char str[10]="bat";
printf("%s\n",str);
printf("%s",make(str,10));
}
*/
//Write a c function two SWAP two pointers. Hint: use pointer to pointer as a function argument. 
/*
void swap_po(int **p1,int **p2)
{
    int temp=0;
    temp=**p1;
    **p1=**p2;
    **p2=temp;
}
int main ()
{
    int x=5,y=10;
    int *ptr1=&x,*ptr2=&y;
    swap_po(&ptr1,&ptr2);
    printf("%d\t%d",*ptr1,*ptr2);
}
*/
//Write a c program that SWAP the value of the two 16bits of 32-bits integer number. 
/*
int main(void)
{
	int num1 =  0xFFFFAAAA;
	int num2 = 0;

	//point to the first integer using pointer to short to access 2-bytes
	//short * ptr1 = (short *)&num1;
short * ptr1 =&num1;
	//point to the second integer using pointer to short to access 2-bytes
	//short * ptr2 = (short *)&num2;
short * ptr2 =&num2;
	// make the first 2-bytes in num2 equals to the second two bytes of num1

	//ptr2[0] = ptr1[1];
	// make the second 2-bytes in num2 equals to the first two bytes of num1
ptr1 ++;
*ptr2=*ptr1;
ptr1--;
ptr2++;
*ptr2=*ptr1;
	//ptr2[1] = ptr1[0];
	printf("The value after swapping %x",num2);
	return 0;
}
*/
// Array that contains integer values, some of these values are repeated with an even number of repetitions, and only one value is repeated with an odd number of repetitions. Write a C function that’s take the array as input and the array size and return the number which has odd numbers of repetitions. 
/*
int search_odd(int *ptr,int size)
{
    int i,j,counter=0;
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
           if(ptr[i]==ptr[j])
            counter++;
        }
        if(counter%2)
            return ptr[i];
        else
            counter=0;
    }
}
int main ()
{
    int x,arr[15]={2,1,1,2,3,3,4,6,8,9,7,1,3,1};
    x=search_odd(arr,15);
    printf("%d",x);
}

 */
// The sum of an array is the sum of its individual elements. For example, if an array is numbers = {1, 2, 3, 4}, the sum of the array is 1+2+3+4 = 10. Function Description: Complete the function summation. The function must return the integer sum of the numbers array.               int summation(int numbers_size, int* numbers) 
/*
#define size 5
int summation(int, int*);
int main()
{
    int arr[size]={1,2,3,4,5};
    printf("summation=%d",summation(size,arr));
    return 0;
}
int summation(int number,int *ptr)
{
    int x=0,i;
    for(i=0;i<number;i++){
    x=x+ptr[i];
    }
    return x;
}
*/
//Write a function which, given a string, return TRUE if all characters are distinct and FALSE if any character is repeated. 
/*
int compare(int,char*);
int main()
{
    char str[6]="ahmee";
    printf("%c",compare(6,str));
}
int compare(int y,char*ptr){
    int x=0,i=0,j;
while(i<y||ptr[i]!='\0'){
    x=ptr[i];
    for(j=i+1;j<y;j++){
    if(x==ptr[j])
    return 'r';
    else;
}
i++;
}
return 'd';
}
*/
//Write a C function that use the bubble sort algorithm to sort an integer array in ascending order (search for the bubble sorting algorithm). 
/*
void bubble_sort(int,int*);
int main()
{
    int i;
    int arr[8]={10,7,8,2,16,9,0,20};//7 8 2 10 9 0 16 20
    for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    bubble_sort(8,arr);
    printf("\n");
     for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
}
void bubble_sort(int size ,int *ptr)
{
    int temp=0,i,j;
    for (j=0;j<size-1;j++){
    for(i=0;i<size-1-j;i++){
            if(ptr[i]>ptr[i+1]){
            temp=ptr[i];
            ptr[i]=ptr[i+1];
            ptr[i+1]=temp;
        }
    }
    }
}
*/
// Write a C function that use the selection sort algorithm to sort an integer array in ascending order (search for the selection sorting algorithm). 
/*
void selection_sort(int,int*);
int main()
{
    int i;
    int arr[8]={10,7,8,2,16,9,30,20};//7 8 2 10 9 0 16 20
    for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
    selection_sort(8,arr);
    printf("\n");
     for(i=0;i<8;i++){
        printf("%d\t",arr[i]);
    }
}
void selection_sort(int size ,int *ptr)
{
    int temp=0,i,j;
    for(j=0;j<size-1;j++){
    for(i=j+1;i<size;i++){
            if(ptr[j]>ptr[i]){
            temp=ptr[i];
            ptr[i]=ptr[j];
            ptr[j]=temp;
        }
    }
    }
}
*/
// Write a C function to return the index of FIRST occurrence of a number in a given array. Array index start from 0. If the item is not in the list return -1. (Linear Search Algorithm) 
//Example: Array = {1,2,3,4,4,4}  The required number is 4 it should return 3 
/*
int linear_search(int,int*);
int main ()
{
    int i,x;
    int array [6]= {1,2,3,4,4,4} ;
    for(i=0;i<6;i++){
    printf("%d\t",array[i]);
    }
    printf("\n");
    linear_search(5,array);
        printf("%d",linear_search(5,array));
}
int linear_search(int size,int *ptr)
{
    int i,j,temp;
    for(j=0;j<size-1;j++){
        for(i=j+1;i<size;i++){
            if(ptr[j]==ptr[i])
                return j;
        }
    }
    return -1;
}
*/
//Write a C function to return the index of LAST occurrence of a number in a given array. Array index start from 0. If the item is not in the list return -1. (Linear Search Algorithm) Example: 
//Array = {1,2,3,4,4,4}  The required number is 4 it should return 5 
/*
int linear_search(int,int*);
int main ()
{
    int i,x;
    int array [6]= {1,2,3,4,4,4} ;
    for(i=0;i<6;i++){
    printf("%d\t",array[i]);
    }
    printf("\n");
    linear_search(6,array);
        printf("%d",linear_search(6,array));
}
int linear_search(int size,int *ptr)
{
    int i,j,t=-1,temp;
    for(j=0;j<size-1;j++){
        for(i=j+1;i<size;i++){
            if(ptr[j]==ptr[i])
                t=i;
        }
    }
    return t;
}
*/
//Write a program that computes the nth term of the arithmetic series: 1, 3, 5, 7, 9, … Run the program to compute the 100th term of the given series. 
/*
int main ()
{
    int arr[100],index,i;
    arr[0]=1;
    for(i=1;i<100;i++){
        arr[i]=arr[i-1]+2;
    }
    printf("Enter your index ");
    scanf("%d",&index);
    printf("the index of %d equal = %d",index,arr[index]);
}
*/
// Write a program that computes the nth term of the geometric series: 1, 3, 9, 27, … Run the program to compute the 10th term of the given series. 
/*
int main ()
{
    int arr[100],index,i;
    arr[0]=1;
    for(i=1;i<100;i++){
        arr[i]=arr[i-1]*3;
    }
    printf("Enter your index ");
    scanf("%d",&index);
    printf("the index of %d equal = %d",index,arr[index]);
}
*/
//The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called Fibonacci numbers; each is the sum of the preceding 2. Write a program which given n, returns the nth Fibonacci number. - with for/while - with recursion 
/*
int  Fibonacci(int n){
if (n==1||n==0)
    return n;
else
return Fibonacci(n-1)+ Fibonacci(n-2);
}
int main()
{
    printf("%d",Fibonacci(7));
}
*/
/*
int main()
{
    int arr[100],i;
    int num_index;
    printf("Please enter the element index : ");
    scanf("%d",&num_index);
    arr[0] = 1;
    arr[1] = 1;
    for(i=2;i<100;i++) // fill the 100 array elements
    {
    	arr[i]=arr[i-1] + arr[i-2]; // each element equals to the sum of the previous two elements
    }
    printf("\nThe %dth term is:%d",num_index,arr[num_index-1]);
    return 0;
}
*/
//Write a function which, given a string, converts all uppercase letters to lowercase, leaving the others unchanged. 
/*
int main()
{
   // char str[] ="ahmed";
   // char str[6] = {'a','h','m','e','d'};
   char str[10];
    fgets(str,10,stdin);
    strupr(str);
    printf("%s",str);
}
*/
// Write a function that prints the frequency of a certain character in a string. 
/*
int freq(char *ptr){
    int i=0,j=0;
while(ptr[i]!='\0'){
    j++;
    i++;
}
return j;
}
int main()
{
    char str[10];
    fgets(str,10,stdin);
    printf("%d",freq(str));
}
*/

/*
int freq(char *ptr,char target){
    int i,freqancy=0;
    for(i=0;ptr[i]!='\0';i++){
        if(target==ptr[i])
            freqancy++;
    }
    return freqancy;
}
int main()
{
    char str[10],x,i;
    printf("Enter your letter=");
    for(i=0;i<10;i++)
    scanf("%c",&str[i]);
    // scanf("%s",&str);
      //fgets(str,10,stdin);
      printf("Enter your char=");
    scanf(" %c",&x);
    printf("the frequancy of %c is %d",x,freq(str,x));

}
*/
// Write a function to find the length of a string. 
/*
int len(char *ptr)
{
    int i,count=0;
    for(i=0;ptr[i]!= NULL ;i++){
        count++;
    }
        return count;
}
int main()
{
    char str[10];
    fgets(str,10,stdin);
    printf("%d",len(str));
    //printf("%d",strlen(str));
}
*/
// Write a function to remove all characters in a string expect alphabet. 
/*
void clear_alf(char *ptr)
{
    int i=0,j;
    while(ptr[i]!='\0')
    {
        if((ptr[i]>='a')&& (ptr[i]<='z'))
        {
            for(j=i;ptr[j]!=NULL;j++)
            ptr[j]=ptr[j+1];
        i--;
        }
        i++;
    }
}
int main()
{
    char str[20];
    fgets(str,20,stdin);
     clear_alf(str);
    printf("%s",str);
}
*/
//Write a function to reverse a string by passing it to a function. 
/*
void rev(char *ptr)
{
    int i=0,j,temp=0;
    while(ptr[i]!='\0')
    {
        for(j=i+1;ptr[j]!=NULL;j++)
        {
             temp= ptr[i];
             ptr[i]=ptr[j];
             ptr[j]=temp;
        }
       i++;
    }
}
int main()
{
    char str[20];
    fgets(str,20,stdin);
     rev(str);
    printf("%s",str);
}
*/
//Write a function to concatenate two strings without using strcat function. 
/*
void strca(char *ptr1,char *ptr2)
{
    int i=0,j;
while(ptr1[i]!=NULL){
        if(ptr1[i+1]==NULL)
        {
            for (j=0; ptr2[j]!=NULL; j++,i++)
            {
                ptr1[i]=ptr2[j];
            }
            ptr1[i]=NULL;
        }
        i++;
}
}
int main()
{
    char str[10];
    char str2[10];
     fgets(str,20,stdin);
     fgets(str2,20,stdin);
     strca(str,str2);
    printf("%s",str);
}
*/
// Write a C function that takes an array as input and reverse it.  Example: Input : 1,2,3,4,5 Output: 5,4,3,2,1 
/*
void rev(char *ptr,int x)
{
    int i=0,j,temp=0;
    while(i<x)
    {
        for(j=i+1;ptr[j]<=x;j++)
        {
             temp= ptr[i];
             ptr[i]=ptr[j];
             ptr[j]=temp;
        }
       i++;
    }
}
int main()
{
    int i;
    char arr[20]={1,2,3,4,5,6,7,8,9,10};
     rev(arr,20);
     for(i=0;i<20;i++)
    printf("%d\t",arr[i]);
}
*/
// Write a C Program for swapping two arrays “A & B” with different lengths. B will be always the smallest array. 
//int * Swap (int a_size,int *a,int b_size,int *b) 
/*
void Swap (int a_size,int *ptr,int b_size,int *ptr2)
{
    int i,j,temp;
        for (i=0;i<b_size;i++){
             temp= ptr[i];
             ptr[i]=ptr2[i];
             ptr2[i]=temp;
        }

}
int main ()
{
    int i;
int    arr1[10]={1,2,3,4,5};
 int   arr2[5]={11,12,13,14,15};
    Swap(10,arr1,5,arr2);
    for(i=0;i<10;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\n");
            for(i=0;i<5;i++){
        printf("%d\t",arr2[i]);
            }
}
*/
// Write a C function that return the count of the longest consecutive occurrence of a given number in an array. Example: Array={1,2,2,3,3,3,3,4,4,4,4,3,3,3} and searching for 3  result = 4 
/*
int main()
{
        int i,j,target=0,counter=0,x=0,y=0;
int    arr[15]={1,2,2,3,3,3,3,4,4,4,4,3,3,3};
for (i=0;i<15;i++)
{
   target=arr[i];
   counter=1;
   for(j=i+1;j<15;j++)
   {
      if(target==arr[j])
      {
        counter ++;
      if(counter>x)
      {
          x=counter;
          y=target;
      }
      }
      else
        counter =0;
   }
}
 printf("The most accurance number is %d for %d times",y,x);
}
*/
//Write a C function that compare between 2 arrays with the same length. It shall return 0 if the two arrays are identical and 1 if not.  
/*
int search(int *ptr,int *ptr2,int size)
{
    int i;
    for(i=0;i<size;i++){
        if(ptr[i]!=ptr2[i])
        return 1;
}
return 0;
}
int main ()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int arr2[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d",search(arr,arr2,10));
}
*/
//Write a C function to return an array containing the values between two 8-bits unsigned integers IN DESCENDING ORDER EXCLUSIVE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between, and then arrange the sequence in descending order excluding the upper and lower values. If the LowerValue is greater than or equal the UpperValue, return an array of 2 elements, both containing value = 0xFF Example: Input: LowerValue=2 and UpperValue=5 Output: Output Array=4,3 Output Array Size=2 
/*
int arr[256]={0};
int *full_arr(int x,int y){
int i,j=0;
for(i=y-1;i>x;i--,j++)
{
arr[j]=(i);
}
return arr;
}
int main ()
{
 printf("Enter your two numbers=");
  int i,n1,n2;
  scanf("%d",&n1);
  scanf("%d",&n2);
  int *ptr=full_arr(n1,n2) ;
  for(i=0;ptr[i]!=0;i++){
  printf("%d\t",ptr[i]);
  }
  printf("\n%d",i);
}
*/
//Write a C function to return an array containing the values between two 8-bits unsigned integers IN DESCENDING ORDER INCLUSIZE. The function takes 2 values (LowerValue and UpperValue), it shall determine the values in between, and then arrange the sequence in descending order including the upper and lower values. If the LowerValue is greater than the UpperValue, return an array of 2 elements, both containing value = 0xFF 
//Example: Input: LowerValue=2 and UpperValue=5 Output: Output Array=5,4,3,2 Output Array Size=4 
/*
int arr[256]={0};
int *full_arr(int x,int y){
int i,j=0;
for(i=y;i>=x;i--,j++)
{
arr[j]=(i);
}
return arr;
}
int main ()
{
 printf("Enter your two numbers=");
  int i,n1,n2;
  scanf("%d",&n1);
  scanf("%d",&n2);
  int *ptr=full_arr(n1,n2) ;
  for(i=0;ptr[i]!=0;i++){
  printf("%d\t",ptr[i]);
  }
  printf("\n%d",i);
}
*/
/*
int removeDuplicates(int *ptr1,int old_size,int *ptr2,int *ptr_used)
{
    int i,j,target=0,k;
    for(i=0;i<old_size;i++)
    {
       target=ptr1[i];
       k=0;
        for(j=i+1;j<old_size;j++)
            {
            if(target==ptr1[j])
            {
            k++;
            }
            }
            if(k==0){
            ptr2[*ptr_used]=ptr1[i];
            ++ *ptr_used;
            }
}
if(old_size==0)
        return 1;
        else
        return 0;
}
int main ()
{
    int arr1[10] = {1,2,3,3,3,4,4,5,5,5};
    int arr2[10]={0};
    int used=0,i;
    removeDuplicates(arr1,10,arr2,&used);
    for(i=0;i<used;i++)
        {
        printf("%d\t",arr2[i]);
        }
        printf("\n%d",used);
}
*/

 
 
 
 
 
 
 


 
 

 

 

 
 
 
 
 
 
 
 

 
// Write a C Function that prints the cube of any number. 
/*
int main()
{
    int x;
    printf("Enter number=");
    scanf("%d",&x);
    printf("The cube of %d is %d",x,(x*x*x));
    return 0;
}
*/
// Write a C Function that takes one character and checks if it alphabet or not. 
/*
int scan(int);
int main ()
{
int x;
printf("Enter your character");
scanf("%c",&x);
scan(x);

}

int scan(int c)
{
  if ((c>=65)&&(c<=90))
  {
    printf("Alpha");
  }
  else
  {
    printf("Not Alpha");
  }
}
*/
// Write a C Function that check if the number if positive or negative. 
/*
  int scan(int);
int main ()
{
int x;
printf("Enter your number");
scanf("%d",&x);
scan(x);

}

int scan(int c)
{
  if (c>=0)
  {
    printf("Positive");
  }
  else
  {
    printf("Negative");
  }
}
*/
//Write a C Function that return the addition or subtraction or multiplication or division for two numbers. The function should take the required operation and two numbers as arguments. It also should check that the input operation is one of those operation that mentioned before and if not it should return error. The function should be implemented using switch case. 

/*
int main()
{
 char letter;
 int x,y;

 printf("Enter first num1=");
  scanf("%d",&x);
  printf("Enter your operation=");
  scanf(" %c",&letter);
 printf("Enter second num2=");
 scanf("%d",&y);
 switch(letter)
 {
          case  '+':
       printf("num1+num2=%d",x+y);
       break ;
          case  '-':
       printf("num1-num2=%d",x-y);
         break ;
          case  '*':
       printf("num1*num2=%d",x*y);
         break ;
          case  '/':
       printf("num1/num2=%d",x/y);
         break ;
          default :
            printf("error");
 }
    return 0;
}
*/
// Write a C function to check if the input is an even number or an odd number, if even number return 0 if odd number return 1. Example:  Input 7, Output = 1 (Odd) Input 6, Output = 0 (Even) 
/*
int main ()
{
    int x;
    printf("Enter your number ");
    scanf("%d",&x);
    if(x%2)
        printf("odd");
    else
        printf("even");
}
*/
// Write C Function that converts the any letter from lowercase to uppercase. 
/*
int main()
{
   int x;
   printf("Enter your letter ");
   scanf("%c",&x);
   if((x>='A')&&(x<='Z'))
    printf("%c",x);
   else
    printf("%c",(x-32));
}
*/
// Write a C Function that reads two integers and checks if the first is multiple of the second. 
/*
void multiply(int num1,int num2)
{
	if(num1%num2==0)
    {
        printf("\n%d is multiply of %d\n",num1,num2);
    }
    else
    {
        printf("\n%d is not multiply of %d\n",num1,num2);
    }
}
int main()
{
    int input1,input2;
    printf("Please enter the two numbers : ");
    scanf("%d %d",&input1,&input2);
    multiply(input1,input2);
    return 0;
}
*/
//Write a C Function that swaps the value of two integer numbers. 
/*
void swap(int *ptr,int *ptr_1){
int  temp=*ptr;
    *ptr=*ptr_1;
    *ptr_1=temp;
}
int main(){
int x=10,y=5;
swap(&x,&y);
//x++;
printf("x=%d y=%d",x,y);
}
*/
// You are designing a poster which prints out numbers with a unique style applied to each of them. The styling is based on the number of closed paths or holes present in a giver number. The number of holes that each of the digits from 0 to 9 have are equal to the number of closed paths in the digit. Their values are:  1, 2, 3, 5 and 7 = 0 holes.  0, 4, 6, and 9 = 1 hole.  8 = 2 holes. 
//Given a number, you must determine the sum of the number of holes for all of its digits. For example, the number 819 has 3 holes. 
//Function Description 
//Complete the function countHoles. The function must return an integer denoting the total number of holes in num. 
/*
int holes=0;
void devid(int y)
{
int *ptr=&holes;
while(y!=0){
int num =y%10;
if(num==0||num==4||num==6||num==9){
holes ++;
}
else if(num==8){
holes +=2;
}
y/=10;
}
}
int main()
{
int x=468662;
devid(x);
printf("Number of holes is=%d",holes);
}
*/
//Write a C function that returns 1 if the input number is a power of 2 and return 0 if the input number is power of 2. 
//For example: 0, 2 and 16 are power of 2.                         1, 10 and 30 are not power of 2. 
/*
int test(x){
if(x%2)
return 0;
return 1;
}
int main ()
{
    int num=3;
    printf("%d",test(num));
}
*/
// In this challenge write a function to add two floating numbers. Determine the integer floor of the sum. The floor is the truncated float value, anything after the decimal point is dropped. For instance floor(1.1+3.05)=floor(4.15)=4 
/*
int main(){
float x=3.5;
float y=1.1;
int z=x+y;
printf("%d",z);
}
*/
// Write a C Function that calculate the Fibonacci series using recursive method. The Fibonacci Series : 0,1,1,2,3,5,8,13,21,… 
/*
long fibonacci( long n )
{
	if ( n == 0 || n == 1 )
	{
		// base case
		return n;
	}
	else
	{ // recursive step
		return fibonacci( n - 1 ) + fibonacci( n - 2 );
	}
}
int main()
{
    int x;
printf("Enter your number=");
scanf("%d",&x);
printf("the Fibonacci of (%d)is=%d",x,fibonacci(x));
}
*/
// Write a C function to count the number of 1’s in an unsigned 32-bit integer. 
/*
int CountOnes(unsigned int Number)
{
	unsigned int mask=0x80000000;
	unsigned int i;
	int ones_count=0;

//  * start looping from index n-1 to 0 and check every bit
//  * if it is equals to one increment ones_count
// * if it is zero do nothing

	for(i=0;i<32;i++)
	{
		if((Number<<i) & mask)
		{
			++ones_count;
		}
	}
	return ones_count;
}

int main(void)
{
	unsigned int num1 = 0x00000FFF;
	int count;
	count = CountOnes(num1);
	printf("%d",count);
}
*/
// Write a C function to count the number of 1’s in an unsigned 8-bit integer. 
/*
int CountOnes(unsigned char Number)
{
	unsigned char mask=0x80;
	unsigned char i;
	int ones_count=0;

// start looping from index n-1 to 0 and check every bit
// if it is equals to one increment ones_count
// if it is zero do nothing

	for(i=0;i<8;i++)
	{
		if((Number<<i) & mask)
		{
			++ones_count;
		}
	}
	return ones_count;
}

int main(void)
{
	unsigned char num1 = 0b10011010;
	int count;
	count = CountOnes(num1);
	printf("%d",count);
}
*/
// Given two integers: L and R, Find the maximal value of A xor B where A and B satisfy the condition L =< A <= B <= R Constrains: 1 <= L <= R <= 1000 Input format:  the input contains two lines first line contains L and next line contains R. Output format: The maximum value of A xor B 
/*
int main ()
{
    int a,b,x=0,y=0,i=0,m=0;
    for(a=10;a!=15;a++){
        for(b=10;b!=15;b++){
            x=a^b;
            if(x>y){
                y=x;
                i=a;
                m=b;
            }
        }
    }
    printf("the max for %d ^ %d =%d",i,m,y);
        }
*/



 


// Write a program that reads a positive integer and checks if it is a perfect square. 
/*
int main ()
{
    unsigned int x,y;
    printf("Enter your value ");
    scanf("%d",&x);
    y=sqrt(x);
    if (x==(y*y))
    printf("Perfect Cube");
    else
    printf("Not Perfect Cube");
}
*/
// Write a program that reads a student grade percentage and prints "Excellent" if his grade is greater than or equal 85, "Very Good" for 75 or greater; "Good" for 65, "Pass" for 50, "Fail" for less than 50. 
/*
int main ()
{
    int x;
    printf("Enter your grade=");
    scanf("%d",&x);
    if(x>=85)
        printf("Excellent");
    else if (x>=75 && x<85)
        printf("Very Good");
    else if (x>=65 && x<75)
        printf("Good");
        else
            printf("Fail");
}
*/
// Write a program to make a simple calculator using switch-case. The calculator takes the operation  (+ or – or * or /) and takes the two input arguments and print the results. 
/*
int main()
{
    int x,y,z;
    printf("Enter values then operation ");
    scanf("%d%d %c",&x,&y,&z);
    switch (z)
    {
    case '*':
    printf("%d*%d=%d",x,y,x*y);
    break;
    case '/':
    printf("%d/%d=%d",x,y,x/y);
    break;
    case '-':
    printf("%d-%d=%d",x,y,x-y);
    break;
    case '+':
    printf("%d+%d=%d",x,y,x+y);
    break;
    default :
        ;
    }
}
*/
//Print sum of first 100 integers. (With data validation) 
/*
int main()
{
    int x=0,y;
    for (y=0; y<100; y++)
    {
    printf("%d ",y);
    x=x+y;
    }
    printf("The sum is=%d",x);
}
*/
// Write a program that reads a positive integer and computes the factorial. 
/*
int main ()
{
int x,y=1;
printf("Enter your number=");
scanf("%d",&x);
int i=x;
while (i!=0)
{
    y=y*i;
    i--;
}
printf("The fact! for %d =%d",x,y);
}
*/
//Write a program that reads a positive integer and checks if it is a prime. 
/*
int main ()
{
    int x,y;
    scanf("%d",&x);
    if ((x%2)&&(x%3))
        printf("Prime");
    else if (x==2||x==3)
        printf("Prime");
    else
        printf("Not Prime ");
}
*/
//Write a program to display English alphabets from A to Z. 
/*
int main ()
{
    int x;
    for(x='A'; x<='Z';x++)
        printf("%c ",x);
}
*/
//Write a program to calculate the power of a number. The number and its power are input from user. 
/*
int main ()
{
    int x,y,z;
    printf("Enter your number=");
    scanf("%d",&x);
    int p=x;
    printf("Enter your power=");
    scanf("%d",&y);
    for(z=y-1;z!=0;z--)
        x=x*p;
        printf("The power of %d for %d is %d",y,p,x);
}
*/
//Write a program to reverse a number. 
/*
int main()
{
    int num, reversedNumber = 0, remainder; //notice that num is int not float
    printf("Enter an integer: ");
    scanf("%d", &num);
    while(num != 0)
    {
		//Get the first digit from the right
        remainder = num%10;
		//in the reversedNumber(result number) multiply the old value by 10 to added ZERO to the right
		   //then added the new digit(remainder) to the right
        reversedNumber = reversedNumber*10 + remainder;
		// Divide number by 10 to get the next digit to right before the next loop iteration
        num /= 10;
    }
    printf("Reversed Number = %d\n", reversedNumber);
    //printf("%d",1%10);
    return 0;
}
*/
/*
test for me 1
int main ()
{
    int num1=876,num2=543,new_num2=0,x,y,reverse=0,counter=0;
    while (num1!=0){
        x=num1%10;
        y=num2%10;
        while (x>y){
        counter++;
        y++;
        }
        while(x<y){
        counter++;
        y--;
        }
        reverse=reverse*10+y;
        num1/=10;
        num2/=10;
    }
    while(reverse!=0){
    x=reverse%10;
    new_num2=new_num2*10+x;
    reverse/=10;
    }
    printf("NEW=%d STEPS=%d",new_num2,counter);

}
*/
/*
test for me 2
int main(){
int num=5464845,counter=0,x;
while (num!=0){
    x=num%10;
    if(x==8||x==4)
        counter+=2;
    else if (x==6)
        counter++;
    else ;
    num/=10;
}
printf("%d",counter);
}
*/
// Write a program to count number of digits in a decimal number. 
/*
int main()
{
    int num,x,y=0;
    printf("Enter your number");
    scanf("%d",&num);
    while (num!=0){
        x=num%10;
        num=num/10;
        y++;
    }
    printf("the number of digits is =%d",y);
}
*/
// Write a program to display half pyramid using stars pattern. 
/*
int main ()
{
    int i,z;
    for(i=10;i!=0;i--){
        for(z=11-i; z!=0; z--)
            {
            printf("*");
        }
        printf("\n");
    }
}
*/
// Write a program to display inverted half pyramid using stars pattern. 
/*
int main ()
{
    int i,z;
    for(i=10; i!=0; i--)
    {
for (z=i; z!=0; z--){
    printf("*");
    }
printf("\n");

    }
}
*/










