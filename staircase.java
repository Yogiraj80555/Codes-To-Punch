
package largestbutminfreq;



import java.util.*;


public class staircase {

    // Complete the staircase function below.
    static void staircase(int n) {
        
        
        for(int i=0;i<n;i++){
            int space = n-i;
            while(space != 0){
                System.out.print(" ");
                space--;
            }
            int star = n-(n-i)+1;
            while(star != 0){
                System.out.print("#");
                star--;
            }
            
            System.out.println("");
        }
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int n = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        staircase(n);

        scanner.close();
    }
}
