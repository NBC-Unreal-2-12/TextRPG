#ifndef JOB_H
#define JOB_H
#pragma once

#include <string>
#include <iostream>

using namespace std;

// 직업 인터페이스
class Job {
public:
    virtual string getJobName() const = 0;
    virtual ~Job() {}
    virtual void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& maxMp) const = 0;
    virtual void useSkill() const = 0;
};

// 전사 직업 클래스
class Warrior : public Job {
public:
    string getJobName() const override {
        return "Warrior";
    }

    void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& maxMp) const override {
        attack += 30;
        maxHelth += 70;
        attackspeed += 10;
    }

    void useSkill() const override {
        cout << "전사의 강타를 사용합니다!" << endl;
    }
};

// 마법사 직업 클래스
class Mage : public Job {
public:
    string getJobName() const override {
        return "Mage";
    }

    void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& maxMp) const override {
        attack += 25;
        maxHelth += 20;
        maxMp += 50;
        attackspeed += 5;
    }

    void useSkill() const override {
        cout << "마법사의 화염구를 사용합니다!" << endl;
    }
};

// 궁수 직업 클래스
class Archer : public Job {
public:
    string getJobName() const override {
        return "Archer";
    }

    void applyJobEffect(double& attack, int& maxHelth, int& attackspeed, double& evasion, double& accuracy, int& mp) const override {
        attack += 20;
        maxHelth += 30;
        evasion += 0.1;
		attackspeed += 20;
		accuracy += 10;
    }

    void useSkill() const override {
        cout << "궁수의 연속 사격을 사용합니다!" << endl;
    }
};

#endif