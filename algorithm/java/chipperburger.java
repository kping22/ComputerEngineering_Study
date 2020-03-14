import java.util.Scanner;

/**
 * chipperburger
 */
public class chipperburger {
    public static void main(String[] args) {
        int[] burgers = new int[3];
        int[] drinks = new int[2];
        int[] price = new int[6];
        int k = 0, min=0;

        Scanner sc = new Scanner(System.in);

        for(int i=0; i<3; i++) 
            burgers[i] = sc.nextInt();
        for(int i=0; i<2; i++) {
            drinks[i] = sc.nextInt();
        }
        for(int i=0; i<3; i++) {
            for(int j=0; j<2; j++) {
               price[k] = burgers[i] + drinks[j] - 50;
               k++;
            }
        }
        min = price[0];
        for(int i=1; i<6; i++) {
            if(min > price[i])
                min = price[i];
        }
        System.out.println(min);
    }
}