#pragma once
#include<vector>
#ifndef USER_H
#define USER_H
class User {
private:

public:
	virtual void modifyOrder() = 0;
	virtual void inquireOrder() = 0;
};
#endif

