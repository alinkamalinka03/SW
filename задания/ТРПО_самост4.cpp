#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	
	int dlinaParallelepipeda, shirinaParallelepipeda, vysotaParallelepipeda, dlinaOtverstiya, shirinaOtverstiya, vysotaOtverstiya;
	
	cout << "Vvedite dliny parallelepipeda: " << endl;
	cin >> dlinaParallelepipeda;
	
	cout << "Vvedite shiriny parallelepipeda: " << endl;
	cin >> shirinaParallelepipeda;
	
	cout << "Vvedite vysoty parallelepipeda: " << endl;
	cin >> vysotaParallelepipeda;
	
	cout << "Vvedite dliny otverstiya" << endl;
	cin >> dlinaOtverstiya;
	
	cout << "Vvedite shiriny otverstiya: " << endl;
	cin >> shirinaOtverstiya;
	
	cout << "Vvedite vysoty otverstiya: " << endl;
	cin >> vysotaOtverstiya;
	
	if ((dlinaParallelepipeda < dlinaOtverstiya && shirinaParallelepipeda < shirinaOtverstiya && vysotaParallelepipeda < vysotaOtverstiya) || (dlinaParallelepipeda < shirinaOtverstiya && shirinaParallelepipeda < dlinaOtverstiya && vysotaParallelepipeda < vysotaOtverstiya) || (dlinaParallelepipeda < vysotaOtverstiya && shirinaParallelepipeda < shirinaOtverstiya && vysotaParallelepipeda < dlinaOtverstiya) || (shirinaParallelepipeda < vysotaOtverstiya && dlinaParallelepipeda < shirinaOtverstiya && vysotaParallelepipeda < dlinaOtverstiya) || (vysotaParallelepipeda < shirinaOtverstiya && dlinaParallelepipeda < dlinaOtverstiya && shirinaParallelepipeda < vysotaOtverstiya) || (vysotaParallelepipeda < shirinaOtverstiya && dlinaParallelepipeda < vysotaOtverstiya && shirinaParallelepipeda < dlinaOtverstiya))
		{
			cout << "Pomestitsya" << endl;
		}
		else
		{
			cout << "Ne pomestitsya" << endl;
		}
	
	return 0;

}