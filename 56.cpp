 #include<iostream>
 using namespace std;
 class AbstractEmployee{
   virtual void AskForPromotion() =0;
   // this function is pure virtual function or abstract function
   // this means who so ever signs the contract for this abstract class employee 
   // has to implement this pure virtual function
   

 };
 class Employee:AbstractEmployee

 { // our employee calss has three attributes
 //all things by default are private
 // access modifiers 1. Private(accesed only class) 2. Public(accessed by everyone) 3. Protected
 private:
   
    string Company;
    int Age;
    protected :
     string Name;

    // to interact with these we have to use getters and setters

public:
    void setName(string name){
        Name = name;
    }
    string getName(){
        return Name;
    }
    // these methods are public so can be accessded
    void setCompany(string company){
        Company= company;

    }
    string getCompany(){
        return Company;
    } 
   
    
     
    void setAge(int age){
        if(age>=18)
        Age = age;
    }
    int  getAge()
    {
        return Age;
    }
    void IntroduceYourself(){
        cout<<"Name"<<Name<<endl;
        cout<<"Company"<<Company<<endl;
        cout<<"Age"<<Age<<endl;
    }
    void AskForPromotion(){
    if(Age>30)
        cout<<Name<<"got promoted"<<endl;
    else 
    cout<<Name <<" sorry NO promotion for you!"<<endl;
   }
  virtual void work(){
     cout<<Name<<"is checking email, task backlog , performing those tasks"<<endl;
   }
    // a constructer is special kind of method that is
    // invoked each time the object is created
    /* Default constructor - if we don't create our own constructor
    ....the compiler give us a constructor by default*/
    // creating a constructor : does not have  a return type unlike methods
                            // : Same name of class
                           //  need to be necessary be public .. sometimes may use private keyword as well
    Employee(string name , string company , int age){
        Name = name;
        Company = company;
        Age = age;
        // when we decide to make our own comstructor 
        // .....we loose our default constructor




    } 
    /* oops : encapsulation , Abstraction ,
     Inheritance and Polymorphism
     Encapsulation .....The idea of binding the data together within a class
    .....................so as to prevent direct access of our data from outside the class
    to provide a way in which other classes can interact with my calss objects is done ny Ecapsulation
    encapsulated properpities of a class can be accessd through methods getters and setters
     ABSTRACTION------- hiding the complex info and showing only relevant info
    is called abstraction------there's provide a basic interface
    ---------IN C++ WE CAN SIMULATE BEHAVIOUR OF INTERFACE BY USING ABSTRACT CLASSES----------
    --------INHERITANCE---------------
    base class and child class*
    ----------POLYMORPHISM----------
    the word itself comes from greek language meaning many forms
    */  






 };
 class Developer: public Employee{
    //this class becomes child class
    public:
    string FavProgLan;
    Developer(string name , string company , int age , string favProgLan):Employee(name , company,age)
    {
         FavProgLan =favProgLan;
         
         

    }
    void FixBug(){
         cout<<Name<<"is using "<<FavProgLan<<endl;
    }
    void work(){
     cout<<Name<<"is writing code"<<endl;
   }



 };
 class Teacher: public Employee{
 public:
    string Subject;
    void PrepareLesson(){
        cout<<getName()<<"is preparing "<<Subject<<"lesson"<<endl;
    }
    Teacher(string name , string company , int age, string subject)
    :Employee( name ,  company ,  age)
    {
        Subject = subject;

    }
     void work(){
     cout<<Name<<"is teaching "<<Subject<<endl;
   }


 };
 int main()
 {
   // a class is user defined datatype
   Employee e ("Divya" , "Yt" , 21); // created a variable of type employee
   //how acess the members of employee class
  // e.Name = "Divya";
   //e.Company = "YT";
   //e.Age = 21;
   // deciding the behaviour of an employee
   // behaviour can be described as class methods or functions
   //e.IntroduceYourself();
   Employee c("Juhi" , "Amazon" , 35);
   //e.AskForPromotion();
   //c.AskForPromotion();

  // c.Name = "Juhi";
   //c.Company = "Amazon";
   //c.Age = 23;
   //c.IntroduceYourself();
   e.setAge(15);
   //cout<<e.getName()<<"is"<<e.getAge()<<"  years old"<<endl;
   Developer d  = Developer("Juhi " , "Amazon" , 35 , "C++");
   //d.FixBug();
   //d.AskForPromotion();
   Teacher t = Teacher("Juhi" , "code school",35,"english");
   //t.PrepareLesson();
   //t.AskForPromotion();
   //d.work();
   //t.work();
   //the most common use of polymorphism 
   //is when a parent class reference is used to refer to  achild object
   Employee * e1= &d;
   Employee * e2 = &t;
   e1->work();
   e2->work();


 }