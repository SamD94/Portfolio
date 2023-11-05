public class Person {
    private String name;
    private Person child;
    private int begatAge;
    private int bearingAge;
    private int deathAge;
    private Boolean translated;

    public String getName() {
        return name;
    }
    public String getChildName() {
        return child.getName();
    }
    public void setChild(Person c) {
        child = c;
    }
    public int getBegatAge() {
        return begatAge;
    }
    public int getBearingAge() {
        return bearingAge;
    }
    public int getDeathAge() {
        return deathAge;
    }
    public Boolean isTranslated() {
        return translated;
    }

    Person(String n, int b, int bb, int d) {
        name = n;
        child = null;
        begatAge = b;
        bearingAge = bb;
        deathAge = d;
        translated = false;
    }
    Person(String n, Person c, int b, int bb, int d) {
        name = n;
        child = c;
        begatAge = b;
        bearingAge = bb;
        deathAge = d;
        translated = false;
    }
    Person(String n, int b, int bb, int d, Boolean t) {
        name = n;
        child = null;
        begatAge = b;
        bearingAge = bb;
        deathAge = d;
        translated = t;
    }
    Person(String n, Person c, int b, int bb, int d, Boolean t) {
        name = n;
        child = c;
        begatAge = b;
        bearingAge = bb;
        deathAge = d;
        translated = t;
    }
}
