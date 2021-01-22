/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package largestbutminfreq;
import java.util.Map;
import java.util.HashMap;
/**
 *
 * @author Gaurav
 */
public class LargestbutMinFreq {

    private int[] mergeSort(int[] arr, int s, int e, Map m){
        int[] aray = new int [1];
        if((e-s) < 1){
            aray[0] = arr[e];
            return aray;
        }
        
        int mid = (s+e)/2;
        int [] arr1 = mergeSort(arr,s,mid,m);
        int [] arr2 = mergeSort(arr,mid+1,e,m);
        int [] merge = new int[e-s+1];
        int i=0,j=0,k=0;
        while(i < arr1.length && j < arr2.length){
            
            if(arr1[i] < arr2[j]){
                addtomap(m,arr2[j]);
                merge[k++] = arr2[j++];
            }else{
                addtomap(m,arr1[i]);
                merge[k++] = arr1[i++];
            }
        }
        
        while(i < arr1.length){ addtomap(m,arr1[i]); merge[k++] = arr1[i++]; }
        while(j < arr2.length){ addtomap(m,arr2[j]); merge[k++] = arr2[j++]; }
        
        
       return merge; 
    }
    
    private void addtomap(Map m, int x){
        if(m.containsKey(x)){
            int p = (int)m.get(x);
            m.replace(m, p+1);
            return;
        }
        m.put(x, 1);
    }
    
    public int LargestMinFrq(int arr[],int n){
        Map m1 = new HashMap();
        arr = mergeSort(arr,0,n,m1);
        
        return 0;
    }
    
    
    
    
    
    public static void main(String[] args) {
        //int [] arr = {2,2,5,50,1};
        int [] arr = {5,3,4,9,6,1,2,8,7,0};
        LargestbutMinFreq f = new LargestbutMinFreq();
        f.LargestMinFrq(arr,arr.length);
    }
    
}
