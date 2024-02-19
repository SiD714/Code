import java.util.*;

public class basic_scaner {
    public static void main(String[] args) {
    Scanner sc= new Scanner(System.in);
    // String input = sc.next();//next ka matlab sirf ek space tak hi store hoga value
    //                          //jaise agar sid sinha input denge to output sid hi dega
    //                          //kyunki sid ke baad space hai aur ye aage ka sab ignore kar dega
    // System.out.println(input);

    String name=sc.nextLine();//ab space ke baad ka bhi data store hoga
    System.out.println(name);
    }

    
}
