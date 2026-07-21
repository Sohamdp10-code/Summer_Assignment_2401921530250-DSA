// Interface
interface Playable {
    void play();
}

// Veena class
class Veena implements Playable {
    public void play() {
        System.out.println("Playing Veena");
    }
}

// Saxophone class
class Saxophone implements Playable {
    public void play() {
        System.out.println("Playing Saxophone");
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        Veena v = new Veena();
        v.play();

        Saxophone s = new Saxophone();
        s.play();

        // Runtime Polymorphism
        Playable p;

        p = v;
        p.play();

        p = s;
        p.play();
    }
}
