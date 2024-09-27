import java.util.Scanner;
import javax.swing.JOptionPane;

public class Math {
    public static void main(String[] args) {
        double x = Double.parseDouble(JOptionPane.showInputDialog("Enter x"));
        char Op = JOptionPane.showInputDialog("Enter operation").toUpperCase().charAt(0);
        double y = Double.parseDouble(JOptionPane.showInputDialog("Enter y"));

        if (Op == '+') {
            JOptionPane.showMessageDialog(null,x + y);
        }
        if (Op == '-') {
            JOptionPane.showMessageDialog(null,x - y);
        }
        if (Op == '*') {
            JOptionPane.showMessageDialog(null,x * y);
        }
        if (Op == '/') {
            JOptionPane.showMessageDialog(null,x / y);
        }
        if (Op == '%') {
            JOptionPane.showMessageDialog(null,x % y);
        }



    }
}
