#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[100], str2[100], str3[100];
    int choice, i;

    printf("----- String Operations Menu -----\n");
    printf("1. strlen  (length of string)\n");
    printf("2. strcpy  (copy string)\n");
    printf("3. strcat  (concatenate strings)\n");
    printf("4. strcmp  (compare strings)\n");
    printf("5. strlwr  (convert to lowercase)\n");
    printf("6. strupr  (convert to uppercase)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter a string: ");
            scanf("%99s", str1);
            printf("Length of string = %zu\n", strlen(str1));
            break;

        case 2:
            printf("Enter a string: ");
            scanf("%99s", str1);
            strcpy(str2, str1);
            printf("Copied string = %s\n", str2);
            break;

        case 3:
            printf("Enter first string: ");
            scanf("%49s", str1);
            printf("Enter second string: ");
            scanf("%49s", str2);
            strcat(str1, str2);
            printf("Combined string = %s\n", str1);
            break;

        case 4:
            printf("Enter first string: ");
            scanf("%99s", str1);
            printf("Enter second string: ");
            scanf("%99s", str2);
            if (strcmp(str1, str2) == 0)
                printf("Strings are equal\n");
            else
                printf("Strings are not equal\n");
            break;

        case 5:
            printf("Enter a string: ");
            scanf("%99s", str3);
            for (i = 0; str3[i] != '\0'; i++)
                str3[i] = tolower((unsigned char)str3[i]);
            printf("Lowercase string = %s\n", str3);
            break;

        case 6:
            printf("Enter a string: ");
            scanf("%99s", str3);
            for (i = 0; str3[i] != '\0'; i++)
                str3[i] = toupper((unsigned char)str3[i]);
            printf("Uppercase string = %s\n", str3);
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
