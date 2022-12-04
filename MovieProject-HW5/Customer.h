//
// Created by siddr on 11/23/2022.
//

#ifndef MOVIESP5_CUSTOMER_H
#define MOVIESP5_CUSTOMER_H


#include <string>
#include <vector>
#include "Movie.h"

class Customer{

public:
    friend std::ostream &operator<<(std::ostream &out, const Customer &customer);

    Customer(std::string firstName, std::string lastName, std::string customerID);

    void borrowMovie(const Movie& movie);
    void returnMovie(const Movie& movie);
    void history();

private:
    std::string firstName_;
    std::string lastName_;

    std::string customerID_;

    std::vector<Movie> currentMovies_;

    std::vector<std::pair<Movie, std::string>> customerHistory_;
};

#endif //MOVIESP5_CUSTOMER_H
