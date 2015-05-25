public class timeTest {
        public static void main(String[] argv) {
                int times = 0;
                long currentTime = System.currentTimeMillis(), now;
                while (true) {
                        now = System.currentTimeMillis();
                        if (now == currentTime) {
                                times++;
                        }else{
                                System.out.print(times + "\r");
                                times = 0;
                                currentTime = now;
                        }
                }
        }
}
