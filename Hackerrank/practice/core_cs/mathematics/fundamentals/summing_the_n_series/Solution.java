import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();
        while(T>0){
            BigInteger n = new BigInteger(sc.next());
            BigInteger ans = BigInteger.ZERO;
            ans = ans.add(BigInteger.valueOf(2));
            ans = ans.multiply(n.subtract(BigInteger.ONE));
            ans = ans.add(BigInteger.valueOf(2));
            ans = ans.multiply(n);
            ans = ans.divide(BigInteger.valueOf(2));
            ans = ans.mod(BigInteger.valueOf(1000000007));
            System.out.println(ans);
            T--;
        }
    }
}