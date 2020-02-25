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

    // ������
    // Colleague���� �����ϰ�, ��ġ�� �Ŀ� ǥ�ø� �����Ѵ�
    public LoginFrame(String title) {
        super(title);
        setBackground(Color.lightGray);
        // ���̾ƿ� �Ŵ����� ����ؼ� 5X3�� �׸��带 �����
        setLayout(new GridLayout(5, 3));
        // Colleague���� ����
        createColleagues();
        // ��ġ
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
        // ��ȿ/��ȿ�� �ʱ� ����
        colleagueChanged();
        // ǥ��
        pack();
        show();
    }

    // Colleague���� �����Ѵ�
    public void createColleagues() {
        // ����
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
        // Mediator�� ��Ʈ
        checkGuest.setMediator(this);
        checkLogin.setMediator(this);
        checkMember.setMediator(this);
        textUser. setMediator(this);
        textPass. setMediator(this);
        textidentify.setMediator(this);
        buttonOk. setMediator(this);
        buttonCancel.setMediator(this);
        // Listener�� ��Ʈ
        checkGuest.addItemListener(checkGuest);
        checkLogin.addItemListener(checkLogin);
        checkMember.addItemListener(checkMember);
        textUser.addTextListener(textUser);
        textPass.addTextListener(textPass);
        textidentify.addTextListener(textidentify);
        buttonOk.addActionListener(this);
        buttonCancel.addActionListener(this);
    }

    // Colleage������ ������ Colleage�� ��ȿ/��ȿ�� �����Ѵ� 
    public void colleagueChanged() {                          
        if (checkGuest.getState()) { 				// Guest ���
            textUser.setColleagueEnabled(false);                
            textPass.setColleagueEnabled(false);
            textidentify.setColleagueEnabled(false);
            buttonOk.setColleagueEnabled(true);               
        } 
        else if(checkLogin.getState()) {           // Login ���
            textUser.setColleagueEnabled(true);
            textidentify.setColleagueEnabled(false);
            userpassChanged();                              
        }
        else {                                     // Member ���
        	textUser.setColleagueEnabled(true);
        	userpassChanged();
        }
    }
    public boolean isNumber(String str) { // ���ڿ���  ���ڷ�  �ٲܼ�  �ִ���  �ƴ�����  �Ǻ�
    	try {
    		Long.parseLong(str);
    	}
    	catch(NumberFormatException e) {
    		return false;
    	}
    	return true;
    }
    // textUser �Ǵ� textPass �Ǵ�  textidentify�� ������ �־���
    // �� Colleage�� ��ȿ/��ȿ�� �����Ѵ�
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
