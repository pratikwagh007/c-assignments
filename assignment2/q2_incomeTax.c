#include<stdio.h>
int men_below60(int);
int women_below60(int);
int sen_citizen_below80(int);
int sen_citizen_above80(int);

int main(){
    int income=320006,age=23;
    char gender='f';

    //printf(Enter your age,gender and income);
    //scanf("%d %c %d",&age,&gender,&income);

    if(gender=='m' && age<60)
        men_below60(income);
    else if(gender=='f' && age<60)
        women_below60(income);
    else if(age>=60 && age<80)
        sen_citizen_below80(income);
    else if(age>=80)
        sen_citizen_above80(income);
}

int men_below60(int income)
{       
        int tax;
        if (income<=250000){
            printf("Tax=Nil");
        }
        else if(income>=250001 && income<=500000){
            tax=0.05*income;
            printf("Tax is %d",tax);
        }
        else if(income>=500001 && income<=1000000){
            tax=0.2*income;
            printf("Tax is %d",tax);
        }
        else{
            tax=0.3*income;
            printf("Tax is %d",tax);
        }
}

int women_below60(int income)
{
        int tax;
        if (income<=250000){
            printf("Tax=Nil");
        }
        else if(income>=250001 && income<=500000){
            tax=0.05*income;
            printf("Tax is %d",tax);
        }
        else if(income>=500001 && income<=1000000){
            tax=0.2*income;
            printf("Tax is %d",tax);
        }
        else{
            tax=0.3*income;
            printf("Tax is %d",tax);
        }
}

int sen_citizen_below80(int income)
{
        int tax;
        if (income<=300000){
            printf("Tax=Nil");
        }
        else if(income>=300001 && income<=500000){
            tax=0.05*income;
            printf("Tax is %d",tax);
        }
        else if(income>=500001 && income<=1000000){
            tax=0.2*income;
            printf("Tax is %d",tax);
        }
        else{   
            tax=0.3*income;
            printf("Tax is %d",tax);
        }
}

int sen_citizen_above80(int income)
{
        int tax;
        if (income<=500000){
            printf("Tax=Nil");
        }
        else if(income>=500001 && income<=1000000){
            tax=0.2*income;
            printf("Tax is %d",tax);
        }
        else{
            tax=0.3*income;
            printf("Tax is %d",tax);
        }
}