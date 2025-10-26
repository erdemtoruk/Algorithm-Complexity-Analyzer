#ifndef CSV_WRITER_HPP
#define CSV_WRITER_HPP

#include <fstream>
#include <string>

class CSVWriter {
private:
    std::ofstream file;
public:
    // Constructor opens the CSV file and writes the header
    CSVWriter(const std::string& filename);

    // Add a single row to the CSV
    void addRow(int, double, double, double);

    // Destructor closes the file
    ~CSVWriter();
};

#endif