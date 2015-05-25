var times = 0;
var currentTime = new Date().getTime();
while (1) {
	var now = new Date().getTime();
	if (currentTime === now){
		++times
	}else{
		process.stdout.write(times + "\r");
		currentTime = now;
		times = 0;
	}
}