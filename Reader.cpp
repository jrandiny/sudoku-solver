#include "Reader.h"

Reader::Reader(){

}

Node** Reader::baca(){
    char manual_input[9];
    char hasil_input[9][9];
    Node output[9][9];

    for(int i=0;i<9;i++){
        cin >> manual_input[i];
        for(int u=0;u<9;u++){
            //Algoritma cek baris
            if(manual_input[i].length()!=9){
                cout<<"Ulangi input baris "<<i+1<<" !!! (1 baris haya diisi oleh 9 angka antara 1-9 !!)"<<endl;
                for(int e=0;e<i;e++){
                    cout<<manual_input[e]<<endl;
                }
                i--;
                u=9;
            }
            else{
                hasil_input[i][u]=manual_input[i][u];
                }
        }
    }

    for(int i=0;i<9;i++){
        for(int u=0;u<9;u++){
            cout<<hasil_input[i][u];
        }
        cout<<endl;
    }
    cout<<endl;
}
