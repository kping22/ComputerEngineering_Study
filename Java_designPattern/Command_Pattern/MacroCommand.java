package command;

import java.util.Stack;
import java.util.Iterator;

public class MacroCommand implements Command {
    // ����� ����
    private Stack commands = new Stack();
    private Stack undoHistoryForRedo = new Stack();
    // ����
    public void execute() {
        Iterator it = commands.iterator(); 
        while (it.hasNext()) {             
            ((Command)it.next()).execute();
        }                               
    }
    // �߰�
    public void append(Command cmd) {
        if (cmd != this) {
           commands.push(cmd);
        }
    }
    // ������ ����� ����
    public void undo() {
        if (!commands.empty()) {
        	Command command = (Command) commands.pop();
        	undoHistoryForRedo.push(command);
        	
        }
    }
    public void redo() {
    	if(!undoHistoryForRedo.empty()) {
    		Command command = (Command) undoHistoryForRedo.pop();
    		commands.push(command);
    	}
    }
    // ���� ����
    public void clear() {
        commands.clear();
    }
}
