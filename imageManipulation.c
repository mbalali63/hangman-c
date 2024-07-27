#include <stdio.h>
#include <stdio.h>

int main()
{
    FILE *file;
    char signature[2];
    int fileSize;
    int reserved;


    file =fopen("b1.bmp","rb");
    if (file == NULL)
    {
        perror("Error opening file");
        return 1;
    }
    size_t result = fread(signature,2,1,file);
    result = fread(&fileSize,4,1,file);
    result = fread(&reserved,4,1,file);

    printf("Signature = %s\n",signature);
    printf("File size = %d bytes\n",fileSize);
    printf("File size = %d bytes\n",reserved);
    fclose(file);
    return 0;
}