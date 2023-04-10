#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main() {
printf("rahul ranjan 01011604421\n");
int n=10,ind=0;
int fd,sRead,sWrite;
char write_value[n], read_value[n];

for(int i=1; i < 10; i++) {
write_value[ind] = i;
ind++;
}
fd = open("Number.txt",O_CREAT | O_RDWR, 0777);
sWrite = write(fd, write_value, n);
close(fd);
fd = open("Number.txt",O_RDWR);
sRead = read(fd, read_value, n);
close(fd);
for(int i=0;i<n;i+=2) {
printf(" %d",read_value[i]);
}
printf("\n");
}