package arena;

import java.util.Scanner;
import java.util.Arrays;

public class ArenaSystem {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Rankable[] members = new Rankable[4];

        // Input Members
        for (int i = 0; i < 4; i++) {
            System.out.println("Enter Member " + (i + 1) + " Info:");

            System.out.print("ID: ");
            String id = sc.nextLine();

            System.out.print("Handle: ");
            String handle = sc.nextLine();

            System.out.print("Rating: ");
            int rating = sc.nextInt();

            System.out.print("Total Solved: ");
            int solved = sc.nextInt();
            sc.nextLine();

            // Auto classification based on rating
            if (rating < 1600) {
                members[i] = new BeginnerMember(id, handle, rating, solved);
            } else {
                members[i] = new AdvancedMember(id, handle, rating, solved);
            }
        }

        // Leaderboard
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
