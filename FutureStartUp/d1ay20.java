import java.util.*;

class Viv {
    
	public static void main(String[] args){

	ArrayList v = new ArrayList();

        int n = v.size();

	v.add(5);
	v.add(4);
	v.add(3);
	v.add(2);

        Collections.sort(v);

        for (int i = 0; i < n; i += 2) {
            
		Collections.swap(v, i, i + 1);
        }

        System.out.print(v);
    }
}
