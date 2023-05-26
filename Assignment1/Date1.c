#include<stdio.h>
#include<string.h>
#include<time.h>
int main()
{
     char      buffer[100];
    struct tm date;

    memset(&date, 0, sizeof(date));

    printf("Enter date (dd/mm/yy): ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
        return -1;
    if (sscanf(buffer, "%d/%d/%d", &date.tm_mday, &date.tm_mon, &date.tm_year) == 3)
    {
        const char *format;

        format = "Dated %A %dth of %B, %Y";
        if (strftime(buffer, sizeof(buffer), format, &date) > sizeof(buffer))
            fprintf(stderr, "there was a problem converting the string\n");
        else
            fprintf(stdout, "%s\n", buffer);
    }
    return 0;
}