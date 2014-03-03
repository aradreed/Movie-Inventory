#pragma once

using namespace System;

ref class Movie
{
public:
	// Instance variables for each movie
	int year;
	String^ title;
	String^ genre;
	double^ price;
	String^ rating;

	// Initializing constructor
	Movie(int mYear, String^ mTitle, String^ mGenre, double mPrice, String^ mRating) {
			year = mYear;
			title = mTitle;
			genre = mGenre;
			price = mPrice;
			rating = mRating;
	}

	String^ getMovie() {
		return title;
	}

	int getYear() {
		return year;
	}

	String^ getGenre() {
		return genre;
	}

	Double^ getPrice() {
		return price;
	}

	String^ getRating() {
		return rating;
	}

private:
	// Private Utility Methods

};