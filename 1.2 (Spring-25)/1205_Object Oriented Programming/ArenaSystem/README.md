
# ArenaSystem

This is a simple **Java console program** for my **1205 Object Oriented Programming** course's assignment.

It demonstrates:
- `interface` (Rankable)
- `abstract class` (ArenaMember)
- inheritance (`BeginnerMember`, `AdvancedMember`)
- method overriding
- sorting using `Arrays.sort(...)`

## How to run

1. Create a file named **Main.java**
2. Copy the code below into **Main.java**
3. Compile and run:

```bash
javac Main.java
java Main
```

## Input format

The program reads **4 members**. For each member, enter:

1. ID (line)
2. Handle (line)
3. Rating (integer)
4. Total solved (integer)

Repeat that 4 times.

## Output

Prints an **Arena Leaderboard** sorted by calculated score (highest first), and shows each member’s rank and tier.

---

## You can copy this code and run in any IDE

```java
import java.util.Scanner;
import java.util.Arrays;

interface Rankable {
    double calculateScore();
}

abstract class ArenaMember implements Rankable {
    protected String id;
    protected String handle;
    protected int rating;
    protected int totalSolved;

    public ArenaMember(String id, String handle, int rating, int totalSolved) {
        this.id = id;
        this.handle = handle;
        this.rating = rating;
        this.totalSolved = totalSolved;
    }

    public void displayInfo() {
        System.out.println("ID: " + id);
        System.out.println("Handle: " + handle);
        System.out.println("Rating: " + rating);
        System.out.println("Solved: " + totalSolved);
        System.out.println("Rank: " + getRank());
    }

    public String getRank() {
        if (rating >= 2400) return "Grandmaster";
        else if (rating >= 2100) return "Master";
        else if (rating >= 1900) return "Candidate Master";
        else if (rating >= 1600) return "Expert";
        else if (rating >= 1400) return "Specialist";
        else return "Pupil";
    }
}

class BeginnerMember extends ArenaMember {
    public BeginnerMember(String id, String handle, int rating, int totalSolved) {
        super(id, handle, rating, totalSolved);
    }

    @Override
    public double calculateScore() {
        return totalSolved * 2.0;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Tier: Beginner Level");
    }
}

class AdvancedMember extends ArenaMember {
    public AdvancedMember(String id, String handle, int rating, int totalSolved) {
        super(id, handle, rating, totalSolved);
    }

    @Override
    public double calculateScore() {
        return rating * 1.5;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Tier: Advanced Level");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Rankable[] members = new Rankable[4];

        for (int i = 0; i < 4; i++) {
            String id = sc.nextLine();
            String handle = sc.nextLine();
            int rating = sc.nextInt();
            int solved = sc.nextInt();
            sc.nextLine();

            if (rating < 1600) {
                members[i] = new BeginnerMember(id, handle, rating, solved);
            } else {
                members[i] = new AdvancedMember(id, handle, rating, solved);
            }
        }

        Arrays.sort(members, (a, b) ->
                Double.compare(b.calculateScore(), a.calculateScore())
        );

        System.out.println("\n===== Arena Leaderboard =====");
        int position = 1;
        for (Rankable member : members) {
            System.out.println("Position #" + position++);
            ((ArenaMember) member).displayInfo();
            System.out.println("Score: " + member.calculateScore());
            System.out.println("----------------------");
        }
        sc.close();
    }
}
```
