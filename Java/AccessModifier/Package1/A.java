package AccessModifier.Package1;
import AccessModifier.Package2.*;

public class A {
    protected String protectedMessage = "this is protected";//accessible to Asub
    public static void main(String[] args) {

//        C c = new C();
        //System.out.println(c.defaultMessage); error

        //System.out.println(c.publicMessage);//works

        B b = new B();
        //System.out.println(b.privateMessage);// error
    }




}
