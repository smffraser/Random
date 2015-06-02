// Anagram Finder
// Created by Sarah Fraser
// Description: Algorithm finds all words given in a dictionary that are
//              an anagram of a given word.
//              ie. given word = cat; dictionary includes = act, tact, taa, tac, cats;
//                  prints = act, tac
// Runtime: O(n^2) => O(nlogn) for the sort of each dictionary word and O(n) words.

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string given ;
	if ( !(cin >> given) )
    {
      cin.clear();
      cin.ignore();
      cout << "Please enter a valid string. Try again" << endl ;
    }
	sort(given.begin(),given.end()) ;

	int dictionary_len ;
	if ( !(cin >> dictionary_len) )
    {
      cin.clear();
      cin.ignore();
      cout << "Please enter a valid length. Try again" << endl ;
    }

	string curr_string ;
	string sorted_string ;

	for(int i=0; i < dictionary_len; i++){
		cin >> curr_string ;
		sorted_string = curr_string ;
		sort(sorted_string.begin(),sorted_string.end()) ;
		if (sorted_string == given){
			cout << curr_string << endl ;
		}
	}
}