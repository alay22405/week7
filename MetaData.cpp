
#include <iostream>
#include <string>
#include "MetaHeader.h"
int main() {
    ImageMetaData MetaData;
    MetaData.setFileName("File");
    MetaData.setImageType("JPEG");
    MetaData.setDate(2, 5, 2021);
    MetaData.setSize(40);
    MetaData.setAuthorName("Alay");
    MetaData.setDimensions(5, 5);
    MetaData.setApertureSize("f/22");
    MetaData.setExposureTime(1 / 30);
    MetaData.setISO(3000);
    MetaData.setFlash(true or false);
    print(MetaData);
    return 0;
}