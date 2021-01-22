/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package largestbutminfreq;
import java.io.*;
import java.util.*;




class Difference {
  	private int[] elements;
  	public int maximumDifference = 0;

	// Add your code here
    public Difference(int[] elements){
        this.elements = elements;
    }
    public void computeDifference(){
        System.out.println("Length is: "+elements.length);
        int max = 0;
        for(int i=0; i<elements.length; i++){
            for(int j = i+1; j<elements.length;j++){
                if(max < Math.abs(elements[i] - elements[j])){
                    max = Math.abs(elements[i] - elements[j]);
                }
            }
        }
        maximumDifference = max;
    }
    
} 











public class MaxDefferance {
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = sc.nextInt();
        }
        sc.close();

        Difference difference = new Difference(a);

        difference.computeDifference();

        System.out.print(difference.maximumDifference);
    }
    
}
