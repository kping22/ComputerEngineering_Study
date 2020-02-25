package COR_Pattern;

public class HwSupport extends Support{                            
    private int numbertimes;
	public HwSupport(String name) {    // 생성자
        super(name);
    }
    protected boolean resolve(Trouble trouble) {        // 해결용 메소드
        if (calcPrimeNumber(trouble.getNumber())) {
            return true;
        } else {
            return false;
        }
    }
    protected boolean calcPrimeNumber(int num) {
    	for(int i=1; i<=num; i++) {
    		if((num%i) == 0) {
    			numbertimes++;
    		}
    	}
    	if(numbertimes == 2) {
    		numbertimes = 0;
    		return true;
    	}
    	else {
    		numbertimes = 0;
    		return false;
    	}
    }
}
