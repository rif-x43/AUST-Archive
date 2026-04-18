package arena;

public class BeginnerMember extends ArenaMember {

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