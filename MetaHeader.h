#include<iostream> 

class ImageMetaData { 
private: 
    std::string FileName;
    std::string ImageType;
    int date, month, year;
    double size;
    std::string AuthorName;
    double width, height;
    std::string ApertureSize;
    double ExposureTime;
    int Iso;
    bool flash;
public: 
    std::string getFileName() {
        return FileName;
    }
    void setFileName(std::string name) {
        FileName = name;
    }
    std::string getImageType() {
        return ImageType;
    }
    void setImageType(std::string type) {
        if (type == "PNG" || type == "GIF" || type == "JPEG") 
            ImageType = type;
        
    }
    int getDay() {
        return date;
    }
    int getMonth() {
        return month;
    }
    int getYear() {
        return year;
    }
    void setDate(int d, int m, int y) {
        if (d >= 1 && d <= 32 && m>=0 && m <= 13 && y>=0) {
            date = d; month = m; year = y;
        }
        
    }
    double getSize() {
        return size;
    }
    void setSize(double s) {
        if (s >= 0)
            size = s;
       
    }
    std::string getAuthorName() {
        return AuthorName;
    }
    void setAuthorName(std::string name) {
        AuthorName = name;
    }
    void setDimensions(double width, double height) {
        if (width >= 0 && height >= 0) { 
            width = width;
            height = height;
        }
        
    }
    double getWidth() {
        return width;
    }
    double getHeight() {
        return height;
    }
    std::string getApertureSize() {
        return ApertureSize;
    }
    void setApertureSize(std::string aSize) {
        if (aSize.size() > 2 && aSize.at(0) == 'f' && aSize.at(1) == '/') 
            ApertureSize = aSize;
        
    }
    void setExposureTime(double ExposureTime) {
        if (ExposureTime >= 0) 
            ExposureTime = ExposureTime;
       
    }
    double getExposureTime() {
        return ExposureTime;
    }
    void setISO(int ISO) {
        Iso = ISO;
    }
    int getISO() {
        return Iso;
    }
    void setFlash(bool enabled) {
        flash = enabled;
    }
    bool isFlashEnabled() {
        return flash;
    }
};

void print(ImageMetaData MetaData) {
    std::cout << "Printint the image metadata" << "\n";
    std::cout << "File Name : " << MetaData.getFileName() << "\n";
    std::cout << "Image Type : " << MetaData.getImageType() << "\n";
    std::cout << "Creation Date : " << MetaData.getDay() << "/" << MetaData.getMonth() << "/" << MetaData.getYear() << "\n";
    std::cout << "Size : " << MetaData.getSize() << "\n";
    std::cout << "Author Name : " << MetaData.getAuthorName() << "\n";
    std::cout << "Image Dimension : " << MetaData.getWidth() << "x" << MetaData.getHeight() << "\n";
    std::cout << "Aperture Size : " << MetaData.getApertureSize() << "\n";
    std::cout << "Exposure time : " << MetaData.getExposureTime() << "\n";
    std::cout << "ISO value : " << MetaData.getISO() << "\n";
    std::cout << "Flash enabled : " << MetaData.isFlashEnabled() << "\n";
    std::cout << "\n";
}
