import java.math.BigInteger;
import java.util.Scanner;

public class TestClass {
	
	public static void main(String [ ] args)
	{	
		BigInteger bigInt = BigInteger.ONE;
		Scanner scan = new Scanner(System.in);
		int value  = scan.nextInt();
		for(int i=value; i > 0;i--){
			BigInteger val = new BigInteger(i + "");
			bigInt = bigInt.multiply(val);
		}
		System.out.println(bigInt);
		scan.close();
	}
}
