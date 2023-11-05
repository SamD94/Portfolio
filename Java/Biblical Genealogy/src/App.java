public class App {
    public static void main(String[] args) throws Exception {
        Person abraham = new Person("Abraham", 100,75,175);
        Person terah = new Person("Terah", abraham, 70, 135, 205);
        Person nahor = new Person("Nahor", terah, 29, 119, 148);
        Person serug = new Person("Serug", nahor, 30, 200, 230);
        Person reu = new Person("Reu", serug, 32, 207, 239);
        Person peleg = new Person("Peleg", reu, 30, 209, 239);
        Person eber = new Person("Eber", peleg, 34, 430, 464);
        Person salah = new Person("Salah", eber, 30, 403, 433);
        Person arphaxad = new Person("Arphaxad", salah, 35, 403, 438);
        Person shem = new Person("Shem", arphaxad, 100, 500, 600);
        Person noah = new Person("Noah", shem, 442, 350, 950);
        Person lamech = new Person("Lamech", noah, 182, 595, 777);
        Person methuselah = new Person("Methuselah", lamech, 187, 782, 969);
        Person enoch = new Person("Enoch", methuselah, 65, 300, 465, true);
        Person jared = new Person("Jared", enoch, 162, 800, 962);
        Person mahalaleel = new Person("Mahalaleel", jared, 65, 830, 895);
        Person cainan = new Person("Cainan", mahalaleel, 70, 840, 910);
        Person enos = new Person("Enos", cainan, 90, 815, 905);
        Person seth = new Person("Seth", enos, 105, 807, 912);
        Person adam = new Person("Adam", seth, 130, 800, 930);

        displayGenealogy(adam);
    }
    public static void displayGenealogy(Person p) {
        System.out.println("And " + p.getName() + " lived " + p.getBegatAge() + " years, and begat " + p.getChildName() + ":");
        System.out.println("And " + p.getName() + " lived after he had begotten " + p.getChildName() + " " + p.getBearingAge() + " years, and begat sons and daughters:");
        System.out.println("And all the days of " + p.getName() + " were " + p.getDeathAge() + (p.isTranslated() ? " years: and " + p.getName() + " walked with God: and he was not; for God took him." : " years: and he died."));
    }
}
