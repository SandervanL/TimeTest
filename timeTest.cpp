<<<<<<< HEAD
#include <iostream>
=======
#include <iostream> //I know printf is less code and may be faster, but there has to be a difference between C and C++ code
>>>>>>> origin/master
#include <ctime>
using namespace std;

int main() {
<<<<<<< HEAD
		const long milliSecond = (double)CLOCKS_PER_SEC / 1000.0;
=======
        const double milliSecond = (double)CLOCKS_PER_SEC / 1000.0f;
>>>>>>> origin/master
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

