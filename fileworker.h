#ifndef FILEWORKER_H
#define FILEWORKER_H

const int LEN = 100;

class FileWorker
{
private:
    char m_data[LEN];
    char m_fileName[LEN];

public:

    FileWorker();

    void setData();
    void setFileName();
    void writeToFile();
    void readFromFile();

};

#endif // FILEWORKER_H
