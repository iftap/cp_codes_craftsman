using System;

namespace Lab_03
{
    class Circle
    {
        public int CircleID;
        public double Diameter;
    }

    class Rectangle
    {
        public int RectangleID;
        public double Height;
        public double Width;
    }

    class Cube
    {
        public int CubeID;
        public double Height;
        public double Width;
        public double Depth;
    }

    class Program
    {
        public static void Main(string[] args)
        {
            Circle[] circleArea = new Circle[100];
            Rectangle[] rectangleArea = new Rectangle[100];
            Cube[] cubeArea = new Cube[100];

            int circleCount = 0, rectangleCount = 0, cubeCount = 0;

            while (true)
            {
                Console.WriteLine("\nMenu:");
                Console.WriteLine("1. Add a Circle");
                Console.WriteLine("2. Add a Rectangle");
                Console.WriteLine("3. Add a Cube");
                Console.WriteLine("4. List Items");
                Console.WriteLine("5. Exit");
                Console.Write("Enter your choice: ");

                if (!int.TryParse(Console.ReadLine(), out int choice))
                {
                    Console.WriteLine("Invalid input. Please enter a number.");
                    continue;
                }

                switch (choice)
                {
                    case 1:
                        if (circleCount < 100)
                        {
                            circleArea[circleCount] = new Circle();
                            Console.Write("Enter Circle ID: ");
                            circleArea[circleCount].CircleID = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Enter Circle Diameter: ");
                            circleArea[circleCount].Diameter = Convert.ToDouble(Console.ReadLine());
                            circleCount++;
                        }
                        else
                        {
                            Console.WriteLine("Circle storage is full.");
                        }
                        break;

                    case 2:
                        if (rectangleCount < 100)
                        {
                            rectangleArea[rectangleCount] = new Rectangle();
                            Console.Write("Enter Rectangle ID: ");
                            rectangleArea[rectangleCount].RectangleID = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Enter Rectangle Height: ");
                            rectangleArea[rectangleCount].Height = Convert.ToDouble(Console.ReadLine());
                            Console.Write("Enter Rectangle Width: ");
                            rectangleArea[rectangleCount].Width = Convert.ToDouble(Console.ReadLine());
                            rectangleCount++;
                        }
                        else
                        {
                            Console.WriteLine("Rectangle storage is full.");
                        }
                        break;

                    case 3:
                        if (cubeCount < 100)
                        {
                            cubeArea[cubeCount] = new Cube();
                            Console.Write("Enter Cube ID: ");
                            cubeArea[cubeCount].CubeID = Convert.ToInt32(Console.ReadLine());
                            Console.Write("Enter Cube Height: ");
                            cubeArea[cubeCount].Height = Convert.ToDouble(Console.ReadLine());
                            Console.Write("Enter Cube Width: ");
                            cubeArea[cubeCount].Width = Convert.ToDouble(Console.ReadLine());
                            Console.Write("Enter Cube Depth: ");
                            cubeArea[cubeCount].Depth = Convert.ToDouble(Console.ReadLine());
                            cubeCount++;
                        }
                        else
                        {
                            Console.WriteLine("Cube storage is full.");
                        }
                        break;

                    case 4:
                        Console.WriteLine("\n--- Circle List ---");
                        Console.WriteLine("ID       Type       Dimension");
                        Console.WriteLine("=============================");
                        for (int i = 0; i < circleCount; i++)
                        {
                            Console.WriteLine($"{circleArea[i].CircleID,-8} Circle    {circleArea[i].Diameter}");
                        }

                        Console.WriteLine("\n--- Rectangle List ---");
                        Console.WriteLine("ID       Type       Dimension");
                        Console.WriteLine("=============================");
                        for (int i = 0; i < rectangleCount; i++)
                        {
                            Console.WriteLine($"{rectangleArea[i].RectangleID,-8} Rect      {rectangleArea[i].Height} x {rectangleArea[i].Width}");
                        }

                        Console.WriteLine("\n--- Cube List ---");
                        Console.WriteLine("ID       Type       Dimension");
                        Console.WriteLine("=============================");
                        for (int i = 0; i < cubeCount; i++)
                        {
                            Console.WriteLine($"{cubeArea[i].CubeID,-8} Cube      {cubeArea[i].Height} x {cubeArea[i].Width} x {cubeArea[i].Depth}");
                        }
                        break;

                    case 5:
                        Console.WriteLine("Exiting...");
                        return;

                    default:
                        Console.WriteLine("Invalid choice. Please try again.");
                        break;
                }
            }
        }
    }
}
