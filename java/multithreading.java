//we can give priority to our fav thread in java
//the default priorities are
//MAX Priority = 10;  it is the highest priority
//MIN Priority = 1;
//NORM Priority = 5;


class priority1 extends Thread{

    @Override
    public void run() {
        int i=0;
        while (i<3) {
            System.out.println("*SAD* MINIMUN P");
        }
    }
}
class priority2 extends Thread{
    public void run(){
        int i=0;
        while(i<3)
        {
            System.out.println("*HAPPY* NORMAL P");
        }
    }
}
class priority3 extends Thread{
public void run(){
   int i=0;
    while(i<3)
    {
        System.out.println("*EXCITED* MAXIMUM P");
    }
}
}
public class priority {
public static void main(String[] args) {
    priority1 p1 = new priority1();
    priority2 p2 = new priority2();
    priority3 p3 = new priority3();
    p1.setPriority(Thread.MIN_PRIORITY);
    p2.setPriority(Thread.NORM_PRIORITY);
    p3.setPriority(Thread.MAX_PRIORITY);
    p1.start();
    p2.start();
    p3.start();
}

}
Footer
