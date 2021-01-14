#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
    char Pilihan;
    do
    {
        int Input;
        MainMenu:
        system("cls");
        cout<<"Masukan Jumlah Perulangan : ";cin>>Input;
        if(Input > 3){
            cout << "\nPola Ke 1\n"<< endl;

            for (int i = 0; i < Input; i++)
            {
                for (int v = 0; v < Input; v++)
                {
                    cout << "*";
                }
                cout << endl;
            }

            cout << "\nPola 2\n"<< endl;

            for (int i = 1; i <= Input; i++)
            {
                for (int v = 1; v <= Input; v++)
                {
                    if (i == 1 || i == Input || v == 1 || v == Input)
                    {
                        cout << "*";
                    }
                    else
                    {
                        cout << " ";
                    }
                }
                cout << endl;
            }

            cout << "\nPola 3\n"<< endl;

            for (int i = 1; i <= Input; i++)
            {

                for (int b = 1; b <= i; b++)
                {

                    cout << "*";
                }
                cout << endl;
            }

            cout << "\nPola 4\n"<< endl;

            for (int i = 1; i <= Input; i++)
            {
                for (int z = 1; z < i; z++)
                {
                    cout << " ";
                }
                for (int o = Input; o >= i; o--)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }else{
            goto MainMenu;
        }

        cout<<"Lagi [ Y / N ] : ";cin>>Pilihan;
    } while (Pilihan == 'Y' || Pilihan == 'y');

    
    
    
    
   
}
