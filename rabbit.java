import j.until
public class Main(){
    public static void main(String[] args){
        Scanner sc=new scanner(System.in);
        int R,C;
        R=sc.nextInt();
        C=sc.nextInt();
        sc.nextLine();
        //Wrapper class learn it
        boolean vis[]=new Boolean[R][C];
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
        int rd[]=(-1,-1,-1,0,0,1,1,1);
        int cd[]=(-1,0,1,0,1,-1,0,1);
        while(!q.isEmpty()){
            int cell[]=q.poll();
            for(int i=0;i<8;i++){
                int ar=cell[0]+rd[i],ac=cell[1]+cd[i];
                if(ar>=0 && ar<R && ac>0 && ac<C && grid[ar][ac]!="B" && !vis[ar][ac]){
                    if(grid[ar][ac]=='C'){
                        system.out.println(cell[2]+1);
                        return;
                    }
                    q.add(new int[](ar,ac,cell[2]+1));
                    vis[ar][ac]=true;
                }
            }

        }
        system.out.println("-1");
    }

}
