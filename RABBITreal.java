import j.until
public class Main(){
    public static void main(String[] args){
        Scanner sc=new scanner(System.in);
        int R,C;
        R=sc.nextInt();
        C=sc.nextInt();
        sc.nextLine();
        boolean vis[]=new boolean [R][C];
        Queue<int[]> q=new LinkedList<>();
        char grid[][]=new char[R][C];
        for(int row=0;row<R;row++){
            for(int col=0;col<C;col++){
                String s=sc.next();
                grid[row][col]=s.charAt(0);
                if(grid[row][col]=='R'){
                    q.add(new int []{row,col,0});
                    vis[row][col]=true;
                }
            }
        }


    }
