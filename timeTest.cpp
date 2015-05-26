#include <iostream>
#include <ctime>
using namespace std;

int main() {
		const long milliSecond = (double)CLOCKS_PER_SEC / 1000.0;
        clock_t lastTime;
        int times = 0;
        clock_t currentTime;
        lastTime = clock();
        while (1) {
                if (clock() - lastTime < milliSecond) {
                        times++;
                }else{
                        cout << times << "\r";
                        times = 0;
                        lastTime = clock();
                }
        }
}
