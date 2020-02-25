package state_Pattern;

public class MidNightState implements State {
    private static MidNightState singleton = new MidNightState();
    private MidNightState() {                            // �����ڴ� private
    }
    public static State getInstance() {                 // ������ �ν��Ͻ��� ��´�
        return singleton;
    }
    public void doClock(Context context, int hour) {    // �ð�����     
        if (0 <= hour && hour < 9 || 17 <= hour && hour < 23) {
        	context.changeState(NightState.getInstance());
        } 
    }
    public void doUse(Context context) {                // �ݰ���
        context.callSecurityCenter("���:�߽Ľð� �ݰ���!");
    }
    public void doAlarm(Context context) {              // ���
        context.callSecurityCenter("���(�߽Ľð�)");
    }
    public void doPhone(Context context) {              // �Ϲ���ȭ
        context.recordLog("�߽Ľð� ��ȭ����");
    }
    public String toString() {                          // ���ڿ� ǥ��
        return "[�߽Ľð�]";
    }
}
