//
//  Item4.cpp
//  EffectiveCPP
//
//  Created by 舞 on 2022/10/1.
//

#include "Item4.hpp"

class FileSytem {
public:
    size_t numDisks() const;
};

FileSytem& tfs() {
    static FileSytem fs;
    return fs;
}

size_t FileSytem::numDisks() const {
    return 0;
}

class Directory {
public:
    Directory();
    Directory& tempDir();
};

Directory::Directory() {
    size_t disks = tfs().numDisks();
}

Directory& tempDir() {
    static Directory td;
    return td;
}

void testItem4() {
    
}
