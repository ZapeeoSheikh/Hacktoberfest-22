#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<iomanip>
#include<string.h>
#include<windows.h>
using namespace std;
void physics();
void chemistry();
void math();
void computer();
void mark_obtained();
int marks=0;
char ans;
char choice;
// main function
int main(){
     system("color 07");//Changing font colour of the system
    string student_name,student_regno,section,user_id,user_pwd;
    int subject_choice;


    cout<<endl<<endl;
    cout<<setw(80)<<"*****************************************************" <<endl;
    cout<<setw(80)<<"           Sufa Academy Of Sciences and Arts         "<<endl;
    cout<<setw(80)<<"*****************************************************" <<endl;
    cout<<endl<<endl<<endl;

    cout<<setw(50)<<"Enter User Id : \t";
    cin>>user_id;
    cout<<endl;
    cout<<setw(50)<<"Enter Password : \t";
    cin>>user_pwd;
    cout<<endl;
    cout<<setw(80)<<"*******************************************************"  <<endl;
    cout<<setw(80)<<"     *******************************************       "  <<endl;
    cout<<setw(80)<<"             ****************************              "  <<endl;
    cout<<endl<<endl;
    cout<<"Verifying User Credintials ";
    Beep(40,900);cout<<"."; Beep(40,900);cout<<"."; Beep(40,900);cout<<".";
    if(user_id=="sufa" && user_pwd=="1234"){
        start:
     system("cls");
        system("color 0a");

    cout<<"\t\t ===================================================\n\n";
	cout<<"\t\t ===================================================\n\n";
	cout<<"\t\t ==               Name: Shahab Malik              == \n\n";
	cout<<"\t\t ==               Roll Number: 4                  == \n\n";
    cout<<"\t\t ==               Program: FSC                    == \n\n";
	cout<<"\t\t ==     Sufa Academy Of Sciences And Arts         == \n\n";
	cout<<"\t\t =================================================== \n\n";
	cout<<"\t\t ===================================================\n\n";
        cout<<endl<<endl<<"\tChoose a Subject \n\n";
        cout<<endl<<endl<<"\t 1. Math\n\n";
        cout<<endl<<endl<<"\t 2. Physics\n\n";
        cout<<endl<<endl<<"\t 3. Computer\n\n";
        cout<<endl<<endl<<"\t 4. Chemistry\n\n";
        cout<<">>>>";
        cin>>subject_choice; 
     switch (subject_choice)  
        {
            case 1:
            math();
            mark_obtained();
              cout<<endl<<endl;
    
            cout<<"If you want to try again press Y/y\n"<<">";
            cin>>choice;
            if(choice=='y' || choice=='Y'){
             goto start;
            }
            break;
        case 2:
            physics();
            mark_obtained();
              cout<<endl<<endl;
    
            cout<<"If you want to try again press Y/y\n"<<">";
            cin>>choice;
            if(choice=='y' || choice=='Y'){
             goto start;
            }
            break;
             case 3:
           computer();
           mark_obtained();
              cout<<endl<<endl;
    
            cout<<"If you want to try again press Y/y\n"<<">";
            cin>>choice;
            if(choice=='y' || choice=='Y'){
             goto start;
            }
            break;
             case 4:
            chemistry();
            mark_obtained();
              cout<<endl<<endl;
    
            cout<<"If you want to try again press Y/y\n"<<">";
            cin>>choice;
            if(choice=='y' || choice=='Y'){
             goto start;
            }
            break;

        default:
        exit(0);
            break;
        }
    } else{
        cout<<"Invalid Credentials!!!";
    }
return 0;
}

