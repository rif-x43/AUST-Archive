package arena;

public abstract class ArenaMember implements Rankable {
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

    // Ranking
    public String getRank() {
        if (rating >= 2400) return "Grandmaster";
        else if (rating >= 2100) return "Master";
        else if (rating >= 1900) return "Candidate Master";
        else if (rating >= 1600) return "Expert";
        else if (rating >= 1400) return "Specialist";
        else return "Pupil";
    }
}
