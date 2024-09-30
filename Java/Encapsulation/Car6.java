package Encapsulation;

public class Car6 {

    private String make;
    private String model;
    private int year;

    Car6(String make, String model, int year) {
        /*this.make = make;
        this.model = model;
        this.year = year;*/

        this.setMake(make);//using setters
        this.setModel(model);
        this.setYear(year);
    }

    //Getters
    public String getMake() {
        return make;
    }
    public String getModel() {
        return model;
    }
    public int getYear() {
        return year;
    }

    //Setters
    public void setMake(String make) {
        this.make = make;
    }
    public void setModel(String model) {
        this.model = model;
    }
    public void setYear(int year) {
        this.year = year;
    }

}
