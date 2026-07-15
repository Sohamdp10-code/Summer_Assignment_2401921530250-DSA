class Box {

    int length;
    int breadth;

    Box(int l, int b) {
        length = l;
        breadth = b;
    }

    int area() {
        return length * breadth;
    }
}

class Box3D extends Box {

    int height;

    Box3D(int l, int b, int h) {

        super(l,b);

        height = h;
    }

    int volume() {

        return length * breadth * height;

    }
}

public class Main {

    public static void main(String[] args) {

        Box3D obj = new Box3D(5,4,3);

        System.out.println("Area = " + obj.area());

        System.out.println("Volume = " + obj.volume());

    }
}
