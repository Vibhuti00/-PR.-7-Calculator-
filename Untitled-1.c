#include<stdio.h>
int Add(int num1, int num2){return num1 + num2;}
int Sub(int num1, int num2){return num1 - num2;}
int Mul(int num1, int num2){return num1 * num2;}
int Div(int num1, int num2){return num1 / num2;}
int Mod(int num1, int num2){return num1 % num2;}
int main()
{
    int choice;
    int num1,num2;
    for(int i=0; i<200; i++)
    {
        printf("\n Calculator menu");
        printf("\n Press 1 for +");
        printf("\n Press 2 for -");
        printf("\n Press 3 for *");
        printf("\n Press 4 for /");
        printf("\n Press 5 for %%");
        printf("\n Press 0 for exit");
        printf("\n Enter your choice:");
        scanf("%d", &choice);
        if(choice == 0)
        {
            printf("\n Exit");
            break;
        }
        else if (choice >=6 || choice < 0)
        {
            printf("choice is invalid");
            break;
        }
        printf("\n Enter First num:");
        scanf("%d", &num1);
        printf("\n Enter Second num:");
        scanf("%d", &num2);
        switch(choice)
        {
            case 1:
            printf("\n Addition of nums is: = %d", Add(num1,num2));
            break;
            case 2:
            printf("\n Subtraction of nums is: = %d", Sub(num1,num2));
            break;
            case 3:
            printf("\n Multiplication of nums is: = %d", Mul(num1,num2));
            break;
            case 4:
            printf("\n Divison of nums is: = %d", Div(num1,num2));
            break;
            case 5:
            printf("\n Percentage of nums is: = %d", Mod(num1,num2));
            break;
            default:
            printf("invalid choice");
        }
    }
    return 0;
}