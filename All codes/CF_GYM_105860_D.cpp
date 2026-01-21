using System;
public class ani
{
    public int id;
    public string type;
    public float ft;
    public int egg;
    public ani(int id, string type, float ft, int egg)
    {
        this.id = id;
        this.type = type;
        this.ft = ft;
        this.egg = egg;
    }
}

class program
{
    public static void Main()
    {
        List<ani> anima = new List<ani>();
        int id = 1;
        while (id<=100)
        {
            Console.WriteLine("1. Add Cow\n2. Add Chicken\n3. Add Sheep\n4. List Animal\n5. Search Animal By ID\n6. Delete Animal by ID\n7.Get Statistics\n8. Exit");
            int n = Convert.ToInt32(Console.ReadLine());
            if (n == 1)
            {
                Console.WriteLine("Milk/day : ");
                float tt = Convert.ToSingle(Console.ReadLine());
                anima.Add(new ani(id,"Cow",tt,0));
                id++;
            }
            if(n == 2)
            {
                Console.WriteLine("Eggs/day : ");
                int tt = Convert.ToInt32(Console.ReadLine());
                anima.Add(new ani(id, "Chicken", 0, tt));
                id++;
            }
            if (n == 3)
            {
                Console.WriteLine("Wools/month : ");
                float tt = Convert.ToSingle(Console.ReadLine());
                anima.Add(new ani(id, "Sheep", tt, 0));
                id++;
            }
            if (n == 4)
            {
                Console.WriteLine("ID     Type            Info\n_____________________________");
                foreach(ani a in anima)
                {
                    if(a.type == "Cow")
                    {
                        Console.WriteLine(a.id + "     " + a.type+"         MIlk/day: " + a.ft);
                    }
                    if(a.type == "Chicken")
                    {
                        Console.WriteLine(a.id + "     " + a.type+"     Eggs/day: " + a.egg);
                    }
                    if(a.type == "Sheep") {
                        Console.WriteLine(a.id + "     " + a.type + "       Wool/day: " + a.ft);
                    }

                }
            }
            if (n == 5)
            {
                Console.WriteLine("Enter id to search : ");
                int k = Convert.ToInt32(Console.ReadLine());
                var result = anima.Find(a => a.id == k);
                if(result != null)
                {
                    Console.WriteLine($"Found:\nID: {result.id} \nType: {result.type}");
                    if (result.type == "Cow")
                    {
                        Console.WriteLine("MIlk/day: " + result.ft);
                    }
                    if (result.type == "Chicken")
                    {
                        Console.WriteLine("Eggs/day: " + result.egg);
                    }
                    if (result.type == "Sheep")
                    {
                        Console.WriteLine("Wool/day: " + result.ft);
                    }

                }
                else
                {
                    Console.WriteLine("not found");
                }
            }
            if (n == 6)
            {
                Console.WriteLine("Enter id to delete : ");
                int k = Convert.ToInt32(Console.ReadLine());
                var result = anima.Find(a => a.id == k);
                if(result != null)
                {
                    anima.Remove(result);
                    Console.WriteLine("animal deleted");
                }
                else
                {
                    Console.WriteLine("Animal not found.");
                }
            }
            if(n == 7)
            {
                int ttl=0,cw = 0, cc = 0, sc = 0, eggs = 0;
                float milk = 0, wool = 0;
                foreach(var a in anima)
                {
                    ttl++;
                    if (a.type == "Cow")
                    {
                        cw++;
                        milk += a.ft;
                    }
                    if (a.type == "Chicken")
                    {
                        cc++;
                        eggs += a.egg;
                    }
                    if (a.type == "Sheep")
                    {
                        sc++;
                        wool += a.ft;
                    }
                }
                Console.WriteLine("Total Animals: " + ttl);
                Console.WriteLine("Cows: " + cw);
                Console.WriteLine("Chickens: "+cc);
                Console.WriteLine("Sheeps: "+sc+"\n");
                Console.WriteLine("Total Milk/day: " + milk + " L");
                Console.WriteLine("Total Eggs/day: " + eggs);
                Console.WriteLine("Total Wool/month: " + wool + " kg\n");
                float cwww = (float)cw / ttl * 100;
                float ccc = (float)cc / ttl * 100;
                float www = (float)sc / ttl*100;
                Console.WriteLine("Cows: " + cwww + "%");
                Console.WriteLine("Chickens: "+ ccc + "%");
                Console.WriteLine("Sheep: "+ www + "%");


            }
            if (n == 8)
            {
                Console.WriteLine("Exited Succesfully");
                break;
            }

        }
    }
}