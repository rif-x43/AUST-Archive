package arena;

public class AdvancedMember extends ArenaMember {

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