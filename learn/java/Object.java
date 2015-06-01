public class Object
{
    public static void main( String[] args)
    {
        Human aPerson = new Human(173); 
        Human bPerson = new Human(172, "shit");
        aPerson.breath();
        System.out.println(aPerson.height);
        System.out.println("grow height");
        aPerson.growHeight(6);
        
        System.out.println(aPerson.getHeight());
        System.out.println(aPerson.getWeight());
        System.out.println("begin breath");
        aPerson.repeatBreath( 10 );

    }
    
}

class Human
{
    int  height = 175;
    int  weight = 130;

    Human(int h)
    {
        this.height = h; 
        System.out.println("I am born"); 
    }

    Human(int h, String s)
    {
        this.height = h; 
        System.out.println("I am born,"+s); 
    }

    void breath()
    {
        System.out.println("Hu----"); 
    }

    int getHeight()
    {
        return this.height; 
    }

    void growHeight(int h){
        this.height = this.height + h; 
    }

    int getWeight()
    {
        return weight; 
    }

    void repeatBreath(int rep)
    {
        int i;
        for(i =0; i< rep; i++){
            this.breath(); 
        } 
    }

}
