#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include <iostream>
#include "Course.h"
#include "Gradebook.cpp"
using namespace std;


int main() {
   map<string, string> FavoriteCandy;
   FavoriteCandy["Ramana"] = "Chocolate";
   FavoriteCandy["Lakshmi"] = "Vanilla Cream";
   FavoriteCandy["Bomma"] = "Cream Biscuit";
   FavoriteCandy["Arjun"] = "Oreos";
   FavoriteCandy["Ram"] = "Sugar Cookie";

   map<string, string> :: iterator candyIterator;

   char input;
   cout << "Do you like chocolate (c), vanilla cream (v), Cream Biscuit (b), Oreos (o), or sugar cookie (s) the most? " << endl;
   cin >> input;

   switch(input){
       case 'c':
           for(candyIterator = FavoriteCandy.begin(); candyIterator!=FavoriteCandy.end(); candyIterator++){
               if(candyIterator->second == "Chocolate"){
                   string chuck = candyIterator->first;
                   cout << "You and " + chuck + "'s favorite Candy is Chocolate" << endl;
                   break;
               }
           }
           break;
       case 'v':
           for(candyIterator = FavoriteCandy.begin(); candyIterator!=FavoriteCandy.end(); candyIterator++){
               if(candyIterator->second == "Vanilla Cream"){
                   string chuck = candyIterator->first;
                   cout << "You and " + chuck + "'s favorite Candy is Vanilla Cream" << endl;
                   break;
               }
           }
           break;
       case 'b':
           for(candyIterator = FavoriteCandy.begin(); candyIterator!=FavoriteCandy.end(); candyIterator++){
               if(candyIterator->second == "Cream Biscuit"){
                   string chuck = candyIterator->first;
                   cout << "You and " + chuck + "'s favorite Candy is Cream Biscuit" << endl;
                   break;
               }
           }
           break;
       case 'o':
           for(candyIterator = FavoriteCandy.begin(); candyIterator!=FavoriteCandy.end(); candyIterator++){
               if(candyIterator->second == "Oreos"){
                   string chuck = candyIterator->first;
                   cout << "You and " + chuck + "'s favorite Candy is Oreos" << endl;
                   break;
               }
           }
           break;
       case 's':
           for(candyIterator = FavoriteCandy.begin(); candyIterator!=FavoriteCandy.end(); candyIterator++){
               if(candyIterator->second == "Sugar Cookie"){
                   string chuck = candyIterator->first;
                   cout << "You and " + chuck + "'s favorite Candy is Sugar Cookie" << endl;
                   break;
               }
           }
           break;
   }

   map<string, vector<Course>> StudentGradebook; //first parameter student name, second parameter is class
                                           // followed by mark receive
   Course* ArjunsCourse1 = CreateNewCourse("Geometry", 98);
   Course* ArjunsCourse2 = CreateNewCourse("Advanced Algebra", 99);
   Course* ArjunsCourse3 = CreateNewCourse("Spanish Literature", 90);
   Course* ArjunsCourse4 = CreateNewCourse("Cybersecurity Fundamentals", 99);
   Course* ArjunsCourse5 = CreateNewCourse("Indian History", 95);

    Course* HarrysCourse1 = CreateNewCourse("Geometry", 100);
    Course* HarrysCourse2 = CreateNewCourse("Advanced Algebra", 105);
    Course* HarrysCourse3 = CreateNewCourse("Spanish Literature", 100);
    Course* HarrysCourse4 = CreateNewCourse("Cybersecurity Fundamentals", 100);
    Course* HarrysCourse5 = CreateNewCourse("Indian History", 120);

    AddStudentToBook("Arjun Ram", StudentGradebook);
    AddStudentToBook("Harry Potter", StudentGradebook);


    AddCourseForStudent("Arjun Ram", ArjunsCourse1, StudentGradebook);
    AddCourseForStudent("Arjun Ram", ArjunsCourse2, StudentGradebook);
    AddCourseForStudent("Arjun Ram", ArjunsCourse3, StudentGradebook);
    AddCourseForStudent("Arjun Ram", ArjunsCourse4, StudentGradebook);
    AddCourseForStudent("Arjun Ram", ArjunsCourse5, StudentGradebook);


    AddCourseForStudent("Harry Potter", HarrysCourse1, StudentGradebook);
    AddCourseForStudent("Harry Potter",HarrysCourse2, StudentGradebook);
    AddCourseForStudent("Harry Potter",HarrysCourse3, StudentGradebook);
    AddCourseForStudent("Harry Potter",HarrysCourse4, StudentGradebook);
    AddCourseForStudent("Harry Potter",HarrysCourse5, StudentGradebook);

    printOutAllGrades(StudentGradebook);

    return 0;
}
