#include <stdio.h>
#include <time.h>

int main() {
        long int currentTime;
        long int times = 0;
        struct timeval th;
        gettimeofday(&th, NULL);
        currentTime = th.tv_usec / 1000;
        while(1){
                gettimeofday(&th, NULL);
                if (th.tv_usec / 1000 == currentTime) {
                        times++;
                }else{
                        printf("%lu\r", times);
                        times = 0;
                        currentTime = th.tv_usec / 1000;
                }
        }
}
