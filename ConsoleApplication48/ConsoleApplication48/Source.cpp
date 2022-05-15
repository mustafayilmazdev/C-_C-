#include <iostream>
#include <vector>
using namespace std;
void yazdir(vector<int> v) {
	//for (auto iter = v.begin(); iter != v.end(); ++iter)
	//{
	//	cout << *iter << " ";
	//}
	//cout << endl;
	v.push_back(5);
	v.push_back(1);
	v.push_back(2);
	v.insert(v.begin(), 0);
	for (auto iter = v.begin(); iter < v.end(); iter++) {
		cout << *iter << endl;
	}
}
void yazdir2(vector <vector<int>> v) {
	/*for (int i = 0; i < v.size(); ++i)
	{
		for (int j = 0; j < 3; j++) {
			cout << v[i][j] << " ";
		}
		
	}*/
	int n_num= v.size();

}

void pascal1(vector< vector< int > >& vec) {
	//vec.push_back(vector<int>(5));
	int s = 1;
	 
		vec[0].erase(vec[0].begin() );
		vec[0].insert(vec[0].begin(), 1);
		
		vec[1].erase(vec[1].begin());
		vec[1].insert(vec[1].begin(), 1);
		
		vec[1].erase(vec[1].begin()+1);
		vec[1].insert(vec[1].begin()+1, 1);	

	for (int i = 2; i < vec.size(); i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0||i==j) {
				vec[i].erase(vec[i].begin() + j);
				vec[i].insert(vec[i].begin() + j,1);
			}

			else {
				vec[i].erase(vec[i].begin() + j);
				vec[i].insert(vec[i].begin() + j, vec[i - 1][j-1] + vec[i - 1][j]);
			}
		}
	}
	
}

int main(int argc, char* argv[])
{
	vector<int> sayi(6);
	vector< vector< int > > vec{ {1,2,3}, {2,4,6} };
	pascal1(vec);
	yazdir2(vec);
	return 0;
}