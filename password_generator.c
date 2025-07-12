// Mini Project : Password and Pincode generator.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void gpassword_6(void);
void gpassword_5(void);
void gpassword_4(void);
void gpassword_3(void);
void gpassword_2(void);
void gpassword_1(void);

void gpincode_6(void);
void gpincode_5(void);
void gpincode_4(void);

int main()
{
    printf("\n\t\t\t\t\t PASSWORD GENERATOR APP\t\t\t\t\t\n");
    printf("Welcome to Password generator app\n");
    printf("This app will create a unique Passwords and Pincodes for you\n\n");
    while (1)
    {
        printf("1 = Password\n");
        printf("2 = Pincode\n");
        printf("0 = exit the app\n");
        int choice;
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nPASSWORD MENU\n");
            printf("Lower case: a - z\n");
            printf("Upper case: A - Z\n");
            printf("Digits: 0 - 9\n");
            printf("Special Characters: All\n");
            printf("Length of password that can be generated is from 1 to 6.");
            int length;
        a:
        {
            printf("\nEnter the length for your password: ");
            scanf("%d", &length);
        }
            if (length > 6 || length < 1)
            {
                printf("\nEntered length is invalid!!\n");
                goto a;
            }
            if (length == 6)
            {
                gpassword_6();
            }
            else if (length == 5)
            {
                gpassword_5();
            }
            else if (length == 4)
            {
                gpassword_4();
            }
            else if (length == 3)
            {
                gpassword_3();
            }
            else if (length == 2)
            {
                gpassword_2();
            }
            else if (length == 1)
            {
                gpassword_1();
            }
            break;

        case 2:
            printf("\nPINCODE MENU\n");
            printf("Digits: 0 - 9\n");
            printf("Length of pincode that can be generated is from 4 to 6.");
            int length1;
        a1:
        {
            printf("\nEnter the length for your pincode: ");
            scanf("%d", &length1);
        }
            if (length1 > 6 || length1 < 4)
            {
                printf("\nEntered length is invalid!!\n");
                goto a1;
            }
            if (length1 == 6)
            {
                gpincode_6();
            }
            else if (length1 == 5)
            {
                gpincode_5();
            }
            else if (length1 == 4)
            {
                gpincode_4();
            }
            break;

        case 0:
            printf("\n MINI PROJECT DONE BY: \n");
            printf("\n 24DCS039_Diya Kapadia");
            printf("\n 24DCS049_Jalisa Malik");
            printf("\n 24DCS036_Yatri Joshi");
            return 0;

        default:
            printf("\n\nEntered choice is invalid!!\n\n");
            break;
        }
    }
}

// User-defined functions for passwords.

void gpassword_6()
{
    srand(time(0));
    printf("\n\nGenerated Password: ");
    char x1 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x1);
    char x2 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x2);
    char x3 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x3);
    char x4 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x4);
    char x5 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x5);
    char x6 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c\n\n", x6);
}

void gpassword_5()
{
    srand(time(0));
    printf("\n\nGenerated Password: ");
    char x1 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x1);
    char x2 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x2);
    char x3 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x3);
    char x4 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x4);
    char x5 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c\n\n", x5);
}

void gpassword_4()
{
    srand(time(0));
    printf("\n\nGenerated Password: ");
    char x1 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x1);
    char x2 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x2);
    char x3 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x3);
    char x4 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c\n\n", x4);
}

void gpassword_3()
{
    srand(time(0));
    printf("\n\nGenerated Password: ");
    char x1 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x1);
    char x2 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x2);
    char x3 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c\n\n", x3);
}

void gpassword_2()
{
    srand(time(0));
    printf("\n\nGenerated Password: ");
    char x1 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c", x1);
    char x2 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c\n\n", x2);
}

void gpassword_1()
{
    srand(time(0));
    printf("\n\nGenerated Password: ");
    char x1 = (char)(rand() % (128 - 33 + 1)) + 33;
    printf("%c\n\n", x1);
}

// User-defined functions for pincodes.

void gpincode_6()
{
    srand(time(0));
    printf("\n\nGenerated Pincode: ");
    char x1 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x1);
    char x2 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x2);
    char x3 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x3);
    char x4 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x4);
    char x5 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x5);
    char x6 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c\n\n", x6);
}
void gpincode_5()
{
    srand(time(0));
    printf("\n\nGenerated Pincode: ");
    char x1 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x1);
    char x2 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x2);
    char x3 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x3);
    char x4 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x4);
    char x5 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c\n\n", x5);
}
void gpincode_4()
{
    srand(time(0));
    printf("\n\nGenerated Pincode: ");
    char x1 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x1);
    char x2 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x2);
    char x3 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c", x3);
    char x4 = (char)(rand() % (57 - 48 + 1)) + 48;
    printf("%c\n\n", x4);
}
