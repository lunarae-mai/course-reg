#include "Course.h"
#include<set>
Course::Course() {}

Course::Course(string name, float grade, char g, int id, int credit_hours, string syllabus, string instructor_mail){
    this->name = name;
    this->grade = grade;
    this->G = g;
    this->id = id;
    this->credit_hours = credit_hours;
    this->syllabus = syllabus;
    this->instructor_mail = instructor_mail;
}

    string Course::get_name() {
        return name;
    }

    float  Course::get_grade() {
        return grade;
    }

    char  Course::get_G() {
        return G;
    }


    int  Course::get_id() {
        return id;
    }

    int  Course::get_credit_hours() {
        return credit_hours;
    }

    string  Course::get_syllabus() {
        return syllabus;
    }

    string  Course::get_instructor_name() {
        return instructor_mail;
    }

    int     Course::get_semester() {
        return semester;
    }

    bool     Course::get_completed() {
        return completed;
    }

    ////////////////////////////////////////////////////////////
    
    void Course::set_name(string name) {
        this->name = name;
    }

    void Course::set_grade(float grade) {
        this->grade = grade;
    }

    void Course::set_G(char g) {
        this->G = g;
    }

    void Course::set_prerequisite(vector<string> prerequisite) {
        this->prerequisite = prerequisite;
    }

    void Course::set_id(int id) {
        this->id = id;
    }

    void Course::set_credit_hours(int credit_hours) {
        this->credit_hours = credit_hours;
    }

    void Course::set_syllabus(string syllabus) {
        this->syllabus = syllabus;
    }

    void Course::set_instructor_name(string instructor_mail) {
        this->instructor_mail = instructor_mail;
    }

    void Course::set_semester(int semester) {
        this->semester = semester;
    }

    void Course::set_completed(bool completed) {
        this->completed = completed;
    }



