/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package largestbutminfreq;

import java.util.ArrayList;
import java.util.List;

/**
 *
 * @author Gaurav
 */
public class cakecandels {
  
    public static void main(String args[]){
        List<Integer> candles = new ArrayList<Integer>();
        candles.add(3);
        candles.add(2);
        candles.add(1);
        candles.add(3);
        
        int max = Integer.MIN_VALUE;
        int count = 0;
        int n = candles.size();
        for(int i=0; i<n; i++){
            if(max == candles.get(i)){
                count++;
            }
            
            if (candles.get(i)>max){
                max = candles.get(i);
                count = 1;
            }
            
            
        }
        
        System.out.println(count);
    }

}
    
    
    

