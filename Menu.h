#pragma once
#include<string>
#include<iostream>
#include<iomanip>
#include <string>
#ifndef DATE_H//#ifndef 当变量未定义时为真
#define DATE_H
class Date
{
public:
	Date(int y, int m, int d, int h);
	~Date();
	bool operator==(Date date);
	int getYear();
	int getMonth();
	int getDay();
	int getHour();
	void setYear(int);
	void setMonth(int);
	void setDay(int);
	void setHour(int);

private:
	int year, month, day, hour;

};

#endif // !DATE_H
#ifndef MENU_H
#define MENU_H
class Menu
{//菜单类
protected:
	std::string dishName, dishID;//菜名和id
	double price;
public:
	Menu();
	~Menu();
	Menu(std::string dishName, std::string dishID, double price);
	void setDishName(std::string);
	void setDishID(std::string);
	void setPrice(double);
	std::string getDishName();
	std::string getDishID();
	double getPrice();

};

#endif // !MENU_H
#ifndef ORDER_H
#define ORDER_H
//Order类存有用户名，地址，电话，数量，日期，确认状态 
class Order
{
public:
	Order();
	~Order();
	Order();
	Order(std::string dishName, std::string dishID, double price, std::string customerName, std::string adress,std::string phone, Date bookDate);
	Order(std::string dishName, std::string dishID, double price);
	Order(Menu, int);
	const bool operator==(Order order2);
	std::string getCustomerName();
	std::string getAdress();
	std::string getPhone();
	Date getBookDate();
	bool getModify();
	int getNum();
	bool setCustomerName(std::string customerName);
	bool setAdress(std::string adress);
	bool setPhone(std::string phone);
	bool setnum(int num);
	bool setBookDate(Date bookDate);
	void setModify();

private:
	std::string customerName, adress, phone;
	int num;
	Date bookDate;
	bool modify;

};


#endif // !ORDER_H



