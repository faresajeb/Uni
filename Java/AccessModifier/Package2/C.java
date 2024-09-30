package AccessModifier.Package2;
import AccessModifier.Package1.*;

public class C {

    public String publicMessage = "this is public";//visible to everything
    protected String protectedMessage = "this is protected";//accessible to a different class in a different package
                                                            // as long as that class is a subclass of the class that contains the protected.
    private String privateMessage = "this is private";
    String defaultMessage = "this is the default";//visible only in the same package.
}
