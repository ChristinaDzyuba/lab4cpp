#pragma once
class Movie
{
private:
	string name;
	int duration_in_minutes;
	int amount_of_reviews;

public:
	int budget;
	string director;

	//методи доступу до даних полів класу Movie
	//метод доступу до назви
	string GetName(void)
	{
		cout << name;
		return name;
	}

	//метод доступу до тривалості в хвилинах
	int GetDuration_in_minutes()
	{
		return duration_in_minutes;
	}

	//метод доступу до кількості відгуків
	int GetAmount_of_reviews(int amount_of_reviews)
	{
		return amount_of_reviews;
	}

	//функція, яка встановлює значення полів для двох інших об'єктів
	void setMovie(string newName, int newDuration, int newAmount, int newBudget, string newDirector, string newGenre, float newRating)
	{
		name = newName;
		duration_in_minutes = newDuration;
		amount_of_reviews = newAmount;
		budget = newBudget;
		director = newDirector;
		genre = newGenre;
		rating = newRating;
	}

	//функція, яка виводить значення всіх полів
	void showMovie()
	{
		cout << "Movie is called " << name << endl;
		cout << "Movie lasts this amount of minutes: " << duration_in_minutes << endl;
		cout << "Movie has this number of reviews: " << amount_of_reviews << endl;
		cout << "Budget is " << budget << endl;
		cout << "The Director is " << director << endl;
		cout << "Genre is " << genre << endl;
		cout << "Rating is " << rating << endl;
		cout << endl;
	}

	//конструктор класу
	Movie()
	{
		name = "Interstellar";
		duration_in_minutes = 169;
		amount_of_reviews = 3156;
		budget = 165000000;
		director = "Christopher Nolan";
		genre = "sci-fi";
		rating = 8.9;

	}

	//деструктор класу
	~Movie()
	{
		//cout << "\nDestructor works\n" << endl;
	}

protected:
	string genre;
	float rating;
};


