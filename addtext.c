/*Write a c program that opens a file in append mode and allows the user to add text to the end of the file*/
#include<stdio.h>
int main()
{
    FILE *file;
    char filename[100];
    char text[500];
    printf("enter the filename:");
    scanf("%s",filename);
    file=fopen(filename,"a");
    if(file==NULL)
    {
        printf("Error opening the the file.\n");
        return 1;
    }
    printf("enter text to appendto the file (max 500 characters)");
    getchar();
    fgets(text,sizeof(text),stdin);
    fprintf(file,"%s",text);
    fclose(file);
    printf("text appended to the file successfully.");
    return 0;
}