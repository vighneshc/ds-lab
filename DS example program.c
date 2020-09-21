#include<stdio.h>
#define SIZE 100
    struct student
    {
    int id;
    int age;
    int marks;
    };
 
    
void accept_input(struct student s1)
{
  printf("enter the id");
  scanf("%d",&s1.id);
  printf("enter the age");
  scanf("%d",&s1.age);
  
  printf("enter the marks");
  scanf("%d",&s1.marks);
  
}

void display(struct student s1)
{
  printf("sudent details are:\n");
  printf("Student ID - %d\t",s1.id);
  printf("Student Age - %d\t",s1.age);
  printf("Student Marks - %d\n",s1.marks);
}

int main()
{
  struct student s[SIZE];
  int num,i;
  
  printf("Please enter no. of students");
  scanf("%d",&num);
 
  for(i=0;i<num;i++)
  {
     accept_input(s[i]);     
  }

for(i=0;i<num;i++)
  {
     display(s[i]);     
  }
  
  for(i=0;i<num;i++)
  {
      if((s[i].age>20) && (0<s[i].marks<=100))
          printf("data is valid\n");
  {
      if(s[i].marks>=65)
          printf("Student qualifies for admission\n");
      
  }
  }

  
  return 0;
  }
