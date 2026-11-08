#include <unistd.h>

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (1);
    }
    int i = 0;
    char letter = ' ';
    while (argv[1][i] != '\0')
    {
        letter = argv[1][i] + 1;
        write(1, &letter, 1);
        i++;
    }
    write(1, "\n", 1);

}