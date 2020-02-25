package state_Pattern;

public class Main {
    public static void main(String[] args) {
        SafeFrame frame = new SafeFrame("State Sample");
        while (true) {
            for (int hour = 0; hour < 24; hour++) {
                frame.setClock(hour);   // 시간설정
                try {
                    Thread.sleep(3000);
                } catch (InterruptedException e) {
                }
            }
        }
    }
}
