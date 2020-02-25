package visitor_Pattern;
import java.util.Iterator;
import java.util.ArrayList;

public class FileNameFindVisitor extends Visitor {
    private String filename;
    private ArrayList found = new ArrayList();
    public FileNameFindVisitor(String filename) {           // "hyeja"라는 값을 지정함.
        this.filename = filename;
    }
    public Iterator getFoundFiles() {                 // 발견한 파일을 얻는다
        return found.iterator();
    }
    public void visit(File file) {                      // 파일을 방문할 때 호출된다
        if (file.getName().contains(filename)) {
            found.add(file);
        }
    }
    public void visit(Directory directory) {            //디렉터리를 방문할 때 호출된다
        Iterator it = directory.iterator();
        while (it.hasNext()) {
            Entry entry = (Entry)it.next();
            entry.accept(this);
        }
    }
}