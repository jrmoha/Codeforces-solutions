import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.PriorityQueue;
import java.util.Queue;
import java.util.Random;
import java.util.Scanner;
import java.math.BigInteger;
import java.util.Collections;
import java.util.HashSet;
import java.util.LinkedHashMap;
import java.util.Set;
import java.util.Vector;

public class Solving {

    private static final Scanner sc = new Scanner(System.in);
 public static void main(String[] args) {
        int t=sc.nextInt();
        while(t-->0){
            int n=sc.nextInt();
            int[] arr=new int[n];
            for(int i=0;i<n;i++)
                arr[i]=sc.nextInt();
            ArrayList<Integer> arr2=new ArrayList<>();
       ArrayList<Integer> arr3=new ArrayList<>();
       Map<Integer,Integer> map=new HashMap<>();
       for(int i=0;i<n;i++)
           arr2.add(arr[i]%10);
       for(int i=0;i<n;i++){
           if(map.containsKey(arr2.get(i))){
               map.put(arr2.get(i), map.get(arr2.get(i))+1);
           }else{
               map.put(arr2.get(i), 1);
           }
       }
     for(Map.Entry<Integer,Integer> k:map.entrySet()){
         int tmp=k.getValue();
         if(tmp>3)
             tmp=3;
         for(int i=0;i<tmp;i++)
             arr3.add(k.getKey());
     }
     boolean bool=false;
         int sz=arr3.size();
         for(int i=0;i<sz;i++){
             for(int j=i+1;j<sz;j++){
                 for(int k=j+1;k<sz;k++){
                     if((arr3.get(i)+arr3.get(j)+arr3.get(k))%10==3){
                         bool=true;break;
                     }
                 }
                 if(bool)
                     break;
             }
             if(bool)
                 break;
         }
if(bool)
            System.out.println("YES");
else
            System.out.println("NO");
        }
    }}