using System;

public class Person
{
    public string name;

    public int age;

    private char gender;

    public Person(){}

    public Person(string name, int age, char gender)
    {
        this.name = name;
        this.age = age;
        this.setGender(gender);
    }

    public override string ToString()
    {
        return "Name: " +
        this.name +
        "\nAge: " +
        this.age +
        "\nGender: " +
        this.getGender() +
        '\n';
    }

    public string getGender()
    {
        if (this.gender == 'F')
            return "Female";
        else if (this.gender == 'M') return "Male";

        return "Undefined";
    }

    public void setGender(char gender)
    {
        gender = Char.ToUpper(gender);

        if (gender != 'F' && gender != 'M') gender = 'N';

        this.gender = gender;
    }
}

class Program
{
    static void Main(string[] args)
    {
        Person p = new Person();

        Console.Write("Enter your name: ");
        p.name = Console.ReadLine();

        Console.Write("Enter your age: ");
        p.age = Convert.ToInt32(Console.ReadLine());

        Console.Write("Enter your gender: ");
        char gender = Convert.ToChar(Console.ReadLine());
        p.setGender (gender);

        Console
            .WriteLine("\nYour name is " +
            p.name +
            " and you're " +
            p.age +
            " years old\n");

        Console.WriteLine(p.ToString());
    }
}
