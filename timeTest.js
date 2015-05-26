var times = 0;
var lastTime = new Date().getTime();
while (1) {
	if (lastTime == new Date().getTime()){
		times++;
	}else{
		process.stdout.write(times + "\r");
		lastTime = new Date().getTime();
		times = 0;
	}
}