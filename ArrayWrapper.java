import java.io.Serializable;
import java.util.List;

public class ArrayWrapper implements Serializable{

    private List<Integer> innerList;

    public ArrayWrapper(List<Integer> list){
        innerList = list;
    }

    public int at(int i){
        return innerList.get(i);
    }
}
