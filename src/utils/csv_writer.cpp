#include "utils/csv_writer.hpp"

CSVWriter::CSVWriter(const std::string& filename) {
    file.open(filename, std::ios::out); // overwrite if exists
    if (file.is_open()) {
        file << "N,min,avg,max\n"; // header row
    }
}

void CSVWriter::addRow(int N, double min, double avg, double max) {
    if (file.is_open())
        file << N << ";" << min << ";" << avg << ";" << max << "\n";
}

CSVWriter::~CSVWriter(){
    if (file.is_open())
        file.close();
}