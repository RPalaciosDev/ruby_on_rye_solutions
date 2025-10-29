import java.util.*;

public class Restaurantopening{
    static Scanner scan = new Scanner(System.in);

    static void calDist(int x, int y, int[][] people, int[][] distance){
        for (int i = 0; i < people.length; i++){
            for(int j = 0;  j < people[0].length; j++){
                distance[y][x] += ((Math.abs(x-j) + Math.abs(y-i)) * people[i][j]);
            }
        }
    }

    public static void main(String args[]){

        String[] dim = scan.nextLine().split(" ");
        // get dimensions
        int y = Integer.parseInt(dim[0]);
        int x = Integer.parseInt(dim[1]);

        // initialize matrix
        int[][] people = new int[y][x];
        int[][] mDistance = new int[y][x];

        // build matrix
        for(int j = 0; j < y;  j++){
            String[] temp = scan.nextLine().split(" ");
            for(int k = 0; k < temp.length; k++){
                people[j][k] = Integer.parseInt(temp[k]);
            }
        }

        //
        for(int i = 0; i< y; i++){
            for(int j = 0; j < x; j++){
                calDist(j, i, people, mDistance);
            }
        }
        int min = Integer.MAX_VALUE;

        for(int[] row:mDistance){
            for(int element:row){
                if (element < min){
                    min = element;
                }
            }
        }
        System.out.println(min);


    }
}
