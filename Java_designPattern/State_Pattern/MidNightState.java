package state_Pattern;

public class MidNightState implements State {
    private static MidNightState singleton = new MidNightState();
    private MidNightState() {                            // 생성자는 private
    }
    public static State getInstance() {                 // 유일한 인스턴스를 얻는다
        return singleton;
    }
    public void doClock(Context context, int hour) {    // 시간설정     
        if (0 <= hour && hour < 9 || 17 <= hour && hour < 23) {
        	context.changeState(NightState.getInstance());
        } 
    }
    public void doUse(Context context) {                // 금고사용
        context.callSecurityCenter("비상:야식시간 금고사용!");
    }
    public void doAlarm(Context context) {              // 비상벨
        context.callSecurityCenter("비상벨(야식시간)");
    }
    public void doPhone(Context context) {              // 일반통화
        context.recordLog("야식시간 통화녹음");
    }
    public String toString() {                          // 문자열 표현
        return "[야식시간]";
    }
}
