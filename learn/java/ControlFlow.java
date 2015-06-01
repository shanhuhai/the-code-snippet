public class ControlFlow
{
    public static void main(String[] args){
        System.out.println("if  else:");
        int year = 5; 
        if(year > 5) {
            System.out.println(year+"large than 5");
        } else if (year == 5) {
            System.out.println(year+" equal to 5");
        } else {
            System.out.println(year+" less than 5");
        }
        int i = 0;
        while(i < 10){
            System.out.println("current i "+i);
            i++;
        }

        i = 0;
        
        do {
            System.out.println("current i "+i);
            i++;
        } while(i< 10);


        int total = 0;
        i = 1; 
        while(i<= 999){
            total += i; 
            i++;
        } 

        System.out.println("1+2+ ..+999 total "+total);
       
    
    }

}
