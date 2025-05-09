#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Music {

private:
	string title;
	string artist;
	string album;
	int year;

public:
	// 생성자
	// public 없이 쓰면 기본적으로 private임.
	Music(string title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
	}

	// Getters
	string getTitle() {
		return title;
	}
	string getArtist() {
		return artist;
	}
	string getAlbum() {
		return album;
	}
	int getYear() {
		return year;
	}
};

class MusicStreamingService {

private:
	string service_name;
	vector<Music> music_list;

public:
	//생성자
	MusicStreamingService(string service_name) {
		this->service_name = service_name;
	}
	// 음악 정보를 추가할 수 있는 기능
	// add by user 직접 해보기 
	// music 객체 선언 --> 사용자 입력받기 (cin 사용)
	// 선언한 music 객체 멤버수를 하나씩 채우기
	// 마지막으로 music 객체 my_service의 music_list에 push_back()
	void addMusic(string title, string artist, string album, int year) {
		Music new_music(title, artist, album, year);
		music_list.push_back(new_music);
		cout << title << " by " << artist << " added to " << service_name << endl;
	}

	// 음악 찾아주는 서비스 (Title)
	// *(포인터)가 붙어있는 이유는 i값을 주소값으로 인지시켜주기 때문임.
	Music* searchByTitle(string title) {
		for (int i = 0; i < music_list.size(); i++) {
			if (music_list[i].getTitle() == title) {
				return &music_list[i];
			}
		}
		return NULL;
	}

	// 음악 찾아주는 서비스 (Artist)
	vector<Music*> searchByArtist(string artist) {
		vector <Music*> result;
		for (int i = 0; i < music_list.size(); i++) {
			if (music_list[i].getArtist() == artist) {
				result.push_back(&music_list[i]);
				// &의 의미는?
			}
		}

		return result;
	}
};