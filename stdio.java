/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package largestbutminfreq;

import java.io.IOException;
import java.util.Scanner;

/**
 *
 * @author Gaurav
 */
public class stdio {
    
    public static void main(String args[]){
         Scanner scan = new Scanner(System.in);
        //int i = scan.nextInt();
       // double d = scan.nextDouble();
        
        //String s = scan.nextLine(); 
        
        try{IOException io = new IOException("Breadth and height must be positive"); 
        throw io;}catch(IOException e){
            e.getMessage();
        }

        System.out.println("String: " );
        System.out.println("Double: " );
        System.out.println("Int: " );
        
        System.out.print(2100%4);
        
        
        
        
    }
    
}
