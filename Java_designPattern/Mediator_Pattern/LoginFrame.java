package m_Pattern;

import java.awt.Frame;
import java.awt.Label;
import java.awt.Color;
import java.awt.CheckboxGroup;
import java.awt.GridLayout;
import java.awt.event.ActionListener;
import java.awt.event.ActionEvent;

public class LoginFrame extends Frame implements ActionListener, Mediator {
    private ColleagueCheckbox checkGuest;
    private ColleagueCheckbox checkLogin;
    private ColleagueCheckbox checkMember;
    private ColleagueTextField textUser;
    private ColleagueTextField textPass;
    private ColleagueTextField textidentify;
    private ColleagueButton buttonOk;
    private ColleagueButton buttonCancel;

    // 생성자
    // Colleague들을 생성하고, 배치한 후에 표시를 실행한다
    public LoginFrame(String title) {
        super(title);
        setBackground(Color.lightGray);
        // 레이아웃 매니저를 사용해서 5X3의 그리드를 만든다
        setLayout(new GridLayout(5, 3));
        // Colleague들의 생성
        createColleagues();
        // 배치
        add(checkGuest);
        add(checkLogin);
        add(checkMember);
        add(new Label("Username:"));
        add(textUser);
        add(new Label(""));
        add(new Label("Password:"));
        add(textPass);
        add(new Label(""));
        add(new Label("identify: "));
        add(textidentify);
        add(new Label(""));
        add(buttonOk);
        add(buttonCancel);
        // 유효/무효의 초기 지정
        colleagueChanged();
        // 표시
        pack();
        show();
    }

    // Colleague들을 생성한다
    public void createColleagues() {
        // 생성
        CheckboxGroup g = new CheckboxGroup();
        checkGuest = new ColleagueCheckbox("Guest", g, true);
        checkLogin = new ColleagueCheckbox("Login", g, false);
        checkMember = new ColleagueCheckbox("Member",g,false);
        textUser = new ColleagueTextField("", 10);
        textPass = new ColleagueTextField("", 10);
        textidentify = new ColleagueTextField("", 13);
        textPass.setEchoChar('*');
        buttonOk = new ColleagueButton("OK");
        buttonCancel = new ColleagueButton("Cancel");
        // Mediator의 세트
        checkGuest.setMediator(this);
        checkLogin.setMediator(this);
        checkMember.setMediator(this);
        textUser. setMediator(this);
        textPass. setMediator(this);
        textidentify.setMediator(this);
        buttonOk. setMediator(this);
        buttonCancel.setMediator(this);
        // Listener의 세트
        checkGuest.addItemListener(checkGuest);
        checkLogin.addItemListener(checkLogin);
        checkMember.addItemListener(checkMember);
        textUser.addTextListener(textUser);
        textPass.addTextListener(textPass);
        textidentify.addTextListener(textidentify);
        buttonOk.addActionListener(this);
        buttonCancel.addActionListener(this);
    }

    // Colleage에서의 통지로 Colleage의 유효/무효를 판정한다 
    public void colleagueChanged() {                          
        if (checkGuest.getState()) { 				// Guest 모드
            textUser.setColleagueEnabled(false);                
            textPass.setColleagueEnabled(false);
            textidentify.setColleagueEnabled(false);
            buttonOk.setColleagueEnabled(true);               
        } 
        else if(checkLogin.getState()) {           // Login 모드
            textUser.setColleagueEnabled(true);
            textidentify.setColleagueEnabled(false);
            userpassChanged();                              
        }
        else {                                     // Member 모드
        	textUser.setColleagueEnabled(true);
        	userpassChanged();
        }
    }
    public boolean isNumber(String str) { // 문자열을  숫자로  바꿀수  있는지  아닌지를  판별
    	try {
    		Long.parseLong(str);
    	}
    	catch(NumberFormatException e) {
    		return false;
    	}
    	return true;
    }
    // textUser 또는 textPass 또는  textidentify의 변경이 있었다
    // 각 Colleage의 유효/무효를 판정한다
    private void userpassChanged() {
        if (textUser.getText().length() > 0) {
            textPass.setColleagueEnabled(true);
            if ((textPass.getText().length() > 0 ) &&(checkLogin.getState())) {
                buttonOk.setColleagueEnabled(true);
            }
            else if((textPass.getText().length() > 0) && (checkMember.getState())) {
            	textidentify.setColleagueEnabled(true);
            	if((textidentify.getText().length() == 13) && (isNumber(textidentify.getText()))) {
            		buttonOk.setColleagueEnabled(true);
            	}
            	else {
            		buttonOk.setColleagueEnabled(false);
            	}
            }
            else {
            	textidentify.setColleagueEnabled(false);
                buttonOk.setColleagueEnabled(false);
            }
        } 
        else {
            textPass.setColleagueEnabled(false);
            textidentify.setColleagueEnabled(false);
            buttonOk.setColleagueEnabled(false);
        }
    }
    public void actionPerformed(ActionEvent e) {
        System.out.println(e.toString());
        System.exit(0);
    }
}
