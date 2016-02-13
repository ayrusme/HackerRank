import java.io.*;
import java.util.*;
import java.math.*;

public class Solution {
    
        public static void main(String[] args) {
            
             BigInteger a,b;
            a = new BigInteger("1");
            b = new BigInteger("1");
             Scanner in = new Scanner(System.in);
             int n = in.nextInt();
            for(int i=1;i<=n;i++)
                {
                a=a.multiply(b);
                b=b.add(BigInteger.ONE);
            }
            System.out.print(a);
    }
}