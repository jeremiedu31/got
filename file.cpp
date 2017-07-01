#include "file.h"


vector<string> read (const char * filename) {
	vector<string> v;
	if (FILE *fp = fopen(filename, "r"))
	{
		char buf[BUFFER_SIZE];
		int i = 0, j = 0;
		char str[20] = {""};
		while (size_t len = fread(buf, 1, sizeof(buf), fp)) {
			// v.insert(v.end(), buf, buf + len);
			j = 0;

			for (i = 0; i < len; i++) {
				// cout << buf[i];
				// cout << (int)buf[i] << " ";

				if (buf[i] == 13 || buf[i] == 11 || buf[i] == 10) {
					v.push_back((string)str);
					for (; j > 0; j--)
						str[j] = 0;
				} else {
					str[j] = buf[i];
					j++;
				}

			}

		}
		
		fclose(fp);
	}
	return v;
}


// int main () {
// 	vector<string> v = read("fichier1.txt");
// 	for (int i = 0; i < v.size(); ++i)
// 	{
// 		cout << v[i] << endl;
// 	}

//     return 0;
// }