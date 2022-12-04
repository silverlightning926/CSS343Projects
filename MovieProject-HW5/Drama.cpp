//
// Created by siddr on 12/1/2022.
//

#include <iostream>
#include "Drama.h"

Drama::Drama(int stock, const std::string &director, const std::string &title, int releaseYear) : releaseYear(releaseYear) {
    this->setStock(stock);
    this->setDirector(director);
    this->setTitle(title);

}

int Drama::getReleaseYear() const {
    return releaseYear;
}

void Drama::setReleaseYear(int newReleaseYear) {
    Drama::releaseYear = newReleaseYear;
}

std::ostream &operator<<(std::ostream &out, const Drama &drama) {
    out << "Drama (D): " << drama.getTitle() << " by " << drama.getDirector() << " - " << drama.getReleaseYear() << " [" << drama.getStock() << "]";
    return out;
}
