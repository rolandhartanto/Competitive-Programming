//Closest Number
//Author : Roland Hartanto

import java.io.*;
import java.util.*;
import java.math.BigInteger;

public class Solution {

    public static void main(String[] args) {
        int T;
        Scanner sc = new Scanner(System.in);
        T = sc.nextInt();
        while(T-- > 0){
            BigInteger a = BigInteger.valueOf(sc.nextInt());
            BigInteger b = BigInteger.valueOf(sc.nextInt());
            BigInteger x = BigInteger.valueOf(sc.nextInt());
            if(b.compareTo(BigInteger.ZERO) == -1){
                b = b.multiply(BigInteger.valueOf(-1));
                BigInteger pangkat = a.pow(b.intValue());
                if(pangkat.compareTo(BigInteger.valueOf(2))==1){
                    System.out.println("0");
                }else{
                    if(x.compareTo(BigInteger.ONE)==0){
                        System.out.println("1");
                    }else{
                        System.out.println("0");    
                    }
                }
            }else{
                BigInteger sisa = a.modPow(b,x);
                if(sisa.compareTo(a) ==0){//sama
                    if(sisa.compareTo(x.divide(BigInteger.valueOf(2))) <=0){
                        System.out.println("0");    
                    }else{
                        System.out.println(x);    
                    }
                }else{
                    if(b.compareTo(BigInteger.ZERO)==0){
                        if(sisa.compareTo(x.divide(BigInteger.valueOf(2))) <=0){
                            System.out.println("0");    
                        }else{
                            System.out.println(x);    
                        }   
                    }else{
                        a = a.pow(b.intValue());
                        if(sisa.compareTo(x.divide(BigInteger.valueOf(2))) <=0){
                            System.out.println(a.subtract(sisa));    
                        }else{
                            System.out.println(a.add(x.subtract(sisa)));    
                        }
                    }
                }
            }
        }
    }
}