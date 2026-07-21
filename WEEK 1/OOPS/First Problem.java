// Interface
interface LibraryUser {
    void registerAccount();
    void requestBook();
}

// KidUser class
class KidUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age < 12)
            System.out.println("Kids Account Registered");
        else
            System.out.println("Age must be less than 12");
    }

    public void requestBook() {
        if (bookType.equals("Kids"))
            System.out.println("Book Issued for 10 days");
        else
            System.out.println("Only Kids books allowed");
    }
}

// AdultUser class
class AdultUser implements LibraryUser {
    int age;
    String bookType;

    public void registerAccount() {
        if (age > 12)
            System.out.println("Adult Account Registered");
        else
            System.out.println("Age must be greater than 12");
    }

    public void requestBook() {
        if (bookType.equals("Fiction"))
            System.out.println("Book Issued for 7 days");
        else
            System.out.println("Only Fiction books allowed");
    }
}

// Main class
public class Main {
    public static void main(String[] args) {

        KidUser k = new KidUser();
        k.age = 10;
        k.registerAccount();

        k.bookType = "Kids";
        k.requestBook();

        System.out.println();

        AdultUser a = new AdultUser();
        a.age = 23;
        a.registerAccount();

        a.bookType = "Fiction";
        a.requestBook();
    }
}
