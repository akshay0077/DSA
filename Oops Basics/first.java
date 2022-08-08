public class first {
    public static void main(String[] args) {
    System.out.println("Hello world");

    person p1 = new person();
    p1.age = 22;
    p1.name = "prathvik";
    p1.PrintData();
    }
}

class person {
    String name;
    int age;

    public void PrintData()
    {
        System.out.println(this.age + " " + this.name);
    }
}