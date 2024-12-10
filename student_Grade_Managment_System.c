
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX_STUDENTS 25
int main(){
    char *studentName[MAX_STUDENTS]; 
    float studentGrades[MAX_STUDENTS];
    bool isEnetred= false;
    while(true){
        printf("1_Add student names and grades\n");
        printf("2_Display all students and thier grades\n");
        printf("3_Find a student by name\n");
        printf("4_Calculate the avarage grade\n");
        printf("5_Exit\n");
        printf("Enter your option number 1-2-3-4-5\n");
        int option;
        scanf("%d",&option);
        switch (option){
            case 1: 
                if(isEnetred){
                    printf("Data already entered\n");
                }
                else{
                    for(int i=0;i<=24;i++){
                        printf("Enter name for student %d \n", i+1);
                        scanf("%s", studentName[i]);
                        do{
                            printf("Enter grade (0-20) for student %d \n", i+1);
                            scanf("%d", studentGrades[i]);
                        }while( studentGrades[i]<0 || studentGrades[i]>20);
                        isEnetred=true;
                    }
                }
             break;
            case 2:
                if(!isEnetred){
                    printf("Data  not entered yet\n");
                }
                else{
                   for(int i=0;i<MAX_STUDENTS;i++){
                    printf("The Name is %s, the grade is %d", studentName[i], studentGrades[i]);
                   } 
                }
            break;
            case 3:
                if(!isEnetred){
                    printf("Data  not entered yet\n");
                }
                else{
                    printf("Enter the name to search\n");
                    char NameSearch;
                    scanf("%s",&NameSearch);
                    bool found=false;
                   for(int i=0;i<MAX_STUDENTS;i++){
                    
                    if(strcmp(NameSearch, studentName[i]) == 0)
                    printf("The Name is %s, the grade is %d", studentName[i], studentGrades[i]);
                    found= true;
                    break;
                   }
                   if(found=false){
                    printf("Student not found\n");
                   } 
                }
             break;
            case 4:
                if(!isEnetred){
                    printf("Data  not entered yet\n");
                }
                else{
                    int sum=0;
                   for(int i=0;i<MAX_STUDENTS;i++){
                    sum=sum +studentGrades[i];
                    sum=sum/25; 
                    printf("Average grade is %d\n", sum);
                }
            }
         break;
        case 5:
            printf("Goodbye!\n");
         break;
        default: printf("Invalid choice. Please try again.\n");
        
        }
}
}