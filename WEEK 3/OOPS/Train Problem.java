import java.util.Random;

// Interface
interface Compartment {
    void notice();
}

// FirstClass class
class FirstClass implements Compartment {
    public void notice() {
        System.out.println("First Class Compartment");
    }
}

// Ladies class
class Ladies implements Compartment {
    public void notice() {
        System.out.println("Ladies Compartment");
    }
}

// General class
class General implements Compartment {
    public void notice() {
        System.out.println("General Compartment");
    }
}

// Luggage class
class Luggage implements Compartment {
    public void notice() {
        System.out.println("Luggage Compartment");
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        Random rand = new Random();

        Compartment[] c = new Compartment[10];

        for (int i = 0; i < 10; i++) {

            int r = rand.nextInt(4) + 1;

            if (r == 1)
                c[i] = new FirstClass();
            else if (r == 2)
                c[i] = new Ladies();
            else if (r == 3)
                c[i] = new General();
            else
                c[i] = new Luggage();

            c[i].notice();
        }
    }
}
