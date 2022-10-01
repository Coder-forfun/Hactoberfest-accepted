package OOPS;
import java.util.Scanner;

 class vaccine {
 String name;
 int vid;
 int age;
 
  vaccine(String name, int vid, int age){

    this.name=name;
    this.vid= vid;
    this.age=age;

  }

  void displayvacc(){
   Scanner s = new Scanner(System.in);
   String name= s.next();
   int vid =s.nextInt();int age= s.nextInt();
   System.out.println("Name"+name+" Vaccine id"+vid+" Age"+age);


  }

  void display_details(){
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter which vaccine you want to inject");
    String vcc = sc.next();
    System.out.println("Enter details of patient");
    int contact= sc.nextInt();
    String address= sc.next();
    String name= sc.next();
    System.out.println("Details of the patient are: ");
    System.out.println("Name" +name+"Address"+address+"Phone"+contact+"Vaccine"+ vcc);

  }
 }

 class healthcare{

    String Hname;
    int code;
    String address;
    vaccine v;

    healthcare(String Hname, int code,String address){

        this.Hname = Hname;
        this.code = code;
        this.address = address;
    }

    void display_Health(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Details of health care centre");
        String Hname= sc.next();
        int code = sc.nextInt();
        String address = sc.next();
        System.out.println("Name"+ Hname+" code"+ code+"Address"+address);

    }
 }

 class firstdose extends vaccine{

    String fname;
    int fid;

    firstdose(String name,int vid,int age, String fname, int fid){
        super(name,vid,age);

        this.fname = fname;
        this.fid = fid;
    }

    void displaydose(){

        System.out.println("Details of first does are ");

        Scanner sc = new Scanner(System.in);
        String fname=sc.next();
        int fid = sc.nextInt();

        System.out.println("Vaccing Name"+ fname+"ID"+ fid);

    }
 }

 class seconddose extends vaccine{

    String sname;
    int sid;

    seconddose(String name,int vid,int age, String sname, int sid){
        super(name,vid,age);

        this.sname = sname;
        this.sid = sid;
    }

    void displaydose(){

        System.out.println("Details of Second does are ");

        Scanner sc = new Scanner(System.in);
        String sname=sc.next();
        int sid = sc.nextInt();

        System.out.println("Vaccing Name of second dose"+ sname+"ID"+ sid);
        
    }
 }

 class who{

    int id;
    String address;

    who(int id, String address){

        this.id = id;
        this.address = address;
    }

    void displayStatistics(){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of health care Centre");
        int num =sc.nextInt();
        System.out.println("Total number of health care centre:"+ num);
        System.out.println("Patient vaccine details");
        System.out.println("Details of first dose");

    }
 }

class main{
    public static void main(String[] args) {
       
        vaccine v1 = new vaccine("Rohan",47,20);
        healthcare h1 = new healthcare("Sv Hospital",3,"Vidhyanagar");
        firstdose f1 = new firstdose("Rohan",47,20,"Covaccine",1);
        seconddose s1 = new seconddose("Rohan",47,20,"Covaccine",2);
        who w =new who(1,"USA");
    
        System.out.println("Details of vaccine");
        v1.display_details();
        // System.out.println("Details of healthcare centres");
        // h1.display_Health();
        // System.out.println("Details of first and second dose");
        // f1.displaydose();
        // s1.displaydose();
        // System.out.println("Statics of vaccine");
        // w.displayStatistics();
    

    }





}
