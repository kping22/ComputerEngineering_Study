package observer_pattern;

public class Main {
    public static void main(String[] args) {
        NumberGenerator generator = new PrimeNumberGenerator(1, 10, 1);
        Observer observer1 = new DigitObserver();
        Observer observer2 = new GraphObserver();
        Observer observer3 = new NamePrintObserver();
        generator.addObserver(observer1);
        generator.addObserver(observer2);
        generator.addObserver(observer3);
        generator.execute();
    }
}