// end of main function
void physics(){ 
system("cls");
system("color 72");
cout<<endl<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<setw(80)<<"               WELCOME TO WORLD OF PHYSICS           "<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
 cout<<"Let Us Start ";
    Beep(40,900);cout<<"."; Beep(40,900);cout<<"."; Beep(40,900);cout<<".";
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 1.   The weight of an object is due to -\n" ;
    cout<<"\t(A) the net force acting on it\n";
    cout<<"\t(B) the total of all forces acting on it irrespective of their directions\n";
    cout<<"\t(C) the force that it exerts on the ground\n";
    cout<<"\t(D) its inert property\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='C' || ans=='c'){
        marks=marks+1;
    }
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 2.  The direction of acceleration in uniform circular motion is along the -\n" ;
    cout<<"\t(A) direction of motion\n";
    cout<<"\t(B) tangent to the circle at the point of observation\n";
    cout<<"\t(C) direction of velocity\n";
    cout<<"\t(D) direction perpendicular to velocity\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
  
    if(ans=='d' || ans=='d'){
        marks=marks+1;
    }
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 3.  How many internal reflections of ligh take place in the formation of primary rainbow?\n" ;
    cout<<"\t(A) 0\n";
    cout<<"\t(B) 1\n";
    cout<<"\t(C) 2\n";
    cout<<"\t(D) More than 2\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='b' || ans=='b'){
        marks=marks+1;
    } 
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 4.   Which one of the following laws of electromagnetism does not give the direction of magnetic field?\n" ;
    cout<<"\t(A) Right-hand thumb rule\n";
    cout<<"\t(B) Fleming's left-hand rule\n";
    cout<<"\t(C) Fleming's right-hand rule\n";
    cout<<"\t(D) Faraday's law of electromagnetic induction\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='D' || ans=='d'){
        marks=marks+1;
    }

    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 5.  Free surface of a liquid behaves like a sheet and tends to contract to the smallest possible area due to the\n" ;
    cout<<"\t(A) Force of adhesion\n";
    cout<<"\t(B) Force of friction\n";
    cout<<"\t(C) Centrifugal force\n";
    cout<<"\t(D) Force of cohesion\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='D' || ans=='d'){
        marks=marks+1;
    }
    cout<<endl<<endl;
    cout<<"Loading Result ";
    Beep(40,900);cout<<"."; Beep(40,900);cout<<"."; Beep(40,900);cout<<".";
   
}
void chemistry(){
system("cls");
system("color 74");
cout<<endl<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<setw(80)<<"              WELCOME TO WORLD OF CHEMISTRY          "<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<"Let Us Start ";
    Beep(40,900);cout<<"."; Beep(40,900);cout<<"."; Beep(40,900);cout<<".";
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 1.   What's the lightest element in the periodic table?\n";
    cout<<"\t(A) Helium\n";
    cout<<"\t(B) Hydrogen\n";
    cout<<"\t(C) Air\n";
    cout<<"\t(D) Neutrons\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;

    if(ans=='b' || ans=='B'){
        marks=marks+1;
    }
   
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 2.   What is the atomic number of carbon?\n";
    cout<<"\t(A) 2\n";
    cout<<"\t(B) 6\n";
    cout<<"\t(C) 12\n";
    cout<<"\t(D) 14\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;

    if(ans=='B' || ans=='b'){
        marks=marks+1;
    }
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 3.  Which element in the periodic table was named in honour of physicist Albert Einstein?\n";
    cout<<"\t(A) Albertium\n";
    cout<<"\t(B) Relativium \n";
    cout<<"\t(C) Physicsium\n";
    cout<<"\t(D) Einsteinium\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;

    if(ans=='d' || ans=='D'){
        marks=marks+1;
    }
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 4.    Which of the following is a noble gas?\n";
    cout<<"\t(A) Nitrogen\n";
    cout<<"\t(B) Oxygen\n";
    cout<<"\t(C) Argon\n";
    cout<<"\t(D) Carbon dioxide\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;

    if(ans=='c' || ans=='C'){
        marks=marks+1;
    }
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 5.   Which of the following has the highest pH value?\n";
    cout<<"\t(A) Caustic soda\n";
    cout<<"\t(B)  Water\n";
    cout<<"\t(C) Wine\n";
    cout<<"\t(D) Lime juice\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;

    if(ans=='a' || ans=='A'){
        marks=marks+1;
    }

}
void math(){
    system("cls");
    system("color 70");
    cout<<endl<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<setw(80)<<"              WELCOME TO WORLD OF MATHEMATICS        "<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<"Let Us Start ";
    Beep(40,900);cout<<"."; Beep(40,900);cout<<"."; Beep(40,900);cout<<".";
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 1.  19 + ---- = 42\n";
    cout<<"\t(A) 21\n";
    cout<<"\t(B) 23\n";
    cout<<"\t(C) 15\n";
    cout<<"\t(D) 05\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='a' || ans=='A'){
        marks=marks+1;
    }
     cout<<setw(20)<<"\tQuestion 2.  What is the value of pi?\n" ;
    cout<<"\t(A) 3.14\n";
    cout<<"\t(B)  4.5\n";
    cout<<"\t(C)  6.7\n";
    cout<<"\t(D) 9\n";
    cout<<endl<<"Enter Answer";
    cin>>ans; 
 
    if(ans=='C' || ans=='c'){
        marks=marks+1;
    }
     cout<<setw(20)<<"\tQuestion 3.   What is the greatest two digit number?\n" ;
    cout<<"\t(A) 54\n";
    cout<<"\t(B) 43\n";
    cout<<"\t(C) 42\n";
    cout<<"\t(D) 41\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='A' || ans=='a'){
        marks=marks+1;
    }
     cout<<setw(20)<<"\tQuestion 4. Find the value of x; if x = (2×3) + 11\n" ;
    cout<<"\t(A) 55\n";
    cout<<"\t(B) 192\n";
    cout<<"\t(C) 17\n";
    cout<<"\t(D) 66\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='C' || ans=='c'){
        marks=marks+1;
    }
     cout<<setw(20)<<"\tQuestion 5.  How much is 190–87+16\n" ;
    cout<<"\t(A) 206\n";
    cout<<"\t(B) 203\n";
    cout<<"\t(C) 119\n";
    cout<<"\t(D) 118\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='C' || ans=='c'){
        marks=marks+1;
    }

}
void computer(){
system("cls");
system("color 71");
cout<<endl<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<setw(80)<<"              WELCOME TO WORLD OF COMPUTER           "<<endl;
    cout<<setw(80)<<"*****************************************************"<<endl;
    cout<<"Let Us Start ";
    Beep(40,900);cout<<"."; Beep(40,900);cout<<"."; Beep(40,900);cout<<".";
    cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 1.  The term ‘Computer’ is derived from__________?\n";
    cout<<"\t(A) Latin\n";
    cout<<"\t(B) German\n";
    cout<<"\t(C) French\n";
    cout<<"\t(D) Arabic\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='a' || ans=='A'){
        marks=marks+1;
    }
       cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 2.  Who is the father of Computer?\n";
    cout<<"\t(A) Charles Babage\n";
    cout<<"\t(B) Simur Cray\n";
    cout<<"\t(C) Augusta Adming\n";
    cout<<"\t(D) Allen Turing\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='a' || ans=='A'){
        marks=marks+1;
    }
     cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 3.  A light sensitive device that converts drawing, printed text or other images into digital form is___________?\n";
    cout<<"\t(A) OMR\n";
    cout<<"\t(B) Keyboard\n";
    cout<<"\t(C) Scanner\n";
    cout<<"\t(D) None\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='D' || ans=='d'){
        marks=marks+1;
    }
 cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 4.  WWW stands for___________?\n";
    cout<<"\t(A) World Wide Web\n";
    cout<<"\t(B) Wide World Web\n";
    cout<<"\t(C) Web World Wibe\n";
    cout<<"\t(D) World Whole Web\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='A' || ans=='a'){
        marks=marks+1;
    }
 cout<<endl<<endl;
    cout<<setw(20)<<"\tQuestion 5.  Which technology is used in compact disks?\n";
    cout<<"\t(A) Electro Magenatic\n";
    cout<<"\t(B) Laser\n";
    cout<<"\t(C) Electrical\n";
    cout<<"\t(D) Mechanial\n";
    cout<<endl<<"Enter Answer";
    cin>>ans;
    if(ans=='B' || ans=='b'){
        marks=marks+1;
    }




}
void mark_obtained(){
    cout<<endl<<endl;
    if(marks>3){
        system("cls");
        system("color 27");
        cout<<endl<<endl;
    cout<<setw(70)<<"*****************************************************"<<endl;
    cout<<setw(70)<<"                 Congratulations!!!!!                "<<endl;
    cout<<setw(70)<<"*****************************************************"<<endl;
        cout<<"\t\t\t\tYou have passed This Test \n";
    }else{
         system("cls");
        system("color 47");
        cout<<endl<<endl;
    cout<<setw(70)<<"*****************************************************"<<endl;
    cout<<setw(70)<<"                         Sorry!!!                    "<<endl;
    cout<<setw(70)<<"*****************************************************"<<endl;
        cout<<"\t\t\t\tYou are Failed!!!!\n";
    }
    cout<<"\t\t\t\tYour Marks are "<<marks<<endl;
    cout<<"\t\t\t\tYour Percentage is "<<(marks*100)/5 <<"%"<<endl;
}