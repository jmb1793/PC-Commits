#include <iostream>
using std::string;
using namespace std;

class AbstractTrainee{
    virtual void Ask_Difficulty() = 0;

};

class Trainee:AbstractTrainee{

private:
    string Name;    //First and Last name of Trainee
    string Gender;  //male, female, or other
    string Level;   //String for declarative, or int for representation
    int Age;        //Age of Trainee
    int Height;     //height in inches
    int Weight;     //Weight in pounds

public:
    Trainee(){
        Name="";
        Gender="";
        Level="Beginner"; 
        Age=99;
        Height=99;
        Weight=99;
    }
    Trainee(string n, string g, string l, int a, float h, float wt){
        Name = n;
        Gender = g;
        Level = l; 
        Age = a; 
        Height= h; 
        Weight= wt; 
    }

    void setName(string name){
        Name = name;
    }
    void setGender(string g){
        Gender = g;
    }
    void setAge(int a){
        Age = a;
    }
    
    string getName(){
        return Name;
    }
    string getGender(){
        return Gender;
    }
    int getAge(){
        return Age;
    }
    string getLevel(){
        return Level;
    }

    void Ask_Difficulty(){
        Level = (Level == "Beginner") ? "Intermediate" : "Beginner";
    }

    float BMI(int age, int h, int wt){
        //Calculate the BMI of the client and

        float bmi = 20;
        std::cout << "Your BMI is " << bmi << std::endl;
        return bmi;
    }
};

//Inheritance
class Athlete:public Trainee{
private:
    string Sport = " ";
public:
    Athlete(string n, string g, string l, int a, float h, float wt, string sport)
        :Trainee(n, g, l, a, h, wt)
    {
        Sport = sport;
    }

    void setSport(string s){
        Sport = s;
    }
    string getSport(){
        return Sport;
    }
};

class Professional:Trainee{

};

class Recreational:Trainee{

};

int main(){
    Trainee trainee1;
    trainee1.BMI(5,5,5);
    std::cout << "Your Level is " << trainee1.getLevel() << std::endl;

    string sport1 = "gymnastics";
    Athlete athlete1 = Athlete("Jacob", "male", "Beginner", 20, 68, 153, sport1);
    std::cout << athlete1.getName() <<"'s favorite sport is " <<athlete1.getSport() << std::endl;
}