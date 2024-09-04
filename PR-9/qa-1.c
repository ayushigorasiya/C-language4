
#include <stdio.h>

int main() {
	
    FILE *evenFile, *oddFile;
    int i;
    printf("\n\n");
    evenFile = fopen("evenFile.txt", "w");
    oddFile = fopen("oddFile.txt", "w");

    if (evenFile == '\0' || oddFile == '\0') 
	{
        printf("Error opening file.\n");
        return 1;
    }

    fprintf(evenFile, "Even numbers from even_file.txt: \n\n");
    fprintf(oddFile, "Odd numbers from odd_file.txt: ");
    for (i = 50; i <= 70; i++) 
	{
        if (i % 2 == 0) 
		{
            fprintf(evenFile, "%d", i);
            if (i != 70) fprintf(evenFile, ", ");
        }
		else 
		{
            fprintf(oddFile, "%d", i);
            if (i != 69) fprintf(oddFile, ", ");
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("==> Even numbers from even_file.txt:\n");
    fprintf(evenFile, "Even Numbers are Given Below : ");
    for (i = 50; i <= 70; i += 2) 
	{
        printf("%d", i);
        if (i != 70) 
			printf(", ");
    }
    printf("\n\n");

    printf("\n\n==> Odd numbers from odd_file.txt:\n");
    for (i = 51; i <= 69; i += 2) 
	{
        printf("%d", i);
        if (i != 69) 
			printf(", ");
    }
    
    printf("\n\n\n");

}