public class Main{
    public static void doBiggest(int n1,int n2){
         int res;
    res=n1>n2?n1:n2;
    System.out.printf("%d\n",res);
    }
    public static void main(String[] args){
        doBiggest(100,250);
        doBiggest(300,50);
        doBiggest(1000,2500);
    
}
}