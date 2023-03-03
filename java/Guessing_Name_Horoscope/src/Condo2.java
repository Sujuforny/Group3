import java.util.Scanner;

public class Condo2 {
    public static void main(String [] args) {


        Scanner Input = new Scanner(System.in)  ;
        System.out.print("Please enter the number of floors: ");
        int numFloors = Input.nextInt();
        System.out.print("Please enter the number of Room: ");
        int numRoom = Input.nextInt();

        System.out.println(numFloors);
        System.out.println(numRoom);
        String[][] name = new String[numFloors][numRoom];

        for(int i =0; i<numFloors; i++){
            for(int j=0; j<numRoom; j++){
                System.out.print(name[i][j]+ " ");
            }
            System.out.println();
        }

        //buy
        System.out.print("Please enter the number of floors: ");
        int chooseFloor = Input.nextInt()-1;

        System.out.print("Please enter the number of Room: ");
        int chooseRoom = Input.nextInt()-1;

        Input.nextLine();
        System.out.print("Enter Owner: ");
        String Name=Input.nextLine();

        for(int i =0; i<numFloors; i++){
            for(int j=0; j<numRoom; j++){
               name[chooseFloor][chooseRoom]=Name;
            }
            System.out.println();
        }

        //display
        for(int i =0; i<numFloors; i++){
            for(int j=0; j<numRoom; j++){
                System.out.print(name[i][j]+ " ");
            }
            System.out.println();
        }

        //sell
//        System.out.print("Please enter the number of floors: ");
//        int sellFloor = Input.nextInt()-1;
//
//        System.out.print("Please enter the number of Room: ");
//        int sellRoom = Input.nextInt()-1;
//
//        for(int i =0; i<sellFloor; i++){
//            for(int j=0; j<sellRoom; j++){
//                name[sellFloor][sellRoom]=null;
//
//            }
//            System.out.println();
//        }
//        //display
//        for(int i =0; i<numFloors; i++){
//            for(int j=0; j<numRoom; j++){
//                System.out.print(name[i][j]+ " ");
//            }
//            System.out.println();
//        }



        //search
        System.out.print("Please enter the number of floors: ");
        int searchFloor = Input.nextInt()-1;

        System.out.print("Please enter the number of Room: ");
        int searchRoom = Input.nextInt()-1;

        System.out.println(name[searchFloor][searchRoom]);


        //search name
        Input.nextLine();
        System.out.print("Enter Name for Search: ");
        String NameEnter = Input.nextLine();
        for (int z = 0; z < numFloors; z++) {
            for (int j = 0; j < numRoom; j++) {
                if (!(name[z][j]==null)){
                    int showfloor =z+1;
                    int showroom=j+1;
                    if (name[z][j].equals(NameEnter)){
                        System.out.println("Owner:"+name[z][j]);
                        System.out.println("Floor:"+showfloor);
                        System.out.println("Room:"+showroom);
                    }
                }

            }
        }

    }
}
