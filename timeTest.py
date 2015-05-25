from time import time
from sys import stdout
currentTime = time();
times = 0;
while True:
	now = time();
	if now == currentTime:
		times += 1
	else:
		stdout.write(str(times) + "\r")
		times = 0
		currentTime = now