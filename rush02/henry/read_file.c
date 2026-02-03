#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char buffer[2000];
    size_t n;

    fd = open("numbers.dict", O_RDONLY);
    if (fd == -1) {
        perror("Erro ao abrir arquivo");
        return 1;
    }

    n = read(fd, buffer, sizeof(buffer) - 1);
    if (n > 0) {
        buffer[n] = '\0';
        printf("%s", buffer);
    }

    close(fd);
    return 0;
}

