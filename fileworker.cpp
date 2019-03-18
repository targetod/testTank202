#include "fileworker.h"
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;



FileWorker::FileWorker(){
   strcpy(m_fileName, "temp.txt");
   strcpy(m_data, "");
   cout << "Constructor" <<endl;
}


void FileWorker::setData()
{
    cout << "Enter Data"<<endl;
    cin.getline(m_data,LEN);
}

void FileWorker::setFileName()
{
    cout << "Enter file name , like prog.txt ";
    cin >> m_fileName;
    cin.get();
}

void FileWorker::writeToFile()
{
    FILE * f = fopen(m_fileName, "wt");
    int realLen = strlen(m_data);
    fwrite(m_data, sizeof(char), realLen, f);
    fclose(f);
    cout << "File has been written! \n";

}

void FileWorker::readFromFile()
{
    FILE * f = fopen(m_fileName, "rt");
    //strcpy(m_data, "");
    memset(m_data, '\0',LEN);
    fread(m_data,sizeof(char), LEN, f);
    fclose(f);
    cout << "DATA from file \n";
    cout << m_data <<endl;

//    for (int i =0; m_data[i] != '\0'  ;++i) {
//        cout << m_data[i];
//    }
}


