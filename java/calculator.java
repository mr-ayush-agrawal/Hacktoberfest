import java.util.*;
public class calculator {
    public static void main(String[] args){
      Scanner sc = new Scanner(System.in);
      int a = sc.nextInt();
      int b = sc.nextInt();
      System.out.println("1 for +\n2 for -\n3 for *\n4 for /");
      int i = sc.nextInt();
      switch (i) {
        case 1:
        System.out.println("adding a and b ");
        int sum = a + b;
        System.out.println(sum);
        break;
        case 2: 
        System.out.println("subtracting a and b ");
        int sub = a-b ;
        System.out.println(sub);
        break;
        case 3:
        System.out.println("multiplying a and b");
        int mult = a*b;
        System.out.println(mult);
        break;
        case 4: 
        System.out.println("dividing a and b");
        int div = a/b;
        System.out.println(div);
        break;
        default :
        System.out.println("invalid choice");
        break; 
      }        
    }
    
}
