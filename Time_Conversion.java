/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package largestbutminfreq;

/**
 *
 * @author Gaurav
 */
public class Time_Conversion {
    
    public static void main(String args[]){
        String s = "11:01:00PM";
        int size = s.length();
        char c[] = s.toCharArray();
        
        System.out.println();
        if(s.substring(size-2, size).equals("AM")  && s.substring(0, 2).equals("12")){
            System.out.println( "00"+s.subSequence(2, size-2));
        }
        else if(s.substring(size-2, size).equals("AM")  && !s.substring(0, 2).equals("12")){
            System.out.println(s.substring(0,size-2));
        }
        else if(s.substring(size-2, size).equals("PM") && s.substring(0, 2).equals("12")){
            System.out.println(s.substring(0, size-2));
        }
        else if(s.substring(size-2, size).equals("PM") && !s.substring(0, 2).equals("12")){
            int a = Integer.parseInt(s.substring(0, 2));
            a += 12;
            System.out.println(a+s.substring(2, size-2));
        }
    }
    
}
