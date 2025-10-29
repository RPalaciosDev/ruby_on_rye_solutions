import java.util.*;

class Main{
    static Scanner lineReader = new Scanner(System.in);
    static TreeSet<String> wumpusNode= new TreeSet<>();
    static int seed = 0;
    static String locationParse;
    static int counter = 0;

    public static void main(String[] args){
        seed = lineReader.nextInt();

        for(int i = 0; i < 4; i++){
            seed = seed + (seed / 13) + 15;
            locationParse = Integer.toString(seed);
            String loc = locationParse.substring(locationParse.length()-2);
            if(!wumpusNode.contains(loc)) {
                wumpusNode.add(loc);
            }
            else{
                i -=1;
            }
        }
        while(!wumpusNode.isEmpty()){
            counter++;
            String guess = lineReader.next();
            if(wumpusNode.remove(guess)){
                System.out.println("You hit a wumpus!");
            }
            if(!wumpusNode.isEmpty()){
                int bestDistance = Integer.MAX_VALUE;
                for(String element: wumpusNode){
                    int currentDistance = (Math.abs(Integer.parseInt(element.substring(0,1)) - Integer.parseInt(guess.substring(0,1)))+ (Math.abs(Integer.parseInt(element.substring(1,2)) - Integer.parseInt(guess.substring(1,2)))));
                    if(currentDistance < bestDistance){
                        bestDistance = currentDistance;
                    }
                }
                System.out.println(bestDistance);
            }
            else{
                System.out.println("Your score is "+ counter+ " moves.");
            }


        }
    }
}
