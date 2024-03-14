import javax.swing.* ;

class Javaxswing {

	public static void main(String[] args){
	
	String sn1;

	int x ;

         sn1 = JOptionPane.showInputDialog("Enter x value ") ;

	x =Integer.parseInt(sn1);
		
		
	JOptionPane.showMessageDialog(null,"value = " +x,"output",JOptionPane.ERROR_MESSAGE);

	}
}


	

