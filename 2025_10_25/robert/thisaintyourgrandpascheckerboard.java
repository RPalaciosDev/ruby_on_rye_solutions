import java.util.*;

public class thisaintyourgrandpascheckerboard{
  static String[][] board;

  public static void main(String args[]){

    int black = 0;
    int white = 0;

    String order= "";

    Scanner scan = new Scanner(System.in);
    int size = Integer.parseInt(scan.nextLine());
    board = new String[size][size];
    for (int i= 0; i < size; i ++){
      board[i] = scan.nextLine().split(""); 
    }

    //left to right
     for(int row = 0; row < size; row++){
         order= "";
       for (int col = 0; col < size; col++){
          if(board[row][col].equals("W")){ white++; }
          if(board[row][col].equals("B")){ black++; }
          order += board[row][col];
       }
       if (black != white){
        System.out.println(0);
        return;
       }
       String[] split = order.split("");
       for(int j = 2; j < size; j++){
         if (split[j-2].equals(split[j-1]) && split[j-1].equals(split[j])){
           System.out.println(0);
           return;
         }
       }
     }

      // top down
      black = 0;
      white = 0 ;
      for(int col = 0; col < size; col++){
          order= "";
          for (int row = 0; row < size; row++){
              if(board[row][col].equals("W")){ white++; }
              if(board[row][col].equals("B")){ black++; }
              order += board[row][col];
          }
          if (black != white){
              System.out.println(0);
              return;
          }
          String[] split = order.split("");
          for(int j = 2; j < size; j++){
              if (split[j-2].equals(split[j-1]) && split[j-1].equals(split[j])){
                  System.out.println(0);
                  return;
              }
          }
      }
      System.out.println(1);
  }
}
