package COR_Pattern;

public class Main {
    public static void main(String[] args) {
        Support gyuhyoung = new HwSupport("�����");
    	Support alice = new NoSupport("Alice");
        Support bob = new LimitSupport("Bob", 100);
        Support charlie = new SpecialSupport("Charlie", 429);
        Support diana = new LimitSupport("Diana", 200);
        Support elmo = new OddSupport("Elmo");
        Support fred = new LimitSupport("Fred", 300);
        // ������ ����
        gyuhyoung.setNext(alice).setNext(bob).setNext(charlie).setNext(diana).setNext(elmo).setNext(fred);
        // �پ��� Ʈ���� �߻�
        for (int i = 1; i < 500; i +=15) {
            gyuhyoung.support(new Trouble(i));
        }
    }
}
