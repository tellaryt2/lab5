#pragma once
#include "IO.h"

//////////////////////// Post - пост в блоге пользователя с платным аккаунтом
class Post
{
	string _title;
	string _text;
public:
	void SetTitle(string title);
	void SetText(string text);
	string GetTitle();
	string GetText();
	Post(string title, string text);
};

//////////////////////// User - обычный пользователь
class User
{
	int _id;
	void SetId(int id);
	string _login;
	string _password;
public:
	void SetLogin(string login);
	void SetPassword(string password);
	string GetLogin();
	string GetPassword();
	int GetId();
	bool IsCorrectPassword(string password);
	User* Login(User** users, int usersCount, string enteredLogin, string enteredPassword);
	User(int id, string login, string password);
	User();
};

//////////////////////// Paid User - пользователь с платным аккаунтом
class PaidUser: public User
{
	Post* _posts;
	int _postsCount;
public:
	void SetPosts(Post* posts, int postsCount);
	Post* GetPosts();
	int GetPostsCount();
	PaidUser(int id, string login, string password, Post* posts, int postsCount);
	PaidUser(int id, string login, string password);
};

void DemoPost();
