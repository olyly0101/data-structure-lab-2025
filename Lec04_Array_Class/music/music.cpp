#include "music.h"

int main()
{
	//music streaming service�� ����
	MusicStreamingService my_service("spotify");

	my_service.addMusic("PolaroidLove", "ENHYPEN", "DIMENSION", 2022);
	my_service.addMusic("Ditto", "NewJeans", "ALBUM", 2023);
	my_service.addMusic("Test12", "NewJeans", "ALBUM", 2023);
	my_service.addMusic("CAKE", "ITZY", "ALBUM", 2023);
	my_service.addMusic("SundayMorning", "Maroon5", "ALBUM", 2023);
	my_service.addMusic("Sugar", "Maroon5", "ALBUM", 2015);
	my_service.addMusic("Test", "ITZY", "ALBUM", 2023);

	// add by user ���� �غ��� 
	// music ��ü ���� --> ����� �Է¹ޱ� (cin ���)
	// ������ music ��ü ������� �ϳ��� ä���
	// ���������� music ��ü my_service�� music_list�� push_back()


	// search music by title
	string music_title;
	cout << "Enter the Music Title: ";
	cin >> music_title;
	Music* result = my_service.searchByTitle(music_title);
	if (result != NULL) {
		cout << "Found: " << result->getTitle() << " by " << result->getArtist() << endl;
	}
	else
	{
		cout << "not found" << endl;
	}

	// search music by artist
	string artist_name;
	cout << "Enter the artist name: ";
	cin >> artist_name;
	vector <Music*> artist_result = my_service.searchByArtist(artist_name);
	if (artist_result.size() > 0) {
		cout << "Found" << artist_result.size() << "song by " << artist_name << " : " << endl;
		for (int i = 0; i < artist_result.size(); i++) {
			cout << artist_result[i]->getTitle() << endl;
		}

	}
	else {
		cout << "NotFound" << endl;
	}
}