#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main() {
	char buff[10];
	int fd;
	int val;
	fd = open("test.txt",O_RDONLY);
	if (fd < 0) {
		perror("comment:");
		exit(1);
	}
	val = read(fd,buff,10);
	if (val < 0) {
		perror("comment:");
		exit(1);
	}
	val = write(1,buff,10);
	if (val < 0) {
		perror("comment:");
		exit(1);
	}
	close(fd);
}
