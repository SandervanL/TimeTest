import java.lang.Runnable;
import java.lang.Thread;
import java.lang.InterruptedException;

class timeThread {
	protected static long millis = 0;
	
	public static void main(String[] args) {
		Thread incrementTimer = new Thread(runClock);
		incrementTimer.start();
		long counter = 0;
		while (true) {
			if (millis == 0) {
				++counter;
			}else {
				System.out.print(counter + "\r");
				millis = 0;
				counter = 0;
			};
		}
	};
	 
	static Runnable runClock = new Runnable() {
		public void run() {
			while (true) {
				++millis;
				try {
					Thread.sleep(1);
				} catch(InterruptedException ie) {};
			}
		};
	};
};