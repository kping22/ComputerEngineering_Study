package visitor_Pattern;
import java.util.Iterator;
import java.util.ArrayList;

public class FileNameFindVisitor extends Visitor {
    private String filename;
    private ArrayList found = new ArrayList();
    public FileNameFindVisitor(String filename) {           // "hyeja"��� ���� ������.
        this.filename = filename;
    }
    public Iterator getFoundFiles() {                 // �߰��� ������ ��´�
        return found.iterator();
    }
    public void visit(File file) {                      // ������ �湮�� �� ȣ��ȴ�
        if (file.getName().contains(filename)) {
            found.add(file);
        }
    }
    public void visit(Directory directory) {            //���͸��� �湮�� �� ȣ��ȴ�
        Iterator it = directory.iterator();
        while (it.hasNext()) {
            Entry entry = (Entry)it.next();
            entry.accept(this);
        }
    }
}