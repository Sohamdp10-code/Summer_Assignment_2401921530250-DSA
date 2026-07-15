class Point {

    private int x;
    private int y;

    Point() {
        x = 0;
        y = 0;
    }

    Point(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void setX(int x) {
        this.x = x;
    }

    void setY(int y) {
        this.y = y;
    }

    void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }

    void display() {
        System.out.println("X = " + x + " Y = " + y);
    }
}

public class Main {

    public static void main(String[] args) {

        Point p = new Point();

        p.setXY(10,20);

        p.display();
    }
}
