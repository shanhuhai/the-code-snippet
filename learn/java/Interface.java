public class Interface 
{
    public static void main(String[] args)
    {
        System.out.println("Interface"); 
        MusicCup cup =  new MusicCup();
        cup.addWater(5);
        cup.play();
    }
}

interface Cup {
    void addWater(int w);
    void drinkWater(int w);
}

interface MusicPlayer 
{
    void play();
}

class MusicCup implements Cup, MusicPlayer
{

    public void addWater(int w){
        this.water = this.water +w; 
    }

    public void drinkWater(int w)
    {
        this.water = this.water - w; 
    }

    public void play()
    {
        System.out.println("playing.at.water."+this.water);
    }

    private int water = 0;
}
