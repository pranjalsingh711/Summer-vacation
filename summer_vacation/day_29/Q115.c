#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int choice, i;

    printf("Enter a string: ");
    scanf(" %[^\n]", str);

    do
    {
        printf("\n===== STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Reverse String\n");
        printf("3. Convert to Uppercase\n");
        printf("4. Convert to Lowercase\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
            {
                char rev[100];
                strcpy(rev,str);
                strrev(rev);
                printf("Reverse = %s\n",rev);
                break;
            }

            case 3:
                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='a' && str[i]<='z')
                        str[i]-=32;
                }
                printf("Uppercase = %s\n",str);
                break;

            case 4:
                for(i=0;str[i]!='\0';i++)
                {
                    if(str[i]>='A' && str[i]<='Z')
                        str[i]+=32;
                }
                printf("Lowercase = %s\n",str);
                break;

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    }while(choice!=5);

    return 0;
}