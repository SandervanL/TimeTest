public class timeTest {
        public static void main(String[] argv) {
                int times = 0;
                long lastTime = System.currentTimeMillis();
                while (true) {
<<<<<<< HEAD
                        if (System.currentTimeMillis() - lastTime < 1) {
=======
                        if (System.currentTimeMillis() == lastTime) {
>>>>>>> origin/master
                                times++;
                        }else{
                                System.out.print(times + "\r");
                                times = 0;
                                lastTime = System.currentTimeMillis();
                        }
                }
        }
}
