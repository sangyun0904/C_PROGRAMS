#include <stdio.h>
#include <stdbool.h>

/* Our structure */
struct rec
{
    int x,y,z;
};

int main()
{
    int counter;
    FILE *ptr_myfile;
    FILE *w_myfile;
    struct rec my_record;

    ptr_myfile=fopen("01_Festo.aasx","rb");
    w_myfile=fopen("01_Festo.txt", "w");
    if (!ptr_myfile)
    {
        printf("Unable to open file!");
        return 1;
    }
    for ( counter=1; counter <= 10; counter++)
    while (true)
    {
        fread(&my_record,sizeof(struct rec),1,ptr_myfile);
        if (my_record.x == NULL) {
            break;
        }
        fprintf(w_myfile, "%d\n",my_record.x);
    }
    fclose(ptr_myfile);
    fclose(w_myfile);
    return 0;
}