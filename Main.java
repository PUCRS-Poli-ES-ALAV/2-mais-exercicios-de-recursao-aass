import java.util.ArrayList;

public class Main{   

    public static Boolean isPal(String s){
        if(s.charAt(0) != s.charAt(s.length()-1)) return false;
        if(s.length() == 0 || s.length() == 1) return true;
        return isPal(s.substring(1, s.length()-1));
        
    } 

    public static String convBase2 (int n){
        if(n == 0) return "0";
        if (n == 1) return "1";
        if(n%2 == 0)  return convBase2(n/2) + "0" ;
        return convBase2(n/2) + "1";
    }

    public static int somatorio(ArrayList<Integer> l){
        if(l.size()== 0) return 0;
        return l.getFirst() + somatorio(new ArrayList<>(l.subList(1, l.size())));   
    }
    public static void main(String[] args) {
        System.out.println(isPal("ana"));
        System.out.println(convBase2(5));
        ArrayList<Integer> l = new ArrayList<>();
        l.add(1);
        l.add(4);
        l.add(1);
        System.out.println(somatorio(l)); 
    }

}