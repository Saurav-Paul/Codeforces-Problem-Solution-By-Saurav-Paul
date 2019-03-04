import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner in= new Scanner(System.in);
        int n= in.nextInt();
        int array[]= new int[n];
        for(int i=0;i<n;i++)
            array[i]=in.nextInt();
        Arrays.sort(array);
        int ans=0;
        for(int i=0;i<n-1;i+=2){
            
            ans+=(array[i+1]-array[i]);
        }
        System.out.println(ans);
    }
 }
