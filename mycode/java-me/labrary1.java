import java.util.*;
class library{
    String [] books;
     int listnoofbooks;
     int noofbooks=0;
    library(){
        this.books=new String[100];
        this.noofbooks=0;
    }
    void addbook(String book){

        this.books[noofbooks]=book;
       noofbooks ++;
        System.out.println(book+ "has been added");
    }
    void showavailablebooks(){
        System.out.println("available book are:");
        for(String book : this.books){              // foreachloop
            if(book == null){
              continue;
            }
            System.out.println("*"+book);
        }
    }
    void issuebook(String book){
        for(int i=0; i<this.books.length; i++){
            if(this.books[i].equals(book)){
                System.out.println("the book has been issued");
                this.books[i]=null;
                return;
            }
        }
        System.out.println("this book does not exist");
    }
    void returnbook(String book){
        addbook(book);
    }
}
public class labrary1{
    public static void main(String args[]){
        library lab=new library();
        lab.addbook("jma book");
        lab.addbook("c++");
        lab.addbook("java");
        lab.addbook("dbms");
        lab.addbook("dsa");
        lab.showavailablebooks();
        //lab.issuebook("jocks");

    }
}