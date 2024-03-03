import java.util.Scanner;
// Simple Inheritance
class Calculator {
    protected double a, b;

    public void add(double a, double b) {
        System.out.println("a+b: " + (a + b));
    }

    public void sub(double a, double b) {
        System.out.println("a-b: " + (a - b));
    }
}

class AdvCalculator extends Calculator {
    public void mul(double a, double b) {
        System.out.println("a*b: " + (a * b));
    }

    public void div(double a, double b) {
        System.out.println("a/b: " + (a / b));
    }
}

// Multiple Inheritance not possible in java
// Hierarchical Inheritance
class Rajamouli {
    public void displayRajamouli() {
        System.out.println("I'm Rajamouli");
    }
}

class Chatrapathi extends Rajamouli {
    public void displayChatrapathi() {
        displayRajamouli();
        System.out.println("I'm the director of Chatrapthi");
    }
}

class Bahubali extends Rajamouli {
    public void displayBahubali() {
        displayRajamouli();
        System.out.println("I'm the director of Bahubali");
    }
}

class RRR extends Rajamouli {
    public void displayRRR() {
        displayRajamouli();
        System.out.println("I'm the director of RRR");
    }

}

// Multilevel Inheritance
class Egg {
    public void displayEgg() {
        System.out.println("I'm an egg");
    }
}

class Hen extends Egg {
    public void displayHen() {
        System.out.println("I'm the hen who is the next version of the egg");
    }
}

class Chicken extends Hen {
    public void displayChicken() {
        displayEgg();
        displayHen();
        System.out.println("I'm the chicken... my journey started with egg --> hen --> chicken");
    }
}

//Hybrid inheritance is not possible in java

public class Program7 {
    public static void main(String[] args) {
        AdvCalculator obj1 = new AdvCalculator();
        System.out.println("--------------------------------------------------------------------------------->");
        System.out.println("Simple Inheritance: ");
        System.out.println("Enter the operands: ");
        Scanner scanner = new Scanner(System.in);
        obj1.a = scanner.nextDouble();
        obj1.b = scanner.nextDouble();
        obj1.add(obj1.a, obj1.b);
        obj1.sub(obj1.a, obj1.b);
        obj1.mul(obj1.a, obj1.b);
        obj1.div(obj1.a, obj1.b);
        System.out.println("----------------------------------------------------------------------------------------------------->");
        System.out.println("Hierarchical Inheritance: ");
        Chatrapathi obj3 = new Chatrapathi();
        obj3.displayChatrapathi();
        Bahubali obj4 = new Bahubali();
        obj4.displayBahubali();
        RRR obj5 = new RRR();
        obj5.displayRRR();
        System.out.println("----------------------------------------------------------------------------------------------------->");
        System.out.println("MultiLevel Inheritance: ");
        Chicken obj6 = new Chicken();
        obj6.displayChicken();
        System.out.println("----------------------------------------------------------------------------------------------------->");
        scanner.close();
    }
}
