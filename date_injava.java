class Date{
    private int day;
    private int month;
    private int year;

    Date() {
        this.day = 0;
        this.month = 0;
        this.year = 0;
    }

    Date(int day,int month) {
        this.day = day;
        this.month = month;
    }

    Date(int day,int month,int year) {
        this(day, month);
        this.year = year;
    }
    public void print(int day,int month,int year) {
        System.out.println("Today's Date is:- " + day + "/"+ month + "/" + year);
    }
}

public class date_injava{
    public static void main(String[] args) {
        Date date = new Date();
        date.print(6, 9, 2022);
    }
}
