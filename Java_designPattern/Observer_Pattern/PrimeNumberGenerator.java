package observer_pattern;
import java.util.Random;

public class PrimeNumberGenerator extends NumberGenerator {
	private int number;                    // ������ ��
    private int end;                        // ���ᰪ(�� ���� �������� �ʴ´�)
    private int inc;                         // ������
    private int prime;
    private int numbertimes;
    private Random rand;
    public PrimeNumberGenerator(int start, int end, int inc) {
        this.number = start;
        this.end = end;
        this.inc = inc;
        rand = new Random();
    }
    public int getNumber() {                 // ���� ����Ѵ�
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