#include <stdio.h>
#include <stdlib.h>

int main()
{
    char num_columns[200];
    num_columns = getenv("COLUMNS");  /* This cannot compile because num_columns
                                         is a const char* but getenv() allocates
                                         its own memory for the returned string
                                         and returns its address. */
    printf("This window has %s columns.\n", num_columns);
};
