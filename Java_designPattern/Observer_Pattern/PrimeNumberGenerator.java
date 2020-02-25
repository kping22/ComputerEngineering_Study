package observer_pattern;
import java.util.Random;

public class PrimeNumberGenerator extends NumberGenerator {
	private int number;                    // 현재의 수
    private int end;                        // 종료값(이 값을 포함하지 않는다)
    private int inc;                         // 증가분
    private int prime;
    private int numbertimes;
    private Random rand;
    public PrimeNumberGenerator(int start, int end, int inc) {
        this.number = start;
        this.end = end;
        this.inc = inc;
        rand = new Random();
    }
    public int getNumber() {                 // 수를 취득한다
        return prime;
    }
    public void execute() {
        while (number <= end) {
            number += inc;           
            while(true) {
            	if(primenumber(rand.nextInt(50)+1)) {            	            		
            		notifyObservers();
            		break;
            	}
            }
        }
    }
    public boolean primenumber(int num) {
    	for(int i=1; i<=num; i++) {
    		if((num%i) == 0) {
    			numbertimes++;
    		}
    	}
    	if(numbertimes == 2) {
    		numbertimes = 0;
    		prime = num;
    		return true;
    	}
    	else {
    		numbertimes = 0;
    		return false;
    	}
    }
}