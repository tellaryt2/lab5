#include "Post.h"

//////////////////////// User - обычный пользователь
void User::SetId(int id)
{
	_id = id;
}

void User::SetLogin(string login)
{
	string tempString = "{}<>@,#$%^:*";
	for (int i = 0; i < login.length(); i++)
	{
		for (int j = 0; j < tempString.length(); j++)
		{
			if (login[i] == tempString[j])
			{
				cout << "Логин не должен содержать знаки пунктуации!" << endl;
				cout << "Повторите ввод: ";
				cin >> login;
				break;
			}
		}
	}
	_login = login;
}

void User::SetPassword(string password)
{
	_password = password;
}

string User::GetLogin()
{
	return _login;
}

string User::GetPassword()
{
	return _password;
}

int User::GetId() 
{ 
	return _id; 
}

bool User::IsCorrectPassword(string password)
{
	return (password == _password);
}

User::User(int id, string login, string password)
{
	SetId(id);
	SetPassword(password);
	SetLogin(login);
}

User::User(){}

User* User::Login(User** users, int usersCount, string enteredLogin, string enteredPassword)
{
	for (int i = 0; i < usersCount; i++)
	{
		if (users[i]->GetLogin() == enteredLogin)
		{
			if (users[i]->IsCorrectPassword(enteredPassword))
			{
				return users[i];
			}
			else
			{
				throw exception("Uncorrect password");
			}
		}
	}
	return nullptr;
}


//////////////////////// Post - пост в блоге пользователя с платным аккаунтом
void Post::SetTitle(string title)
{
	_title = title;
}

void Post::SetText(string text)
{
	_text = text;
}
string Post::GetTitle() { return _title; }

string Post::GetText() { return _text; }

Post::Post(string title, string text)
{
	SetTitle(title);
	SetText(text);
}

//////////////////////// Paid User - пользователь с платным аккаунтом

void PaidUser::SetPosts(Post* posts, int postsCount)
{
	if (postsCount < 0)
	{
		throw exception("Posts count must be more than 0");
	}
	_posts = posts;
	_postsCount = postsCount;
}

Post* PaidUser::GetPosts() { return _posts; }

int PaidUser::GetPostsCount() { return _postsCount; }

PaidUser::PaidUser(int id, string login, string password, Post* posts, int postsCount) : User(id, login, password)
{
	
	SetPosts(posts, postsCount);
}

PaidUser::PaidUser(int id, string login, string password) :
	PaidUser(id, login, password, nullptr, 0)
{
}

void DemoPost()
{
	try
	{
		User** users = new User * [8]
		{
			new User(100000, "morkovka1995", "1995morkovka"),
			new User(100001, "ilon_mask", "X ? A-12"),
			new User(100002, "megazver", "password"),
			new User(100003, "yogurt", "ksTPQzSu"),
			new PaidUser(200000, "TheKnyazz", "JHPzPGFG"),
			new PaidUser(200001, "system_exe", "UgfkDGmU"),
			new PaidUser(200002, "RazorQ", "TBgRnbCP"),
			new PaidUser(200003, "schdub", "CetyQVID"),
		};
		string login = "megazver";
		string password = "password";
		User* loginedUser = new User();
		loginedUser = loginedUser->Login(users, 7, login, password);
		cout << "Signed in as: " << loginedUser->GetLogin() << endl;
		login = "system_exe";
		password = "UgfkDGmU";
		delete loginedUser;
		User* loginedPaidUser = new User();
		loginedPaidUser = loginedPaidUser->Login(users, 8, login, password);
		cout << "Signed in as: " << loginedPaidUser->GetLogin() << endl;
		delete loginedPaidUser;
		/*for (int i = 0; i < 8; i++)
		{
			delete users[i];
		}*/
		delete[] users;
	}
	catch (exception error)
	{
		cout << error.what() << endl;
	}
}