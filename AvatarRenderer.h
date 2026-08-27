#pragma once
#include <iostream>
#include <string>

class AvatarRenderer {
public:
    void BuildBaseDummy();
    void ApplyClothing(const std::string& shirtId, const std::string& pantsId);
    void AttachAccessory(const std::string& hatAssetId);
};
